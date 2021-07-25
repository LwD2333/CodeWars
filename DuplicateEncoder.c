#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// SOMETHING WRONG
char *DuplicateEncoder(char *string)
{
    int lenth = strlen(string);
    int counter[20] = {0};
    memset(counter, 0 ,20);
    for (int i = 0; i < lenth; i++)
    {
        for (int j = 0; j < lenth; j++)
        {
            if (i == j)
            {
                continue;
            }
            else if (((*(string + i) >= 'a' && *(string + i) <= 'z') || (*(string + i) >= 'A' && *(string + i) <= 'Z')) && (*(string + i) == *(string + j) || *(string + i) + 32 == *(string + j) || *(string + i) - 32 == *(string + j)))
            {
                // printf("%c <---> %c\n", *(string + i) , *(string + j));
                counter[i] = 1;
            }
            else if (*(string + i) == *(string + j))
            {
                counter[i] = 1;
            }
        }
        // printf("%d\n", counter[i]);
    }
    static char out[20] = {0};
    memset(out, '\0', 20);
    for (int m = 0; m < lenth; m++)
    {
        if (counter[m] == 0)
        {
            out[m] = '(';
        }
        else
        {
            out[m] = ')';
        }
    }
    out[lenth] = '\0';
    return out;
}
//      CORRECT ANSWER
// char *DuplicateEncoder(char *word)
// {
//   int table[256] = {0};
//   int len = strlen(word);
//   char *out = calloc(len+1, sizeof(char));
  
//   for (int i = 0; i < len; i++)  table[toupper(word[i])]++;
//   for (int i = 0; i < len; i++) 
//   {
//       if (table[toupper(word[i])] == 1)  out[i] = '(';
//       else                               out[i] = ')';
//   }
  
//   return out;
// }


int main()
{
    char *arr = DuplicateEncoder("din");
    printf("%s\n", arr);
    arr = DuplicateEncoder("recede");
    printf("%s\n", arr);
    arr = DuplicateEncoder("Success");
    printf("%s\n", arr);
    arr = DuplicateEncoder("(( @");
    printf("%s\n", arr);
    arr = DuplicateEncoder("Prespecialized");
    printf("%s\n", arr);
    arr = DuplicateEncoder("   ()(   ");
    printf("%s\n", arr);
    return 0;
}