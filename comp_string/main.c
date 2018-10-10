#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char str1[15];
    char str2[15];
    int ret;

    strcpy(str1, "abcdef");
    strcpy(str2, "ABCDEF");

    ret = strcmp(str1, str2);

    if(ret < 0) {
        printf("str1 is less than str2\n");
    } else if(ret > 0) {
        printf("str2 is less than str1\n");
    } else {
        printf("str1 is equal to str2\n");
    }

    strcpy(str1, "igual");
    strcpy(str2, "igual");

    ret = strcmp(str1, str2);

    if(ret) {
        printf("Las cadenas son distintas. Valor de ret: %d\n", ret);
    } else {
        printf("Las cadenas son iguales. Valor de ret: %d\n", ret);
    }

    char cadena1[] = "zzzzzzzzzzzz a";
    char cadena2[] = "zzzzzzzzzzzz b";
    char cadena3[] = "zzzzzzzzzzzz sabia que Asuntos Internos le tendia una trampa";
    printf("%s\n", cadena1);
    printf("%s\n", cadena2);
    printf("%s\n", cadena3);

    int valor1 = atoi(cadena1);
    int valor2 = atoi(cadena2);
    int valor3 = atoi(cadena3);

    printf("%d\n", valor1);
    printf("%d\n", valor2);
    printf("%d\n", valor3);

    return 0;
}
