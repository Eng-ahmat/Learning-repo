#include "collatz_conjecture.h"
int steps(int start){
    int count_steps = 0;
    int shift;
    // int number = start;
    if(start < 1){
        return ERROR_VALUE;
    } 
    shift = __builtin_ctzll(start);
    count_steps += shift;
    start >>= shift;
    while(start > 1){
            start = start * 3 + 1;
            count_steps++;
            shift = __builtin_ctzll(start);
            count_steps += shift;
            start = start >> shift;
    }
    return count_steps;
}