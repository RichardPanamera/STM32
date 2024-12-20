#include <stdio.h>
#include <string.h>

struct microcontroller {
#include <stdio.h>

struct microcontroller {
    char name[50];
    float clock_speed;
    int flash_memory;
    int cores;
};

int main() {
    struct microcontroller stm32f407vg = {
        "STM32F407VG", 168.0, 1024, 1
    };

    printf("Microcontroller: %s\n", stm32f407vg.name);
    printf("Clock Speed: %.2f MHz\n", stm32f407vg.clock_speed);
    printf("Flash Memory: %d KB\n", stm32f407vg.flash_memory);
    printf("Cores: %d\n", stm32f407vg.cores);

    stm32f407vg.clock_speed = 180.0;
    stm32f407vg.flash_memory = 2048;
    stm32f407vg.cores = 2;

    printf("\nModified Data:\n");
    printf("Microcontroller: %s\n", stm32f407vg.name);
    printf("Clock Speed: %.2f MHz\n", stm32f407vg.clock_speed);
    printf("Flash Memory: %d KB\n", stm32f407vg.flash_memory);
    printf("Cores: %d\n", stm32f407vg.cores);

    return 0;
}

