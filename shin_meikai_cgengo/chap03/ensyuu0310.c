#include <stdio.h>

int main(void)
{
    int n1, n2, n3;

    puts("��������͂��Ă�������");

    printf("����1�F"); scanf("%d", &n1);
    printf("����2�F"); scanf("%d", &n2);
    printf("����3�F"); scanf("%d", &n3);

    if(n1 == n2 && n1 == n3)
        printf("�O�̒l���������ł��B\n");
    else if(n1 == n2 || n1 == n3 || n2 == n3)
        printf("��̒l�͓������ł��B\n");
    else 
        printf("�O�̒l�͈قȂ�܂��B\n");

    return 0;
}