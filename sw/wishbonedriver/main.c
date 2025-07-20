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
    // if (sdcard != NULL) {                 
    //     printf("SD init failed\n");
    //     free(sdcard);                     
    //     return -1;
    // }

    printf("SD card is ready!\n");

    // try to read first sector
    char sector_buf[512];
    

    char write_buf[512];
     for (int i = 0; i < 512; i++) {
        write_buf[i] = 'b';
    }

    sdspi_write(sdcard, 5000000, 1, write_buf);
    sdspi_read(sdcard, 5000000, 1, sector_buf);

    
    
    // print the sector
    printf("Start to print the first sector\n");
    for (int i = 0; i < 512; i++) {
        printf("%c ", sector_buf[i]);
        if(i % 8 == 7){
            printf("\n");
        }
    }
    return 0;
}

