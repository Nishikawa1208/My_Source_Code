#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("��̐�������͂���B");
    printf("����1�F");  scanf("%d", &n1);
    printf("����2�F");  scanf("%d", &n2);

    if(n1 > n2)
        printf("�����̍���%d�ł��B\n", n1 - n2);
    else
        printf("�����̍���%d�ł��B\n", n2 - n1);
    
    return 0;
}