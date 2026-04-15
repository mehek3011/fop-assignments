#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source, *destination;
    char ch;

    // Open source file 
    source = fopen("source.txt", "r");
    if (source == NULL) {
        printf("Error opening source file.\n");
        exit(1);
    }

    // Open destination 
    destination = fopen("destination.txt", "w");
    if (destination == NULL) {
        printf("Error opening destination file.\n");
        fclose(source);
        exit(1);
    }

    // Copy contents 
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully.\n");

    // Close both files
    fclose(source);
    fclose(destination);

    return 0;
}