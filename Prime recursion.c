#include <stdio.h>
int prime(int n,int s){
	if (n==2){return 0;}
	if(n%s==0||n/s==1){
		if(n%s==0)
			return 1;
			else
			return 0;
		   } else {
		   	  return prime(n,s+1) ;
		   	  }	
}
int main()
{
	int num ;
	printf("puts the number : \n");
	scanf("%d",&num);
	int i = prime(num,2);
	if(i == 1)
	printf("the nember is not prime\n");
	else
	printf("The nember is prime\n");
}