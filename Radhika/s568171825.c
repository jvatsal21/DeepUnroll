t,n,m,r;main(){for(scanf("%d",&t);t--;printf("%d\n",r))for(scanf("%d%d",&n,&m),r=0;m-n;m/=2,n/=2)r+=(n&1)+(m&1),n+=n&1,m-=m&1;}