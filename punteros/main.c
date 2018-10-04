#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //printf("%s\n",MENSAJE_AYUDA);
    int x = 1;
    int y = 2;
    printf("Inicializacion\n");
    printf("valor de 'x': %d\n",x);
    printf("valor de 'y': %d\n",y);

    printf("ip es un puntero a entero, puntero a 'x', guarda la direccion de 'x' (&x)\n");
    int *ip; // Defino un puntero
    ip = &x; // Hay que asignar la dirección de la variable
    printf("Contenido del puntero ip (direccion de memoria): %d\n",(int)ip);
    printf("Contenido de lo que apunta ip: %d\n",*ip);

    printf("A 'y' se le asigna el contenido de lo que apunta ip y a 'x' el contenido del puntero\n");
    y = *ip;
    x = (int)ip;

    printf("valor de 'x': %d\n",x);
    printf("valor de 'y': %d\n",y);

    *ip = 3;
    printf("A lo que apunta ip se le asigna %d\n",*ip);

    printf("valor de 'x': %d\n",x);
    printf("valor de 'y': %d\n",y);
    return 0;
}
