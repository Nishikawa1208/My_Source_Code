#include <stdio.h>

int main(void)
{
    int n1, n2, n3;

    puts("�O�̐�������͂���B");
    printf("����1�F");  scanf("%d", &n1);
    printf("����2�F");  scanf("%d", &n2);
    printf("����3�F");  scanf("%d", &n3);

    if(n1 > n2)
        n1 = n2;
    if(n1 > n3)
        n1 = n3;

    printf("�ŏ��l��%d�ł��A\n", n1);

    return 0;
}