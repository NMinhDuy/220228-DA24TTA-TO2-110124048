#include<stdio.h>
#define COL 200
#define ROW 200
#define ll long long 
int checknt(int n),checkamdongk(int a[][COL],int m, int n, int k),checkntcotk(int a[][COL], int m, int n, int k);
int checklecotk(int a[][COL], int m, int n, int k),check_x(int a[][COL], int m, int n, int x);
void nhapmang(int a[COL][ROW], int m, int n),xuatmang(int a[COL][ROW], int m, int n), Burblesort(int a[][COL],int m,int n,int k),find_x(int a[][COL], int m, int n, int x),
maxdongk(int a[][COL], int m, int n, int k),mindongk(int a[][COL],int m, int n, int k),nguyentotrendongk(int a[][COL], int m, int n, int k);
ll tongmang(int a[COL][ROW], int m, int n),tonggtritrendongK(int a[][ROW], int m, int n, int k),tonggtritrencotK(int a[COL][ROW], int m, int n,int k);
int main(){
	int a[COL][ROW];
	int m,n,k,x;
	do{
	printf("nhap so dong: ");
	scanf("%d",&m);
	printf("nhap so cot: ");
	scanf("%d", &n);
}while(m>COL|| m<=0|| n>ROW || n<=0);
do{
	printf("nhap gia tri k(1<=k<=m,n): ");
	scanf("%d",&k);
}while(k<=0 || k>n || k>m);
k--;
printf("nhap gia tri x=");scanf("%d",&x);
	nhapmang(a,m,n);printf("\n");
	xuatmang(a,m,n);printf("\n");
	printf("tong mang vua nhap la: %lld", tongmang(a,m,n));printf("\n");
	printf("tong gia tri tren dong K=%d la: %lld", k+1, tonggtritrendongK(a,m,n,k));printf("\n");
	printf("tong gia tri tren cot k=%d la: %lld",k+1,tonggtritrencotK(a,m,n,k));printf("\n");
	if (checkamdongk(a,m,n,k))printf("dong K=%d co ton tai so am",k+1);
	else printf("dong K=%d khong ton tai so am",k+1);printf("\n");
	if (checkntcotk(a,m,n,k)) printf("cot K=%d co ton tai so nguyen to",k+1);printf("\n");
	BurbleSort(a,m,n,k);
	if (checklecotk(a,m,n,k)) printf("cot k=%d toan gia tri le",k+1);
	else printf("cot k=%d khong toan gia tri le",k+1);printf("\n");
	if (check_x(a,m,n,x)) printf("mang co ton tai so X=%d",x);
	else printf("mang khong ton tai so X=%d",x);printf("\n");
	find_x(a,m,n,x);printf("\n");
	maxdongk(a,m,n,k);printf("\n");
	mindongk(a,m,n,k);printf("\n");
	nguyentotrendongk(a,m,n,k);printf("\n");
	return 0;
}
int checknt(int n){
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0)return 0;
	}
	return n>1;
}
void nhapmang(int a[COL][ROW], int m, int n){
	for(int i=0; i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d", a[i][j]);
		}
		
	}
}
void xuatmang(int a[COL][ROW], int m, int n){
	printf("mang vua nhap la: \n")
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d", a[i][j]);
		}
		printf("\n")
	}
}
ll tongmang(int a[COL][ROW], int m, int n){
	ll kq=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			kq+=a[i][j];
		}
	}
	return kq;
}
ll tonggtritrendongK(int a[][ROW], int m, int n, int k){
	ll kq=0;
	if (k>=0||k<m){
		for(int i=0;i<m;i++){
			kq+= a[k][i];
		}
	}
	return kq;
}
ll tonggtritrencotK(int a[COL][ROW], int m, int n, int k){
	ll kq=0;
	if (k>=0||k<n){
		for(int j=0;j<n;j++){
			kq+=a[k][j];
		}
	}
}
int checkamdongk(int a[][COL], int m, int n, int k){
	for (int i=0;i<m;i++){
		if (a[k][i]<0)return 1;
	}
	return 0;
}
int checkntcotk(int a[][COL], int m, int n, int k){
	for (int i=0;i<n;i++){
		if (checknt(a[i][k])){
			return 1;
		}
 }
 return 0;
}

