#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("��̐�������͂���B");
    printf("����A�F");  scanf("%d", &n1);
    printf("����B�F");  scanf("%d", &n2);

    if(n1 == n2)
        puts("A��B�͓������ł��B");
    else if(n1 > n2)
        puts("A��B���傫���ł��B");
    else
        puts("A��B��菬�����ł��B");

    return 0;
}