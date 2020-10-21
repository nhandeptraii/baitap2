#include<stdio.h>

main()
{
	
	float bankinh,canh,canhdai,canhngan;
	
	printf("Nhap ban kinh:   ");
	scanf("%f",&bankinh);
	printf("Chu vi hinh tron la:   %f\n",bankinh*3.14);
	
	printf("Nhap canh:   ");
	scanf("%f",&canh);
	printf("Chu vi hinh vuong la:   %f\n",canh*4);
	
	printf("Nhap canh dai chu nhat:   ");
	scanf("%f",&canhdai);
	printf("Nhap canh ngan chu nhat:   ");
	scanf("%f",&canhngan);
	printf("Chu vi hinh chu nhat la:   %f\n",(canhdai+canhngan)*2);
	
}
