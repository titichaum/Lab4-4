#include <stdio.h>
int main(void)
{
  int x;
  float L1,L2,H,Suml,Area;
    printf("L1 :");
      scanf("%f",&L1);
    printf("L2 :");
      scanf("%f",&L2);
      x=(L1/L2)*100;
      if(x>=40){x=(L2/L1)*100;}
      if(x>= 40){//printf("%d %\n",x);
      printf("Height :");
        scanf("%f",&H);
        Suml=L1+L2;
        Area=0.5*H*Suml;
        printf("Area= %.2f ",Area );
        //printf("%d %\n",x);
      }else{printf("%d %\n",x);}
  return 0;
}
