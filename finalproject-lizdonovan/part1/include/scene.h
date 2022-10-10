#include "hittable_list.h"
#include "hittable_list.h"

#include <fstream>

class scene {
    public:
        scene(hittable_list w, camera c, double ar) {
            world = w;
            cam = c;
            aspect_ratio = ar;

            //aspect_ratio = 16.0 / 9.0;
            image_width = 400;
            image_height = static_cast<int>(image_width / aspect_ratio);
            // Antialiasing Requirement
            samples_per_pixel = 100;
            max_depth = 50;

        }
        ~scene() {}
        //void addToWorld(sphere s) {}

        void changeCam(camera c) {
            cam = c;
        }
        
        color ray_color(const ray& r, const hittable& world, int depth) {
            hit_record rec;

            // limit ray bounce
            if(depth <= 0) {
                return color(0,0,0);
            }

            if(world.hit(r, 0.001, infinity, rec)) {
                ray scattered;
                color attenuation;
                if (rec.mat_ptr->scatter(r, rec, attenuation, scattered))
                    return attenuation * ray_color(scattered, world, depth-1);
                return color(0,0,0);
            }
            vec3 unit_direction = unit_vector(r.direction());
            auto t = 0.5 * (unit_direction.y() + 1.0);
            return (1.0 - t) * color(1.0,1.0,1.0) + t * color(0.5,0.7,1.0);
        }

        // saves image to ppm file
        void renderImage(std::string file) {
            // PPM Requirement 
            std::ofstream outputFile;

            outputFile.open(file);

            outputFile << "P3\n" << image_width << ' ' << image_height << "\n255\n";
            for(int h = image_height - 1; h >= 0; --h) {
                std::cerr << "\rScanlines remaining: " << h << ' ' << std::flush;
                for(int w = 0; w < image_width; ++w) {
                    // Antialiasing Requirement
                    color pixel_color(0,0,0);
                    for(int i = 0; i < samples_per_pixel; ++i) {
                        auto u = (w + random_double()) / (image_width-1);
                        auto v = (h + random_double()) / (image_height-1);
                        ray r = cam.get_ray(u, v);
                        pixel_color += ray_color(r, world, max_depth);
                    }
                    color final = calc_color(pixel_color, samples_per_pixel);
                    outputFile << final.x() << ' ' 
                                << final.y() << ' '
                                << final.z() << '\n'; 
                }
            }
            std::cerr << "\nDone.\n";
            outputFile.close();  
        }

        void updateLookFrom(point3 p) {
            cam.origin = p;
        }

    public:
        hittable_list world;
        camera cam;
        int image_width;
        int image_height;;
        // Antialiasing Requirement
        int samples_per_pixel;;
        int max_depth;
        double aspect_ratio;

        
        
};