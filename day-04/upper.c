#include<stdio.h>
int main(){
    char lower, upper;
    printf("Enter a lowercase letter: ");
    scanf("%c", &upper);
    lower = tolower(upper);
    printf("The lowercase equivalent of %c is %c.\n", upper, lower);
}