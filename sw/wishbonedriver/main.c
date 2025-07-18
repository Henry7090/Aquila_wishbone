#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

#include "file_read.h"
#include "./sdspidriver/sdspidrv.h"

#define SDSPI_ADDR 0xC2000000

int main()
{
    // check the printf is correct;
    printf("In the main function.\n");

    //  init the sdcard 
    SDSPI *sdhw = (SDSPI *)SDSPI_ADDR;
    SDSPIDRV *sdcard;
    sdcard = sdspi_init(sdhw);
    printf("In the main function.\n");

    // printf("succes in the function");
    // print_hello();
    // int *a = (int *)0xff000000; 
    return 0;
}

