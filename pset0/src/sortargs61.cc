#include <stdio.h>
#include <string.h>

#define MAX 1000

int main(int argc, char* argv[]){
    for (int i = 1; i < argc; i++){
        for (int j = 1; j < argc; j++){
            if (strcmp(argv[i], argv[j]) < 0){
                char* temp = argv[j];
                argv[j] = argv[i];
                argv[i] = temp;
            }
        }
    }

    for (int i = 1; i < argc; i++){
        int len = strlen(argv[i]);
        for (int j = 0; j < len; j++)
            fprintf(stdout, "%c", argv[i][j]);
        fprintf(stdout, "\n");
    }
}