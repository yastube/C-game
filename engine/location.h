#ifndef LOCATION_H
#define LOCATION_H
#include <raylib.h>

float getCenteringPointY(float height);
float getCenteringPointX(float width);
Vector2 getCenteringPointsWH(Vector2 wh);
Vector2 getCenteringPoints(Rectangle rect);

#endif