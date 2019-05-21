#include<stdio.h>
#define takas(x,y) {int yedek = x; x=y; y=yedek;}

int main(){
	int a,b;
	
	printf("\nBir sayi giriniz : ");
	scanf("%d",&a);
	printf("\nBir sayi daha giriniz : ");
	scanf("%d",&b);
	printf("\nTakas oncesi : a = %d  b = %d ",a,b);
	takas(a,b);
	printf("\n\nTakas sonrasi : a = %d  b = %d \n",a,b);

	return 0;
}

