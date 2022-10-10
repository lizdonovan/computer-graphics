#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"
#include <cmath>
#include <iostream>

// Antialiasing Requirement
color calc_color(color pixel_color, int samples_per_pixel) {
    auto r = pixel_color.x();
    auto g = pixel_color.y();
    auto b = pixel_color.z();

    // divide by samples
    // clamp out values
    // Gamma Requirement
    auto scale = 1.0 / samples_per_pixel;
    r = static_cast<int>(256 * clamp(sqrt(scale * r), 0.0, 0.999));
    g = static_cast<int>(256 * clamp(sqrt(scale * g), 0.0, 0.999));
    b = static_cast<int>(256 * clamp(sqrt(scale * b), 0.0, 0.999));

    return color(r,g,b);
    
}

#endif