#include <stdio.h>

int main(void)
{
    int paquetes_iniciales = 0;
    int paquetes_recibidos = 0;
    int paquetes_despachados = 0;
    int paquetes_pendientes = 0;

    if (scanf("%d %d %d",
              &paquetes_iniciales,
              &paquetes_recibidos,
              &paquetes_despachados) != 3)
    {
        return 1;
    }

    paquetes_pendientes = paquetes_iniciales - paquetes_recibidos - paquetes_despachados;

    printf("Paquetes pendientes: %d\n", paquetes_pendientes);
    return 0;
}
