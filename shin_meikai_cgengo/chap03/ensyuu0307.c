//�ǂݍ��񂾎l�̐����l�̍ő�l�����߂ĕ\��

#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4;

    puts("�O�̐�������͂���B");
    printf("����1�F");  scanf("%d", &n1);
    printf("����2�F");  scanf("%d", &n2);
    printf("����3�F");  scanf("%d", &n3);
    printf("����4�F");  scanf("%d", &n4);

    int max = n1;
    if(n2 > max) max = n2;
    if(n3 > max) max = n3;
    if(n4 > max) max = n4;

    printf("�ő�l��%d�ł��A\n", max);

    return 0;
}