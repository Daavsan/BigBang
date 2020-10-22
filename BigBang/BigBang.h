//
// Created by Jacob on 2020-10-20.
//

#include "tga.h"

#ifndef BIGBANG_BIGBANG_H
#define BIGBANG_BIGBANG_H

#define NUMBER_OF_PARTICLES 5
#define NUMBER_OF_ITERATIONS 100
#define GRAVITY_CONSTANT 50
#define NUMBER_OF_INITIAL_ITERATIONS 10
#define SCALING_OF_INITIAL_ITERATIONS 5

#define MINIMUM_DISTANCE 50
#define PI 3.14159265359
#define ORDER_OF_MAGNITUDE 0.0002
#define SLOW_DOWN_FACTOR 1.0


struct particles{
    double speedX;
    double speedY;
    double x;
    double y;
    double radius;
};

void randCircle(struct particles *particle, int height, int width);


double mass(struct particles *particle);
double distance(struct particles *particleN, struct particles *particleP);
double gravity(struct particles *particleN, struct particles *particleP);
double slope(struct particles *particleN, struct particles *particleP);

void draw_circle(PIXEL_RGB24 *image, int width, int height, int x0, int y0, int radius, const PIXEL_RGB24 *color);



#endif //BIGBANG_BIGBANG_H
