#include<stdio.h>
int main(){
	int num,m,n;
	printf("entrer le numero\n");
	scanf("%d",&num);
	m=inv(num);
	n=Gr(m,0);
	m=inv(n);
	if(num/m>1){
		m=m*10;}
	printf("Gr=%d\n",m);
}
int Gr(int nu,int b){
int p,s;	
if(nu==0){
	 return 0;
}else{
	p=nu%10;
	s=(b+p)%2;
		return s+Gr(nu/10,s)*10;
}}
int inv(int mu){
	int p,s=0;
	while(mu!=0){
		p=mu%10;
		s=s*10+p;
		mu=mu/10;}
		return s;}