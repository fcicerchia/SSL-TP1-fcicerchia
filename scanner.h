#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

enum TOKENS{FDT = EOF, SEP = ',', CAD};
char buffer[256] ;
int get_token();

#endif