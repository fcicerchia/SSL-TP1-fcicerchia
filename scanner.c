#include "scanner.h"

int get_token()
{
    char c;
    while (isspace(c = getchar())){
    };

    if (c == SEP){
        buffer[0] = c;
        return SEP;
    }
    else if (c == FDT) {
        return FDT;
    }
    else{
        int i = 0;
        do{
            buffer[i] = c;
            i++;
            c = getchar();
        } while (c != SEP && !isspace(c));
        ungetc(c, stdin);
        buffer[i++] = '\0';
        return CAD;
    }
}
