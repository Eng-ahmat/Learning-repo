#include "hamming.h"
int compute(const char *lhs, const char *rhs){
    int len_of_lhs = strlen(lhs);
    int len_of_rhs = strlen(rhs);
    int hamming_distence = -1;
    if(len_of_lhs != len_of_rhs){
        return hamming_distence;
    }
    hamming_distence = 0;
    for(int index=0; index < len_of_rhs; index++){
        if(lhs[index] != rhs[index]){
            hamming_distence++;
        } 
    }
    return hamming_distence;
}