#include <stdio.h>
/*
* fputc: write a char to a file, return the character written
* fputs: write a string to a file, return a non-negative value on success
* fwrite: write data to a file, return the number of items written
*/

int main()
{
    FILE*f;

    // fputc writes a single character to the file
    printf("----------------fputc----------------\n");
    f = fopen("./files/1.txt", "w");
    int c = fputc('A', f);
    if (c != EOF) {
        printf("Character '%c' written successfully.\n", c);
    } else {
        printf("Error writing character.\n");
    }
    fclose(f);

    // fputs writes a string to the file
    printf("----------------fputs----------------\n");
    f = fopen("./files/2.txt", "w");
    int result = fputs("Hello, World!", f);
    printf("%d\n",result);
    fclose(f);

    // fwrite writes an array of data to the file
    printf("----------------fwrite----------------\n");
    f = fopen("./files/3.txt", "w");
    char buffer[] = "Hello, World!";
    int n = fwrite(buffer, sizeof(char), sizeof(buffer) - 1, f);
    printf("Wrote %d bytes to the file.\n", n);
    fclose(f);

    return 0;
}