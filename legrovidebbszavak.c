#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]){
    if(argc==1){
        fprintf(stderr,"Nem adtál meg egyetlen szót sem!\n");
        exit(1);
    }
    else{
        int min= strlen(argv[1]);
        for(int i=1;i<argc;i++){
            if(strlen(argv[i]) < min){
                min = strlen(argv[i]);
            }
        }
        for(int i = 1; i<argc;i++){
            if(strlen(argv[i]) == min){
                printf("%s\n", argv[i]);
            }
        }
    }

return 0;

}