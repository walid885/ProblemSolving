/*
    sum of even number problem in clash of code.
    I have just looped through the numbers, and if the number is even, we add it to the sum. 
    just as the same concept of the print all odd numbers. 
    loop and verification of a condition. 
*/




#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n;
    int res  ; 
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        
        scanf("%d", &x);
        if(x % 2 == 0){
            res += x ;
        }
        
    }
    printf("%d",res);

    return 0;
}