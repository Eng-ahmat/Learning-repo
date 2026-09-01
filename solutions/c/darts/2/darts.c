#include "darts.h"
#include <math.h>

int score(coordinate_t coordinate){
    float squared_distance = coordinate.x * coordinate.x + coordinate.y * coordinate.y;
    if(squared_distance <= 1){
        return 10;
    }else if(squared_distance <= 25){
        return 5;
    }else if(squared_distance <= 100){
        return 1;
    }    
    return 0;
}