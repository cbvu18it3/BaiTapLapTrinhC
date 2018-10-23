#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char S[100];
	printf("nhap chuoi : ");
	gets(S);
	int dem=0;
	for(int i=0;i<strlen(S);i++)
	{
		if(S[i]!=' ')
		{
			dem+=1;
		}
	}
	printf("so luong ky tu co trong chuoi la %d",dem);
}
