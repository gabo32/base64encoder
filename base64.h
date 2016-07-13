/******************************/
/* Autor: Gabriel Brice�o Juan      */
/*Nombre: Codificador de base 64*/
/*                                                  */
/* Fecha. 5 de julio de 2016          */
/*se permite libre distribucion de  */
/*este archivo                                */
/*******************************/

#ifndef __BASE64_H
#define __BASE64_H
#include <stdio.h>
#include <string.h>   

unsigned char* tabla = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

//definimos los prototipos de las funciones a utilizar

//codifica una cadena en base 64 para obtener solo valores 
//de ascii imprimibles
unsigned char* enconde64(unsigned char*,long);

//devuelve la cadena ingresada al formato original 
//es decir decodifica la base 64
unsigned char* decode64(unsigned char*,long);

#include "base64/base64.c"


#endif