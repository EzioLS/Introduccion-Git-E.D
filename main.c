#include <stdio.h>

int main(){
    unsigned int edad;

    char nom[50];
    //printf("Hola mundo \n");
    printf("Dame tu nombre: \n");
    fgets(nom, sizeof(nom), stdin);
    fflush(stdin);
    printf("Hola %s",nom);
    printf("Edad: ");
    scanf("%u",&edad);
    printf("Vas a cumlir %u", edad+1);
    return 0;
}
