#include <stdio.h>
#include <cctype>

int main(){
    long int nwords = 0;
    long int nlines = 0;
    long int nchar = 0;

    char c;
    bool inspace = true;
    while ((c = fgetc(stdin)) != EOF){
        if (c == '\n')
            nlines++;
        
        if (!isspace(c)){
            if (inspace){
                nwords++;
            }
            inspace = false;
        } else {
            inspace = true;
        }
        
        nchar++;
    }

    fprintf(stdout,"%ld\t%ld\t%ld\n",nlines,nwords,nchar);
}