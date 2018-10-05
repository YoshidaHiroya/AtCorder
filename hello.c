#include<stdio.h>
int main (void){
  int a,b,c,d;
    scanf("%d", &d);
　d=func(d);　
    printf("%d",d);
}
func(i){
  int ans,a,b,c;
  if(i>900){
    a=1;
    if(i-900>90){
    b=1;
  }
  else if(i-900<90){

    b=9;
    c=1;
  }
      if (i-990>=9) {
    c=1;/* code */
  }
  else if(i-990<=9){
    c=9;
  }
  }
else if(i<900){//191とか119とか199とか111
  a=9;
  if(i-100>90){//191or199
    b=1;
    if(i-191>0)
    b=1;
    c=9;
   else{
      c=1;
    }
  }
  else if(i-100<90){//119,111
        b=9;
        if(i-119>=0){//119
          c=1;
        }
else{
  c=9;
}
          }
}
ans=a*100+b*10+c;
  return ans;
}
