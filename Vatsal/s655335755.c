#include <stdio.h>
#include <math.h>
int main(void){
   double q;
   while(scanf("%d", &q)!= EOF) {
       double x;    
       x=q/2;
       if(q>0)  {
           double xx;
           while((fabs(x*x*x-q))>(0.00001*q)){
               xx=x-((x*x*x-q)/(3*x*x));    
               x=xx;
           }
           printf("%.6f\n",xx);
       }
    }
return 0;    
}
