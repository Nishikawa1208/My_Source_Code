#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("��̐�������͂���B");
    printf("����1�F");  scanf("%d", &n1);
    printf("����2�F");  scanf("%d", &n2);

    int max, min;
    if(n1 > n2)
        max = n1;
        min = n2;
    else
        max = n2;
        min = n1;
    

    printf("�傫�����̒l��%d�ł��B\n", max);
    printf("���������̒l��%d�ł��B\n", min);

    return 0;
}
