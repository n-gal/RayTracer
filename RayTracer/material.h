#ifndef MATERIAL_H
#define MATERIAL_H
#include "rtweekend.h"

class material {
public:
    color albedo = color(1,1,1);
    color emissive = color(0, 0, 0);
    double roughness = 1;
    material(){}
    //material(color albedo, double roughness, color emissive) : albedo(albedo), roughness(roughness), emissive(emissive) {}
    material(color albedo, double roughness, color emissive = color(0,0,0)) : albedo(albedo), roughness(roughness), emissive(emissive){}
};
#endif