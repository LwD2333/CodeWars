#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
static int m = 0;

int digPow(int n, int p)
{
    m++;
    int temp = n;
    int *num = (int *)calloc(20, sizeof(int));
    int len = 0;
    for (; temp != 0; len++)//原来判断数字位数出错！！！
    {
        num[len] = temp % 10;
        temp /= 10;
    } //倒序输入，1234--->4321, len = 4

    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum += pow(num[i], (len + p - i - 1));
    }
    if (sum % n == 0)
    {
        return sum / n; //k
    }
    return -1;
}
// correct
// int digPow(int n, int p) {
//  //用这个函数求位数 
//   int numDigits = floor(log10(n))+1;                      
//   int result = 0;
//   int num = n;
//   for (int i = p + numDigits - 1; i >= p; i--) {
//     result += pow(num%10, i);
//     num/=10;
//   }
//   if (result % n == 0) {
//     return result / n;
//   }
//   return -1;
// }
int main()
{
    printf("%d\n", digPow(46288, 3));
    printf("%d\n", digPow(89, 1));
    printf("%d\n", digPow(114, 3));
    printf("%d\n", digPow(92, 1));
    printf("%d\n", digPow(200, 2));
    return 0;
}
int main()
{
    printf("%d\n", digPow(46288, 3));
    printf("%d\n", digPow(89, 1));
    printf("%d\n", digPow(114, 3));
    printf("%d\n", digPow(92, 1));
    printf("%d\n", digPow(200, 2));
    return 0;
}
