#include "darts.h"
#include <math.h>

int score(coordinate_t coordinate){
    float distance = pow(coordinate.x, 2) + pow(coordinate.y, 2);
    if(distance <= 1){
        return 10;
    }else if(distance <= 25){
        return 5;
    }else if(distance <= 100){
        return 1;
    }    
    return 0;
}