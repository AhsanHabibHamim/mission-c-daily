#include <stdio.h>
int main()
{
    char upper;
    printf("Enter a lowercase letter: ");
    scanf("%c", &upper);

    printf("The Lower Case Leter is %c", upper+32);
    return 0;
}