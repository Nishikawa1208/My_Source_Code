#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("二つの整数を入力せよ。");
    printf("整数1：");  scanf("%d", &n1);
    printf("整数2：");  scanf("%d", &n2);

    if(n1 > n2)
        printf("それらの差は%dです。\n", n1 - n2);
    else
        printf("それらの差は%dです。\n", n2 - n1);
    
    return 0;
}