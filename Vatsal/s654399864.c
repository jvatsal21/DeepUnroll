#include<stdio.h>
#include<math.h>

int main(){
  int a,b,C;
  double S,L,h;

  scanf("%d %d %d",&a,&b,&C);

  S = (a*b*sin(C*M_PI/180.0))/2;
  L = a+b+sqrt(a*a+b*b-2*a*b*cos(C*M_PI/180.0));
  h = 2*S/a;

  printf("%f\n%f\n%f\n",S,L,h);
  return 0;
}