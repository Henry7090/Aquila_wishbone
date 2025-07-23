#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <string.h>
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
    
    printf("SD Card initialized.\n");
    char wbuf[512], rbuf[512];
    for (int i = 0; i < 512; i++) wbuf[i] = i & 0xFF;
    if (sdspi_write(sdcard, 0, 1, wbuf) != 0) {
        printf("Write failed.\n");
        exit(0);
    }
    memset(rbuf, 0, 512);
    sdspi_read(sdcard, 0, 1, rbuf);

    for (int i = 0; i < 512; i++) {
        if (wbuf[i] != rbuf[i]) {
            printf("Mismatch at %d: wrote 0x%02x, read 0x%02x\n", i, wbuf[i], rbuf[i]);
            exit(0);
        }
    }

    printf("Read/Write test passed.\n");
    exit(0);
}