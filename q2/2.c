#include <stdio.h>

int main() {
    FILE *file1, *file2;
    char ch;
    char file[]="file1.txt";
    char message[]="C programming language";
    fputs(message,file1);
    file1 = fopen("file1.txt", "r");

    if (file1 == NULL) {
        printf("Error: Unable to open file1.txt\n");
        return 1;
    }

    file2 = fopen("file2.txt", "w");

    if (file2 == NULL) {
        printf("Error: Unable to create file2.txt\n");
        return 1;
    }

    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file2);
    }

    fclose(file1);
    fclose(file2);

    printf("File copy successful.\n");

    return 0;
}