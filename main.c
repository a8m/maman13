/*
 * =========================================================================================
 * name        : mmn_13/main.c
 * author      : Ariel Mashraki, ID 301......
 * email       : ariel@mashraki.co.il
 * description : sumOfBit function get a decimal numbers and return the and bitwise 
 * between them.
 * =========================================================================================
 */

#include "common.h"

/*
 *@param: int length, numer of arguments
 *@param: int, multiple atgumets, decimal numbers
 *@return: unsigned int, result of & operator
 */
int sumOfBits(int length,...)
{
    unsigned int elm, sum;
    int i;
    va_list argp;
    va_start(argp, length);
    
    elm = va_arg(argp, int);
    sum = elm;
    
    /*start msg*/
    printf(LINE);
    printf("Numbers: ");
    
    for (i = 0; i < length; i++) {
        sum &= elm;
        
        /*print numbers[i]*/
        printf("%d ", elm);
        
        elm = va_arg(argp, int);
    }
    /*print result*/
    va_end(argp);
    
    return sum;
}

int main()
{
    int sum1, sum2, sum3;
    printf(DESC);

    sum1 = sumOfBits(3, 10, 7, 3);
    printf(LINE);
    printf(RESULT, sum1);
    
    sum2 = sumOfBits(4, 10, 10, 10, 10);
    printf(LINE);
    printf(RESULT, sum2);
    
    sum3 = sumOfBits(5, 100, 39, 47, 61, 36);
    printf(LINE);
    printf(RESULT " \n", sum3);
    
    
    return EXIT;
}
