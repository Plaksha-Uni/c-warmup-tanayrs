#include <cstring>
#include <cassert>
#include <cstdio>

char* mystrstr(const char* s1, const char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for (int i = 0; i < len1 - len2 + 1; i++){
        int nmatch = 0;
        
        for (int j = 0; j < len2; j++)
            if (s1[i+j] == s2[j]) nmatch++;

        if (nmatch == len2)
            return (char*) s1 + i;
    }
    return nullptr;
}

int main(int argc, char* argv[]) {
    assert(argc == 3);
    printf("strstr(\"%s\", \"%s\") = %p\n",
           argv[1], argv[2], strstr(argv[1], argv[2]));
    printf("mystrstr(\"%s\", \"%s\") = %p\n",
           argv[1], argv[2], mystrstr(argv[1], argv[2]));
    assert(strstr(argv[1], argv[2]) == mystrstr(argv[1], argv[2]));
}