#include<stdio.h>
int main(void){
  int p,q,r;
  while (1) {
    /* code */

scanf("%d%d%d\n",&p,&q,&r );

if(p==-1&&q==-1&&r==-1){
  break;
}
if(p==-1||q==-1) {
  printf("F\n");
}

if(p+q>80){
  printf("A\n" );
}

if(p+q>=65&&p+q<80){
  printf("B\n" );
}

if(p+q>=50&&p+q<65){
  printf("C\n" );
}

if(p+q>=30&&p+q<50&&r<50){
  printf("D\n" );
  if(r>50){
    printf("C\n" );
  }
if(p+q<30){
    printf("F\n" );
  }
  if(p==-1||q==-1){
    printf("F\n" );
  }


}
}
return 0;
}
