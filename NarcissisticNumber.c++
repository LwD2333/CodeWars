#include <iostream>
#include <stdbool.h>
#include <math.h>
/*
自恋数字是一个正数，是它自己的数字的总和，每个数字都提升到给定基数中数字的功率。在这个卡塔，我们将限制自己小数（基地10）。
例如，以 153 （3 位数字）为例，这是自恋：
    1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
和1652（4位数字），这不是：
    1^4 + 6^4 + 5^4 + 2^4 = 1 + 1296 + 625 + 16 = 1938
挑战：
您的代码必须返回真假，具体取决于给定数字是基础 10 中的自恋数字。
不需要对文本字符串或其他无效输入进行错误检查，只有有效的正非零整数才会传递到函数中。*/
bool narcissistic(int num)
{
    int count = 0;
    int temp = num;
    do
    {
        temp /= 10;
        count++; //the num's bits;
    } while (temp != 0);
    int sum = 0;

    int Num = num; //start to add ( (each bit)^count )
    for (int times = count; times > 0; times--)
    {
        int EachNum = 0;
        EachNum = Num % 10;
        Num /= 10;
        sum += pow(EachNum, count);
    }
    // printf("%d\n", sum);
    if (sum == num) //JudgeMent
    {
        return true;
    }
    return false;
}