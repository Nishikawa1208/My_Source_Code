//�ǂݍ��񂾐����l�͊�ł��邩�����ł��邩

#include <stdio.h>

int main(void)
{
    int n;

    printf("��������͂���F");
    scanf("%d", &n);

    switch (n % 2)
    {
    case 1:puts("���̐��͊�ł��B");  break;
    default:puts("���̐��͋����ł��B"); break;
    }
    
    return 0;
}