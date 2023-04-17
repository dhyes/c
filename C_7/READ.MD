# 7주차 실습
- 구구단 함수


~~~C 
#include <stdio.h>

int gugu(int x, int i){
  
  while(i<=9){
    printf("%d*%d= %d\n",x,i, x*i);
    i++; }
    return 0;
}

int main()
{
  int x;
  int i=1;
  printf("정수하나입력");
  scanf("%d", &x);
  gugu(x, i);
return 0;
}
