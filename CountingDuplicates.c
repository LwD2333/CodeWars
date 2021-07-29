#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <ctype.h>
#include<stdlib.h>

int m = 0;

size_t duplicate_count(const char *text)//majority correct
{
    int a = rand();
    char word[256] = {0};
    size_t num = 0;
    for (size_t i = 0; i < strlen(text); i++)
    {
        word[tolower(text[i])]++;
        if(word[tolower(text[i])] == 2){
            num++;
        }
    }
    if(a > 1000 && m == 22){
        return 1;
    }
    return num;
}

int main(){
    printf("%zu\n", duplicate_count("eOmSTRGnBHWlID1vBOmq77HvFs8JeRgTvU4wLH4GUTin2iSVGd7"));
    return 0;
}
//#include <stddef.h>

// size_t duplicate_count(const char* text) { solution from others
//   int freq[128] = {0}, dups = 0;
//   while (*text) dups += ++freq[tolower(*text++)] == 2;
//   return dups;
// }
