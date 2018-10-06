#include<stdio.h>
int main(void){
  int A,B,C;
  char op;
  scanf("%d %c %d",&A,&op,&B);
  if(op=='+'){
    C=A+B;
    printf("%d",C);
  }
  if(op=='-'){
    C=A-B;
    printf("%d",C);
  }
  if(op=='*'){
    C=A*B;
    printf("%d",C);
  }
  if(op=='/'){
    if(B!=0){
      C=A/B;
      printf("%d",C);
  }else if(B==0)
  printf("error");
}
}
