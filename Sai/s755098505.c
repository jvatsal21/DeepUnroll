#include<stdio.h>
#include<math.h>

int main(void){
	long double x1,x2,y1,y2,dis;
	
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	dis = sqrt( (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	printf("%.8f\n",dis);
	return (0);	
}