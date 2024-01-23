#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getBaseName(const char *filename, char *baseName) {
    const char *dot = strrchr(filename, '.');

    if (dot == NULL) {
        // No dot found, the entire filename is the base name
        strcpy(baseName, filename);
    } else {
        // Calculate the length of the base name
        size_t baseNameLength = dot - filename;

        // Copy the base name into the provided buffer
        strncpy(baseName, filename, baseNameLength);

        // Null-terminate the base name
        baseName[baseNameLength] = '\0';
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        // Print an error message if the number of arguments is incorrect
        fprintf(stderr, "Usage: %s <source_file>\n", argv[0]);
        return 1;
    }

    // Get the base name of the source file
    char baseName[100];  // Adjust the size based on your needs
    getBaseName(argv[1], baseName);

    // Construct the compilation command with the desired extension
    char compileCommand[100];
    snprintf(compileCommand, sizeof(compileCommand), "g++ %s -o %s.exe", argv[1], baseName);

    // Execute the compilation command
    int result = system(compileCommand);

    return result;
}
