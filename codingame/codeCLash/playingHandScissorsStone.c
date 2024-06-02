/*
solving the hand scissors, stone game in c . 
usage of the strcmp for comaprison between the different strings, and print always the winning game .
Strcmp returns 0 , if the strings are equals, else , it returns non 0  val. 
the == operator, in the context of a string, compares the @ of the arrays. 

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
    char o[257];
    scanf("%[^\n]", o);

if (strcmp(o,"Scissors") == 0){
    printf("Stone");
}else {
    if (strcmp(o,"Stone") == 0){
        printf("Hand");
    }else{
        if (strcmp(o,"Hand") == 0){
            printf("Scissors");
        }else {
            printf("Error");
        }
    }
}
    return 0;
}