#include <stdio.h>

int main(void)
{
    int n1, n2;

    printf("��̐�������͂���B\n");

    printf("����A�F");  scanf("%d", &n1);
    printf("����B�F");  scanf("%d", &n2);

    if(n1 % n2)
        printf("B��A�̖񐔂ł͂���܂���B");
    else
        printf("B��A�̖񐔂ł��B");

    return 0;    
}