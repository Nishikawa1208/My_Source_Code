#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("��̐�������͂���B");
    printf("����1�F");  scanf("%d", &n1);
    printf("����2�F");  scanf("%d", &n2);

    // �����v�Z
    int difference = n1 - n2;

    // ��Βl���蓮�Ōv�Z
    if (difference < 0) {
        difference = -difference;
    }

    // �_��OR���Z�q���g�p���ď������`�F�b�N
    if (difference <= 10 || difference >= 11) {
        if (difference <= 10) {
            printf("�����̍��� 10 �ȉ��ł��B\n");
        } else {
            printf("�����̍��� 11 �ȏ�ł��B\n");
        }
    }

    return 0;
}
