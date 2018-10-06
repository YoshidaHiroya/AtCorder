#include<stdio.h>
#include <stdlib.h>

int func(a,b,c){
  if(a>b){

    if(b>c){
      return abs(a-c);
    }
    if(b<c){
    return abs(a-b );
  }
}
 if(a<b){


  if(a>c){
    return abs(b-c) ;
  }
  if(a<c){
    if(b>c){
      return abs(a-b);
    }
    if(b<c){
      return abs(c-a);
    }
}
}
}






int main(void){
  int a,b,c,d;
  scanf("%d %d %d",&a,&b,&c);
  d=func(a,b,c);
  printf("%d",d);
    return 0;
  }
