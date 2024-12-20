#include <stdio.h>

void modificate(int *ram, int *lat)
{
    *ram = *ram - 1;
    *lat = *lat + 1;
}

int main()
{
    int ram = 32;
    int latency = -64;

    modificate(&ram, &latency);  // Передаем адреса переменных
    printf("%d %d\n", ram, latency);  // Выводим значения переменных
    return 0;
}

