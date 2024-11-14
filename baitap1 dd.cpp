#include<stdio.h>
int main(){
	long long s=0,p=1;
	int n;
	do{
		printf("\nNhap n=");
		scanf("%d" ,&n);
	}while(n<=0);
	s=(n+1)*n/2;
	for (int i=1;i<=n;i++){
		p*=i;
	}
	printf("tong la: %11d\n",s);
	printf("tich la: %11d",p);
	return 0;
}
