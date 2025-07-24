// =============================================================================
//  Program : file_read.h
//  Author  : Chun-Jen Tsai
//  Date    : Dec/03/2024
// ------------#include "sdspidrv.h"-----------------------------------------------------------------
//  Description:
//      This is a library of file reading functions for MNIST test
//  images & labels. It also contains a function for reading the model
//  weights file of a neural network.
//
//  This program is designed as one of the homework project for the course:
//  Microprocessor Systems: Principles and Implementation
//  Dept. of CS, NYCU (aka NCTU), Hsinchu, Taiwan.
// -----------------------------------------------------------------------------
//  Revision information:
//
//  None.
// =============================================================================
#include "sdspidrv.h"
#define big2little32(p) ((p[0]<<24)|(p[1]<<16)|(p[2]<<8)|p[3])

float **read_images(char *filename, int *n_images, int *n_rows, int *n_cols, int padding, SDSPIDRV *dev);
uint8_t *read_labels(char *filename, SDSPIDRV *dev);
float *read_weights(char *filename, SDSPIDRV *dev);

