#include <stdio.h>
#include <string.h>

int nbDig(int n, int d)
{
    char x = d + '0';
    int counter = 0;
    for (int i = 0; i <= n; i++)
    {
        char temp[20] = {0};
        sprintf(temp, "%d", i * i);
        char *ch = temp;
        while (*ch)
        {
            if (*ch++ == x)
            {
                counter++;
            }
        }
    }

    return counter;
}
// CLEVER ONE FROM MOGUL
// int nbDig(int n, int d) {
//   int count = (d == 0) ? 1 : 0;
  
//   for (int k = 1; k <= n; k++) {
//     int kk = k * k;
//     while (kk != 0) {
//       if (kk % 10 == d)
//         count++;
//       kk /= 10;
//     }
//   }
  
//   return count;
// }
int main()
{
    printf("%d\n", nbDig(10, 1));
    printf("%d\n", nbDig(25, 1));
    printf("%d\n", nbDig(5750, 0));
    printf("%d\n", nbDig(11011, 2));
    printf("%d\n", nbDig(12224, 8));
    printf("%d\n", nbDig(11549, 1));
    return 0;
}