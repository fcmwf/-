#include <stdint.h>
#include <iostream>
#include <assert.h>
#include "include/debug.h"

extern uint8_t pmem[];

uint64_t load_img(char* img_file) {
    FILE* file = fopen(img_file, "rb"); // Open the file in binary mode

    if (file == NULL) {
        perror("Error opening file");
        return 0; // Return 0 to indicate failure
    }

    fseek(file, 0, SEEK_END); // Move file pointer to the end of the file
    uint64_t file_size = ftell(file); // Get the file size
    fseek(file, 0, SEEK_SET); // Reset file pointer to the beginning

    // Read the file contents into pmem
    size_t bytes_read = fread(pmem, 1, file_size, file);

    if (bytes_read != file_size) {
        fprintf(stderr, "Error reading file\n");
        fclose(file);
        return 0; // Return 0 to indicate failure
    }

    fclose(file); // Close the file

    return file_size; // Return the size of the loaded file
}
