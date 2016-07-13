/**
* Codifica una cadena en base 64 para tener 
* caracteres imprimibles en ascii*/
unsigned char *encode64(unsigned char* entrada,long l){
    unsigned char mask = 0xfc;
    unsigned char mask1 = 0x03;
    unsigned char mask2 = 0xf0;
    unsigned char mask3 = 0x0f;
    unsigned char mask4 = 0xc0;
    unsigned char mask5 = 0x3f;
    unsigned char tmp;
    unsigned char tmp1;
    unsigned char* salida;
    
    salida =(unsigned char *)calloc(5, sizeof(unsigned char));
    
    salida[4] = '\0';
    
    //obtenemos el primer caracter
    tmp = entrada[0]&mask;
    tmp = tmp>>2;
    salida[0] = tabla[tmp];
    
    //obtenemos el segundo caracter
    //obtenemos los dos bits menos signidificativos del primer byte
    tmp = entrada[0] & mask1;
    //recorremos los dos bits 4 posiciones y estaran en su lugar
    tmp = tmp<<4;
    
    //obtenemos los 4 bits mas siginificativos del segundo byte
    tmp1 = entrada[1] & mask2;
    //recorremos 4 posiciones y estaran en su lugar
    tmp1 = tmp1>>4;
    //juntamos los bits
    tmp = tmp | tmp1;
    //guardamos el segundo byte
    salida[1] = tabla[tmp];
    
    //obtenemos el tercer caracter
    tmp = entrada[1] & mask3;
    //recorremos 2 posiciones
    tmp = tmp<<2;
    
    //obtenemos los dos mas significativos del ultimo caracter
    tmp1 = entrada[2] & mask4;
    //recorremos 6 posiciones
    tmp1 = tmp1>>6;
    //juntamos y formamos el tercer caracter
    tmp = tmp | tmp1;
    //guardamos el tercer byte
    salida[2] = tabla[tmp];
    
    //obtenemos el ultimo caracter
    tmp = entrada[2] & mask5;
    //asignamos a la ultima salida
    salida[3] = tabla[tmp];
    
    
    //printf("bytes %d\n",tmp);

 
    
    //salida[1] = tabla[tmp1];
    
    
    //printf("%c",salida[0]);
    return salida;
}

/**
* Decodifica una cadena en base 64
*/
unsigned char *decode64(unsigned char* entrada,long l){
}