#include <stdint.h>
#include <iostream>
#include <assert.h>
#include "include/debug.h"

extern uint8_t pmem[];

// load a binary file into your cpu
uint64_t load_img(char *img_file){

// Lab2 TODO: load the 'img_file' to the start of pmem, and return its size
    FILE *img = fopen(img_file, "rb");
    if (img == NULL) {
        perror("Error opening file");
        return 1;
    }

    int ptr=0;
    while(!feof(img)){
        size_t bytes_read = fread(&pmem[ptr], sizeof(uint8_t), 1024, img);
        if (bytes_read == 0) {
            perror("Error reading file");
            fclose(img);
            return 1;
        }
        ptr+=bytes_read;
    }

    fclose(img);
    return 0;
}