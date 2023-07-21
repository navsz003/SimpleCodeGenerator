#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    char filename[21];
    char filenameJava[26];

    printf("What is the filename? (less than 21 characters): ");
    scanf("%s", filename);
    strcpy(filenameJava, filename);
    strcat(filenameJava, ".java");
    printf("Your file is: %s\n", filenameJava);

    char cmdMkfile[32] = "touch ";
    strcat(cmdMkfile, filenameJava);

    char cmdWrite[512] = "echo 'public class ";
    strcat(cmdWrite, filename);
    strcat(cmdWrite, " {\n\tpublic static void main(String[] args){\n\t\n\t}\n}");
    strcat(cmdWrite, " ' > ");
    strcat(cmdWrite, filenameJava);
    //strcat(cmdWrite, "{\n\t\n}");

/*
    printf("cmdMkfile = %s\n", cmdMkfile);
    printf("cmdWrite = %s\n", cmdWrite);
*/
    system(cmdMkfile);
    system(cmdWrite);

    return EXIT_SUCCESS;
}
