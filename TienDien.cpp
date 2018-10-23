#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	double moi,cu,tieuthu,tien;
	printf("nhap so moi ");
	scanf("%lf",&moi);
	printf("nhap so cu ");
	scanf("%lf",&cu);
	tieuthu = moi-cu;
	if(tieuthu<50)
    tien=tieuthu*1500;
	else 
	if((tieuthu>=50)&&(tieuthu<100))
	tien = tieuthu*2000;
	else 
	tien = tieuthu*3000;
	printf("tien dien la : %lf",tien);
}
