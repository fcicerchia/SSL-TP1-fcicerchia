#include "scanner.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

    enum TOKENS token;
    
    while(token != FDT){
        token = get_token();
        
        switch (token){
        case SEP:
            printf("Separador: %c \n", buffer[0]);
            break;
        case CAD:
            printf("Cadena: %s \n", buffer);
            buffer[0] = '\0';
            break;
        default:
            printf("Fin de texto \n");
            break;
        }
    }
    return 0;
}