//��̐����l��ǂݍ���ŕ��ϒl�������ŕ\��

#include <stdio.h>

int main(void)
{
    int a, b;

    puts("��̐�������͂���B");
    printf("����a�F");  scanf("%d", &a);
    printf("����b�F");  scanf("%d", &b);

    printf("a�̒l��b�̒l��%f%%�ł��B\n", (double) (100 * a) / b);

    return 0;
}