#include "binary.h"
int convert(const char *input){
    int number = 0;
    int i = 0;
        while(input[i] != '\0'){
            if(input[i] != '0' && input[i] != '1'){
                return -1;
            }
            number = number * 2 + (input[i] - '0');
        i++;
    }
    return number;
}
