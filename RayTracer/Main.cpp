#include "rtweekend.h"

#include <string>
#include <fstream>
#include <sstream> 
#include <iostream>

#include "hittable.h"
#include "hittable_list.h"
#include "sphere.h"
#include "camera.h"


int main() 
{
    hittable_list world;
    material red(color(0.7,0,0), 1);
    material blue(color(0,0,0.7), 1);
    material green(color(0,0.7,0), 1);
    material glowingWhite(color(1,1,1), 1, color(100,100,100));
    material white(color(0.7,0.7,0.7), 1);

    world.add(make_shared<sphere>(point3(0, 0, -1), 0.5, red));
    world.add(make_shared<sphere>(point3(1.5, 0.4, -2), 0.2, glowingWhite));
    //world.add(make_shared<sphere>(point3(0.7, -0.1, -1), 0.5, green));
    world.add(make_shared<sphere>(point3(0, -100.5, -2), 100, white));


    camera cam;

    cam.aspect_ratio = 16.0 / 9.0;
    cam.image_width = 1920; // 1920 3840 
    cam.max_depth = 30;
    cam.samples_per_pixel = 100;
    cam.render(world);
}