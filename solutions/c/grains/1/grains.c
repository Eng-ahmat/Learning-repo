#include "grains.h"
#include<math.h>
uint64_t square(uint8_t index){
        return pow(2, index-1);
    // if(index == 0 || index == 65){
    //     return 0;
    // }else
    // return 1ULL << (index - 1);
    // I found this, but it is less comprensive! Not totally understood.
}

uint64_t total(void){
    // instead of bitwise operator or rewrite it as 2**64 - 1, cause the function up there is 2 ** 63 - 1.
    return 2 * square(64) - 1;
}