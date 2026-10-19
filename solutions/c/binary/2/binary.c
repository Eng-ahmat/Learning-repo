#include "binary.h"
int convert(const char *input){
    int number = 0;
     for (; *input != '\0'; input++){
        unsigned char bit = *input - '0';
        if (bit > 1){
            return -1;
        }
            
            number = (number << 1) | bit;
    }
    return number;
}