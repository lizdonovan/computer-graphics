#ifndef SPHERE_H
#define SPHERE_H

#include "rtweekend.h"
#include "hittable.h"


class sphere : public hittable {
    public:
        sphere() {}
        sphere(point3 c, double r, shared_ptr<material> m) : center(c), radius(r), mat_ptr(m) {};

        void move(point3 point) {
            center = point;
        }
        
        virtual bool hit(
            const ray& r, double t_min, double t_max, hit_record& rec) const override;

    public:
        point3 center;
        double radius;
        shared_ptr<material> mat_ptr;

};

bool sphere::hit(const ray& r, double t_min, double t_max, hit_record& rec) const {
    vec3 oc = r.origin() - center;
    auto a = r.direction().length_squared();
    auto half_b = dot(oc, r.direction());
    auto c = oc.length_squared() - radius * radius;

    auto discriminant = half_b * half_b - a * c;
    if(discriminant < 0) return false;
    auto sqrtD = sqrt(discriminant);

    // nearest root in range
    auto root = (-half_b - sqrtD) / a;
    if(root < t_min || t_max < root) {
        root = (-half_b + sqrtD) / a;
        if(root < t_min || t_max < root)
            return false;
    }

    rec.t = root;
    rec.p = r.at(rec.t);
    vec3 outward_normal = (rec.p - center) / radius;
    rec.set_face_normal(r, outward_normal);
    rec.mat_ptr = mat_ptr;

    return true;
}

#endif