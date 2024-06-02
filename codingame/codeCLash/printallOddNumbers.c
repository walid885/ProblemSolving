/*
the problem statement was about printing the odd numbers , in that interval. 
the idea was just to loop from 0 to N , and print the number if the modulo after devision of 2. 
just a simple loop, and verfication if the condidtion is verified ( modulo != 0
here is my attempt down below to solve the issue )
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
    int N;
    scanf("%d", &N);
for (int i = 0 ; i <=N ; i++){
    if (i % 2 != 0) {
        printf("%d\n",i);
    }
}
    return 0;
}