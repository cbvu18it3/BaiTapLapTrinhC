#include<stdio.h>
#include<conio.h>
// nhap cac phan tu trong mang
void NhapMang(int n,int A[100])
{
	for(int i=0;i<n;i++)
	{
		printf("A[%d]",i);
		scanf("%d",&A[i]);
	}
}
// in ra cac phan tu vua nhap
void InMang(int n,int A[100])
{
		for(int i=0;i<n;i++){
			printf("\t A[%d]=%d",i,A[i]);
		}
}
int GT(int n)
{
	int gt = 1;
	for(int i=1;i<=n;i++)
	{
		gt=gt*i;
		
	}
	return gt;
}

int main(){
	int a[100];
	int n,s = 0;
	printf("So phan tu: ");
	scanf("%d",&n);
	NhapMang(n,a);
	printf("\n");
	InMang(n,a);
	for (int i=0; i< n;i++){
		s += GT(a[i]);
	}
	printf("\n Tong giai thua cac phan tu trong mang la: %d",s);
	
}
