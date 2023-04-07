# 6주차 실습
- FOR문
~~~ C
#include <stdio.h>

int main(void) {

int n, result;
printf("정수하나를 입력하시오");
scanf("%d", &n);

for(int i=1; i<=n; i++){
  result += i; //result = result + i;
}
printf("1부터 %d까지의 합=%d\n",n,result);
return 0;
}
