#include "queen_attack.h"
#include <stdlib.h>
static int is_valid(position_t queen){
    return queen.row < 8 && queen.column < 8;
}
attack_status_t can_attack(position_t queen_1, position_t queen_2){
    if (!is_valid(queen_1) || !is_valid(queen_2)){
        return INVALID_POSITION;
    }
    if (queen_1.row == queen_2.row && queen_1.column == queen_2.column){
        return INVALID_POSITION;
    }
    if (queen_1.row == queen_2.row ||
       queen_1.column == queen_2.column||
       abs((int)queen_1.row - (int)queen_2.row) == abs((int)queen_1.column - (int)queen_2.column)){
        return CAN_ATTACK;
       }
    return CAN_NOT_ATTACK;
}