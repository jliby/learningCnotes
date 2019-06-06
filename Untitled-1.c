#include <stdio.h>

int main(){
    int contestants[] = [1,2,3]
    int *choice = contestants; /* sets a dereference */
    contestants[0] = 2;
    contestants[1] = contestants[2];
    contestants[2] = *choice;
    /*format the choice with print*/
    printf("I am going to choose the constestant with the number %\n", constestantsp[2])

}