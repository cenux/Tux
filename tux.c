#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "fileio.h"

int main(int argc, char* argv[])
{
    char* file = malloc(99 * sizeof(char));
    if(!file)
        perror("TUX");
    
    char* data = malloc(99 * sizeof(char));
    if(!data)
        perror("TUX");
    
        
    if(argc == 1){
        file = "tmp.txt";
        
        char c;
        int x = 0;

        while((read(STDERR_FILENO, &c, 1)) == 1 && c != 'q'){
            data[x] = c;
            x++;
        }

        writeFile(file, data);
    }
    else{
        file = argv[1];
        readWrite(file);
    }
    
    free(data);
        
}
