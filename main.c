#include <stdio.h>

int main(){
    char nom[50];
    printf("Hola mundo \n");
    printf("Dame tu nombre: \n");
    gets(nom);
    fflush(stdin);
    printf("Hola %s",nom);
    return 0;
}
