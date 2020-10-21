#include<stdio.h>

main()
{
	
	float toan,ly,hoa;
	
	printf("Nhap diem toan:   ");
	scanf("%f",&toan);
	printf("Nhap diem ly:   ");
	scanf("%f",&ly);
	printf("Nhap diem hoa:   ");
	scanf("%f",&hoa);
	
	printf("Diem trung binh la:   %f",(toan+ly+hoa)/3);
	
}
