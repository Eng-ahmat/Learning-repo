#include "collatz_conjecture.h"
int steps(int start){
    int count_steps = 0;
    // int number = start;
    if(start < 1){
        return ERROR_VALUE;
    } while(start > 1){
        start = (start % 2 == 0) ? (start / 2) : (start * 3 + 1);
        ++count_steps;
    }
    return count_steps;
}