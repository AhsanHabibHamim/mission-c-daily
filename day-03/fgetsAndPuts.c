#include<stdio.h>
#include<string.h>
int main(){
    char name[50];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Hello");
    puts(name);
    return 0;
}