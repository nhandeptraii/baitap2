#include <stdio.h>
#include <conio.h>
int main (void){
	
float top,bottom,height;

printf("Nhap day lon = \n");
scanf("%f,&top");

printf("Nhap day nho = \n");
scanf("%f,&bottom");

printf("Nhap chieu cao = \n");
scanf("%f,&height");

printf("Dien tich hinh thang = %f\n",(top+bottom)/2*height );

getch();
}
