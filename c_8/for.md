``` c 
#include <stdio.h>

int main(void) {
int a;
scanf("%d", &a);
  for(int i=a; i>=1; i--){
    for(int j=i; j>=1; j--){
    printf("*");
  }
printf("\n");
}
  return 0;
}
