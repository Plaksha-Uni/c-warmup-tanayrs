#include <stdio.h>

int main(){
    long int nchar = 0;
    
    while (fgetc(stdin) != EOF){
        nchar++;
    }
    
    fprintf(stdout,"%ld\n",nchar);
}