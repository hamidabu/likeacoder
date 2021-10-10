#include<stdio.h>
#include<math.h>

int main(){
  
  int i,sum,r,m,n;

  for(i=100; i<=500; i++){
      sum=0;
      n=i;
      m=i;
      while(n>0){
          r=n%10;
          sum=sum+pow(r,3);
             n=n/10;
      }
      if(sum==m)
      {
          printf("%d\t",i);
      }
  }
return 0;
}