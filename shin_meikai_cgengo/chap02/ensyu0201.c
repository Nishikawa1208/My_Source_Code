//��̐����l��ǂݍ���ŁA�O�҂̒l����҂̉�%�ł��邩��\������v���O�������쐬����B

#include <stdio.h>

int main(void)
{
    int n1, n2;

    printf("����n1����͂���F");
    scanf("%d", &n1);
    printf("����n2����͂���F");
    scanf("%d", &n2);

    printf("n1��n2��%d%%�ł��B\n", (100 * n1) / n2);
    
    return 0;
}