/*
==> Write a Program that takes a integer number as input and Print .
*/

#include <stdio.h>
int main()
{
    int num;
    printf("Please enter an integer number: ");
    scanf("%d", &num); // input a number from user
    printf("You have pressed: %d\n", num); // print the number
    return 0;
}