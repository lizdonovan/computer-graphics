// common header
#include "rtweekend.h"

#include "color.h"
#include "hittable_list.h"
#include "sphere.h"
#include "camera.h"
#include "vec3.h"
#include "material.h"
#include "scene.h"

#include <iostream>
#include <fstream>



int main() {
    
    auto aspect_ratio = 16.0 / 9.0;
    auto aperture = 2.0;

    // Camera 
    point3 lookfrom(3,1,-10);
    point3 lookat(0,0,-1);
    vec3 vup(0,1,0);
    auto dist_to_focus = (lookfrom-lookat).length();
    camera cam(lookfrom, lookat, vup, 20, aspect_ratio, aperture, dist_to_focus);

    // Materials 
    auto material_ground = make_shared<metal>(color(0.6, 0.6, 0.6), 0.5);
    auto material_solid = make_shared<lambertian>(color(1.0, 0.5, 1.0));
    auto material_clear   = make_shared<dielectric>(1.5);
    auto material_metal  = make_shared<metal>(color(0.8, 0.6, 0.2), 0.0);

    // world
    hittable_list world;

    // frames
    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3(-1.0,    0.0, 1.0),   1.5, material_clear));
    // world.add(make_shared<sphere>(point3(-1.0,    0.0, 1.0), -1.45, material_clear));
    // world.add(make_shared<sphere>(point3( 4.0,    0.0, 1.0),   0.5, material_metal));
    
    // scene frame00(world, cam, aspect_ratio);
    // frame00.renderImage("images/sphere00.ppm");
 
    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3(-1.0,    0.0, 1.0),   1.5, material_clear));
    // world.add(make_shared<sphere>(point3(-1.0,    0.0, 1.0), -1.45, material_clear));
    // world.add(make_shared<sphere>(point3( 3.0,    0.0, 1.0),   0.5, material_metal));

    // scene frame01(world, cam, aspect_ratio);
    // frame01.renderImage("images/sphere01.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3(-1.0,    0.0, 1.0),   1.5, material_clear));
    // world.add(make_shared<sphere>(point3(-1.0,    0.0, 1.0), -1.45, material_clear));
    // world.add(make_shared<sphere>(point3( 2.0,    0.0, 1.0),   0.5, material_metal));
  
    // scene frame02(world, cam, aspect_ratio);
    // frame02.renderImage("images/sphere02.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3(-1.0,    0.0, 1.0),   1.5, material_clear));
    // world.add(make_shared<sphere>(point3(-1.0,    0.0, 1.0), -1.45, material_clear));
    // world.add(make_shared<sphere>(point3( 1.0,    0.0, 1.0),   0.5, material_metal));

    // scene frame03(world, cam, aspect_ratio);
    // frame03.renderImage("images/sphere03.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3(-1.0,    0.0, 1.0),   1.5, material_clear));
    // world.add(make_shared<sphere>(point3(-1.0,    0.0, 1.0), -1.45, material_clear));
    // world.add(make_shared<sphere>(point3( 0.0,    0.0, 1.0),   0.5, material_metal));

    // scene frame04(world, cam, aspect_ratio);
    // frame04.renderImage("images/sphere04.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3(-1.0,    0.0, 1.0),   1.5, material_clear));
    // world.add(make_shared<sphere>(point3(-1.0,    0.0, 1.0), -1.45, material_clear));
    // world.add(make_shared<sphere>(point3( -2.0,    0.0, 1.0),   0.5, material_metal));
 
    // scene frame05(world, cam, aspect_ratio);
    // frame05.renderImage("images/sphere05.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3(-1.0,    0.0, 1.0),   1.5, material_clear));
    // world.add(make_shared<sphere>(point3(-1.0,    0.0, 1.0), -1.45, material_clear));
    // world.add(make_shared<sphere>(point3( -1.0,    0.0, 1.0),   0.5, material_metal));
 
    // scene frame06(world, cam, aspect_ratio);
    // frame06.renderImage("images/sphere06.ppm");
 
    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3(-1.0,    0.0, 1.0),   1.5, material_clear));
    // world.add(make_shared<sphere>(point3(-1.0,    0.0, 1.0), -1.45, material_clear));
    // world.add(make_shared<sphere>(point3( -1.0,    -0.15, 1.0),   0.5, material_metal));
 
    // scene frame07(world, cam, aspect_ratio);
    // frame07.renderImage("images/sphere07.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3(-1.0,    0.0, 1.0),   1.5, material_clear));
    // world.add(make_shared<sphere>(point3(-1.0,    0.0, 1.0), -1.45, material_clear));
    // world.add(make_shared<sphere>(point3( -1.0,    0.5, 1.0),   0.5, material_metal));

    // scene frame08(world, cam, aspect_ratio);
    // frame08.renderImage("images/sphere08.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3(-1.0,    0.0, 1.0),   1.5, material_clear));
    // world.add(make_shared<sphere>(point3(-1.0,    0.0, 1.0), -1.45, material_clear));
    // world.add(make_shared<sphere>(point3( -1.0,    0.0, 1.0),   0.5, material_metal));
    
    // scene frame09(world, cam, aspect_ratio);
    // frame09.renderImage("images/sphere09.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3(-1.0,    0.0, 1.0),   1.5, material_clear));
    // world.add(make_shared<sphere>(point3(-1.0,    0.0, 1.0), -1.45, material_clear));
    // world.add(make_shared<sphere>(point3( -1.0,    1.0, 1.0),   0.5, material_metal));

    // scene frame10(world, cam, aspect_ratio);
    // frame10.renderImage("images/sphere10.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3(-1.0,    0.0, 1.0),   1.5, material_clear));
    // world.add(make_shared<sphere>(point3(-1.0,    0.0, 1.0), -1.45, material_clear));
    // world.add(make_shared<sphere>(point3( -1.0,    0.0, 1.0),   0.5, material_metal));
     
    // scene frame11(world, cam, aspect_ratio);
    // frame11.renderImage("images/sphere11.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3(-1.0,    1.0, 1.0),   1.5, material_clear));
    // world.add(make_shared<sphere>(point3(-1.0,    1.0, 1.0), -1.45, material_clear));
    // world.add(make_shared<sphere>(point3( -1.0,    1.0, 1.0),   0.5, material_metal));

    // scene frame12(world, cam, aspect_ratio);
    // frame12.renderImage("images/sphere12.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3(-1.0,    2.0, 1.0),   1.5, material_clear));
    // world.add(make_shared<sphere>(point3(-1.0,    2.0, 1.0), -1.45, material_clear));
    // world.add(make_shared<sphere>(point3( -1.0,    2.0, 1.0),   0.5, material_metal));
     
    // scene frame13(world, cam, aspect_ratio);
    // frame13.renderImage("images/sphere13.ppm");

    // change camera view
    point3 lookfrom5(-20,3,18);
    point3 lookat5(0,2,-1);
    auto dist_to_focus5 = (lookfrom-lookat).length();
    
    camera cam5(lookfrom5, lookat5, vup, 20, aspect_ratio, aperture, dist_to_focus5);

    // scene frame14(world, cam5, aspect_ratio);
    // frame14.renderImage("images/sphere14.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3(-1.0,    3.0, 1.0),   1.5, material_clear));
    // world.add(make_shared<sphere>(point3(-1.0,    3.0, 1.0), -1.45, material_clear));
    // world.add(make_shared<sphere>(point3( -1.0,    3.0, 1.0),   0.5, material_metal));

    // scene frame15(world, cam5, aspect_ratio);
    // frame15.renderImage("images/sphere15.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3( -1.0,    3.0, 1.2),   1.5, material_clear));
    // world.add(make_shared<sphere>(point3( -1.0,    3.0, 1.2), -1.45, material_clear));
    // world.add(make_shared<sphere>(point3( -1.0,    3.0, 1.0),   0.5, material_metal));

    // scene frame16(world, cam5, aspect_ratio);
    // frame16.renderImage("images/sphere16.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3( -1.0,    4.0, 1.0),   1.5, material_clear));
    // world.add(make_shared<sphere>(point3( -1.0,    4.0, 1.0), -1.45, material_clear));
    // world.add(make_shared<sphere>(point3( -1.0,    3.7, 1.0),   0.5, material_metal));

    // scene frame17(world, cam5, aspect_ratio);
    // frame17.renderImage("images/sphere17.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3( -2.0,    5.0, 1.0),   1.5, material_clear));
    // world.add(make_shared<sphere>(point3( -2.0,    5.0, 1.0), -1.45, material_clear));
    // world.add(make_shared<sphere>(point3( -2.0,    4.2, 1.0),   0.5, material_metal));

    // scene frame18(world, cam5, aspect_ratio);
    // frame18.renderImage("images/sphere18.ppm");

    //world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3( -2.0,    6.0, 1.0),   1.5, material_clear));
    // world.add(make_shared<sphere>(point3( -2.0,    6.0, 1.0), -1.45, material_clear));
    // world.add(make_shared<sphere>(point3( -2.0,    5.0, 1.0),   0.5, material_metal));

    // scene frame19(world, cam5, aspect_ratio);
    // frame19.renderImage("images/sphere19.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3( -2.0,    7.0, 1.0),   1.5, material_clear));
    // world.add(make_shared<sphere>(point3( -2.0,    7.0, 1.0), -1.45, material_clear));
    // world.add(make_shared<sphere>(point3( -2.0,    6.0, 1.0),   0.5, material_metal));

    // scene frame20(world, cam5, aspect_ratio);
    // frame20.renderImage("images/sphere20.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3( -1.8,    7.5, 1.0),   1.5, material_clear));
    // world.add(make_shared<sphere>(point3( -2.0,    7.5, 1.0), -1.45, material_clear));
    // world.add(make_shared<sphere>(point3( -2.0,    4.0, 1.0),   0.5, material_metal));

    // scene frame21(world, cam5, aspect_ratio);
    // frame21.renderImage("images/sphere21.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3( -1.8,    8.0, 1.0),   1.5, material_clear));
    // world.add(make_shared<sphere>(point3( -2.0,    8.0, 1.0), -1.45, material_clear));
    // world.add(make_shared<sphere>(point3( -2.0,    -0.2, 1.0),   0.5, material_metal));

    // scene frame22(world, cam5, aspect_ratio);
    // frame22.renderImage("images/sphere22.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3( -2.0,    4.0, 1.0),   0.5, material_metal));

    // scene frame23(world, cam5, aspect_ratio);
    // frame23.renderImage("images/sphere23.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3( -2.0,    0.0, 1.0),   0.5, material_metal));

    // scene frame24(world, cam5, aspect_ratio);
    // frame24.renderImage("images/sphere24.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3( -2.0,    2.0, 1.0),   0.5, material_metal));

    // scene frame25(world, cam5, aspect_ratio);
    // frame25.renderImage("images/sphere25.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3( -2.0,    1.0, 1.0),   0.5, material_metal));

    // scene frame26(world, cam5, aspect_ratio);
    // frame26.renderImage("images/sphere26.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, 1.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3( -2.0,    0.6, 1.0),   0.5, material_metal));

    // scene frame27(world, cam5, aspect_ratio);
    // frame27.renderImage("images/sphere27.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 8.0,    1.0, -2.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3( -2.0,    0.0, 1.0),   0.5, material_metal));

    // scene frame27(world, cam5, aspect_ratio);
    // frame27.renderImage("images/sphere27.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 6.0,    1.0, -2.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3( -2.0,    0.0, 1.0),   0.5, material_metal));

    // scene frame28(world, cam5, aspect_ratio);
    // frame28.renderImage("images/sphere28.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 5.0,    0.0, -2.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3( -2.0,    0.0, 1.0),   0.5, material_metal));

    // scene frame29(world, cam5, aspect_ratio);
    // frame29.renderImage("images/sphere29.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 4.0,    -1.0, -2.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3( -2.0,    0.0, 1.0),   0.5, material_metal));

    // scene frame30(world, cam5, aspect_ratio);
    // frame30.renderImage("images/sphere30.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 3.0,    -2.0, -2.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3( -2.0,    0.0, 1.0),   0.5, material_metal));

    // scene frame31(world, cam5, aspect_ratio);
    // frame31.renderImage("images/sphere31.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( 3.0,    -4.0, -2.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3( -2.0,    0.0, 1.0),   0.5, material_metal));

    // scene frame32(world, cam5, aspect_ratio);
    // frame32.renderImage("images/sphere32.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( -4.0,    -2.0, -2.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3( -2.0,    0.0, 1.0),   0.5, material_metal));

    // scene frame33(world, cam5, aspect_ratio);
    // frame33.renderImage("images/sphere33.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( -4.0,    -1.0, -2.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3( -1.0,    0.0, 1.0),   0.5, material_metal));

    // scene frame34(world, cam5, aspect_ratio);
    // frame34.renderImage("images/sphere34.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( -5.0,    0.0, -2.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3( 0.0,    0.0, 1.0),   0.5, material_metal));

    // scene frame35(world, cam5, aspect_ratio);
    // frame35.renderImage("images/sphere35.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( -6.0,    1.0, -2.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3( 0.0,    0.0, 1.0),   0.5, material_metal));

    // scene frame36(world, cam5, aspect_ratio);
    // frame36.renderImage("images/sphere36.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( -5.0,    1.0, -2.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3( 0.0,    1.0, 1.0),   0.5, material_metal));

    // scene frame37(world, cam5, aspect_ratio);
    // frame37.renderImage("images/sphere37.ppm");

    // world.clear();

    // world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    // world.add(make_shared<sphere>(point3( -5.0,    1.0, -2.0),   2, material_solid));
    // world.add(make_shared<sphere>(point3( 0.0,    0.0, 1.0),   0.5, material_metal));

    // scene frame38(world, cam5, aspect_ratio);
    // frame38.renderImage("images/sphere38.ppm");

    world.clear();

    world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    world.add(make_shared<sphere>(point3( -5.0,    0.8, -2.0),   2, material_solid));
    world.add(make_shared<sphere>(point3( 0.0,    -0.1, 1.0),   0.5, material_metal));

    scene frame39(world, cam5, aspect_ratio);
    frame39.renderImage("images/sphere39.ppm");

    world.clear();

    world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    world.add(make_shared<sphere>(point3( -5.0,    4.0, -2.0),   2, material_solid));
    world.add(make_shared<sphere>(point3( 0.0,    2.1, 1.0),   0.5, material_metal));

    scene frame40(world, cam5, aspect_ratio);
    frame40.renderImage("images/sphere40.ppm");

    world.clear();

    world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    world.add(make_shared<sphere>(point3( -5.0,    1.0, -2.0),   2, material_solid));
    world.add(make_shared<sphere>(point3( 0.0,    5.0, 1.0),   0.5, material_metal));

    scene frame41(world, cam5, aspect_ratio);
    frame41.renderImage("images/sphere41.ppm");

    world.clear();

    world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    world.add(make_shared<sphere>(point3( -5.0,    -1.0, -2.0),   2, material_solid));
    world.add(make_shared<sphere>(point3( 0.0,    7.0, 1.0),   0.5, material_metal));

    scene frame42(world, cam5, aspect_ratio);
    frame42.renderImage("images/sphere42.ppm");

    world.clear();

    world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    world.add(make_shared<sphere>(point3( -5.0,    -2.0, -2.0),   2, material_solid));
    world.add(make_shared<sphere>(point3( 0.0,    8.0, 1.0),   0.5, material_metal));

    scene frame43(world, cam5, aspect_ratio);
    frame43.renderImage("images/sphere43.ppm");

    world.clear();

    world.add(make_shared<sphere>(point3( 0.0, -100.5, 1.0), 100.0, material_ground));
    world.add(make_shared<sphere>(point3( -5.0,    -3.0, -2.0),   2, material_solid));
    world.add(make_shared<sphere>(point3( 0.0,    8.0, 1.0),   0.5, material_metal));

    scene frame44(world, cam5, aspect_ratio);
    frame44.renderImage("images/sphere44.ppm");

    


    

    
     
}