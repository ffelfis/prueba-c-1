#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE* ptr_file;
    ptr_file = fopen("files/zeta.txt", "r");
    int contador = 0;

    if (!ptr_file)
        return 1;

    while (fgetc(ptr_file) != EOF){
        contador++;
    }

    printf("Cantidad de caracteres: %d\n", contador);
    return 0;
}
