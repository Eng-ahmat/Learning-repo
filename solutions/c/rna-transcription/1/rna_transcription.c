#include<stdlib.h>
#include "rna_transcription.h"
char *to_rna(const char *dna){
    int len = str_len(dna);
    char *rna = malloc((len + 1) * sizeof(char));
    for(int i=0; i < len; i++){
        rna[i] = dna_to_rna(dna[i]);
    }
    rna[len] = '\0';
    return rna;
}

char dna_to_rna(char nucleotide){
    char rna = '\0';
    switch (nucleotide){
        case 'C':
            rna = 'G';
            break;
        case 'G': 
            rna = 'C';
            break;
        case 'T':
            rna = 'A';
            break;
        case 'A':
            rna = 'U';
            break;
        default:
            rna = '\0';
            break;
    }
    return rna;
}
int str_len(const char *str){
    int len = 0;
    while(str[len] != '\0'){
        len++;
    }
    return len;
}