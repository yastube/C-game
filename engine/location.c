#include "raylib.h"

Vector2 getCenteringPoints(Rectangle rect){
    float midy = GetRenderHeight() / 2.0f;
    float midx = GetRenderWidth() / 2.0f;

    return (Vector2){
        midx - (rect.width / 2),
        midy - (rect.height / 2),
    };
}

Vector2 getCenteringPointsWH(Vector2 wh){
    float midy = GetRenderHeight() / 2.0f;
    float midx = GetRenderWidth() / 2.0f;

    return (Vector2){
        midx - (wh.x / 2),
        midy - (wh.y / 2),
    };
}

float getCenteringPointX(float width){
    float midx = GetRenderWidth() / 2.0f;
    
    return midx - (width / 2);
}

float getCenteringPointY(float height){
    float midy = GetRenderHeight() / 2.0f;
    
    return midy - (height / 2);
}