#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int Rep (int n,int n2){
	if(n<10){
			return n;
		   } else {
		   	  return n%10*pow(10,n2)+Rep (n/10,n2-1) ;
		   	  }	
}
int tes(int n){
	if(n<10){
			return 1;
		   } else {
		   	  return 1+tes(n/10) ;
		   	  }	
}
int main()
{
	int num ,r,i;
	printf("puts the nember : \n");
	scanf("%d",&num);
	r=tes(num);
	i=Rep(num,r-1);
	printf("%d",i);
}