#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Las cadenas se definen con corchetes.
    char cadena[] = "cadena";
    double tres = 3;
    double uno = 1;
    double numero = uno / tres;
    // Los tipos deben de coincidir cuando operan entre si.
    printf("Hola mundo!\tHola otra vez.\tcaracter\ts\ta\n");
    printf("Numero %16.15f. La cadena es: %s\n",numero,cadena);
    return 0;
}
