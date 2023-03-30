#include <stdio.h>
int main()
{
    int a, b;

    printf("숫자 두개를 입력하시오: ");
    scanf("%d %d", &a, &b);

    if(a>b)
    {
        printf(">\n");
    }
    else if(a<b)
    {
        printf("<\n");
    }
    else
    {
        printf("=");
    }
    return 0;
}