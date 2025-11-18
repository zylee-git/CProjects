#include <stdio.h>

/*
* fopen: open a file
* fclose: close a file
* fread: read data from a file
* fgetc: read a char from a file
* fgets: read a line from a file
*/

int main()
{
    FILE* f = fopen("./files/a.txt", "r");
    // r: read mode
    // w: write mode
    // a: append mode
    // rb: read mode in binary
    // wb: write mode in binary
    // ab: append mode in binary

    // fgetc reads a single character from the file
    printf("----------------fgetc----------------\n");
    int c;
    while((c = fgetc(f)) != EOF)  // fgetc return -1 if EOF is reached
    {
        printf("%c", c);
    }
    printf("\n");
    fclose(f);
    
    //fgets reads a line from the file
    printf("----------------fgets----------------\n");
    f = fopen("./files/b.txt", "r");
    char buffer[1024];
    char* str;
    while((str = fgets(buffer, sizeof(buffer), f)) != NULL)  // return the string read from the file; return null if EOF is reached or an error occurs
    {
        printf("%s", str);
    }
    fclose(f);

    //fread reads data from the file
    printf("----------------fread----------------\n");
    f = fopen("./files/c.txt", "r");
    char data[1024];
    int n = fread(data,sizeof(char), sizeof(data), f);  // return the number of items read; read data from the file into the buffer
    printf("Read %d bytes: %s\n", n, data);
    fclose(f);

    return 0;
}