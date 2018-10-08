#include<stdio.h>
int main(void){
    int H,W;
    scanf("%d %d",&H,&W);
    for(int j=0;j<H;j++)
    {
    for(int i=0;i<W;i++)
    {
        printf("#");
    }
    printf("\n");
    }

    return 0;
}
