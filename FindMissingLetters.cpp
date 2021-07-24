#include <stdio.h> //找到缺失的英文字母
char findMissingLetter(char array[], int arrayLength)
{
    char found;
    for(int i = 1; i < arrayLength; i++){
        if(array[i-1] + 1 != array[i]){
            found = array[i-1] + 1;
        }            
    }

    printf("%c\n", found);
    return found;
}

int main()
{
    char arr1[] = {'a', 'b', 'c', 'd', 'f'};
    char arr2[] = {'O', 'Q', 'R', 'S'};
    findMissingLetter(arr1, 5);
    findMissingLetter(arr2, 4);
    return 0;
}