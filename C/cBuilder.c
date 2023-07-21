#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    char filename[26];

    printf("What is the filename? (less than 24 characters): ");
    scanf("%s", filename);
    strcat(filename, ".c");
    printf("Your file is: %s\n", filename);

    char cmdMkfile[32] = "touch ";
    strcat(cmdMkfile, filename);

    char cmdWrite[512] = "echo \"#define _CRT_SECURE_NO_WARNINGS\n#include<stdio.h>\n#include<string.h>\n#include<stdlib.h>\n#include<math.h>\n#include<time.h>\n\nint main(){\n\n\treturn EXIT_SUCCESS;\n}\" > ";
    strcat(cmdWrite, filename);
/*
    printf("cmdMkfile = %s\n", cmdMkfile);
    printf("cmdWrite = %s\n", cmdWrite);
*/
    system(cmdMkfile);
    system(cmdWrite);

    return EXIT_SUCCESS;
}
