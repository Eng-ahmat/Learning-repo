#include "queen_attack.h"
#include <stdlib.h>
attack_status_t can_attack(position_t queen_1, position_t queen_2){
    if((queen_1.row | queen_1.column | queen_2.row | queen_2.column) <= 7){
        int v_abs_diff = abs(queen_1.row - queen_2.row);
        int h_abs_diff = abs(queen_1.column - queen_2.column);
        if (v_abs_diff + h_abs_diff == 0){
            return INVALID_POSITION;
        }
        else if(v_abs_diff == 0 || h_abs_diff == 0 || v_abs_diff == h_abs_diff){  
            return CAN_ATTACK;
        }
        else{
            return CAN_NOT_ATTACK;
        }
    }
    return INVALID_POSITION;
    
}