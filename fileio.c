#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "fileio.h"

int writeFile(char* file, char* str)
{
    FILE* fp = fopen(file, "w+");
    if(!fp){
        perror("TUX");
        exit(-1);
    }
    
    if(fputs(str, fp) < 0){
        perror("TUX");
        return EXIT_FAILURE;
    }
    
    fclose(fp);
    return 1;
}

void readFile(char* file)
{
    FILE* fp = fopen(file, "r+");
    if(!fp){
        perror("TUX");
        exit(-1);
    }
    
    char c;
    while((c = fgetc(fp)) != EOF){
        printf("%c", c);
    }
    fclose(fp);
}

int readWrite(char* file)
{
    FILE* fp = fopen(file, "ar+");
    if(!fp){
        perror("TUX");
        return EXIT_FAILURE;
    }
    
    
    char c;
    
    while((c = fgetc(fp)) != EOF){
        printf("%c", c);
    }
    
    while((read(STDIN_FILENO, &c, 1)) == 1 && c != 'q'){
        fputc(c, fp);
    }
        
    fclose(fp);
    return 1;
}
