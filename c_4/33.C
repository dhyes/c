#include <stdio.h>

int main(){
    int x, y;
    int result;

    printf("세자리 수 두개를 입력하시오: ");
    scanf("%d %d", &x, &y);

    result = y%10;
    printf("%d\n", x*result);
    result = y/10%10;
    printf("%d\n", x*result);
    result = y/100;
    printf("%d\n", x*result);
    printf("두개를 곱한 값: %d", x*y);


    return 0;
}