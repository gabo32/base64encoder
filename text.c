#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "base64.h"


int main(){
    unsigned char* cadena = "e.";
    unsigned char* salida;
    long lCadena = 3l;
    
    salida = encode64(cadena,lCadena);
    printf("\n\n>>%s\n\n  encodear\n",salida);
    
    
    
    
    printf("hola");
    printf("\n");
    system("pause");
    return 0;
}
    