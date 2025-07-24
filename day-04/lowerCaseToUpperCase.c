#include <stdio.h>
int main()
{
    char lower;
    printf("Enter a lowercase letter: ");
    scanf("%c", &lower);

    printf("The uper Case Leter is %c", lower-32);
    return 0;
}
