#include <stdio.h>

int main(void)
{
    int no;

    printf("��������͂���F ");
    scanf("%d", &no);

    if(no == 0)
        puts("��Βl��0�ł��B");
    else if(no > 0)
        printf("��Βl��%d�ł��B\n", no);
    else
        printf("��Βl��%d�ł��B\n", -no);

    return 0;
}