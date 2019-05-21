# C-Swap

![Capture](https://user-images.githubusercontent.com/29266933/58127102-3f55e380-7c1d-11e9-8b5e-81da91e5da87.PNG)

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
