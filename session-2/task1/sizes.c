
/*
 * Use the sizeof() operator to examine memory use 
 * of primitive types char,int,float
 */

#include <stdio.h>

int main( void ) {

    char testChar;
    int testInt;
    float testFloat;
    short int testshortint;
    long int testlongint;
    double testdouble;

    printf("Char size is %ld bytes\n",sizeof(testChar));
    printf("Int size is %ld bytes\n",sizeof(testInt));
    printf("Float size is %ld bytes\n",sizeof(testFloat));
    printf("Short Int size is %ld bytes\n",sizeof(testshortint));
    printf("Long Int size is %ld bytes\n",sizeof(testlongint));
    printf("Double size is %ld bytes\n",sizeof(testdouble));

    return 0;
}
