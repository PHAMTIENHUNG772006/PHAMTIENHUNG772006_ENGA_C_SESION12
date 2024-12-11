#include<stdio.h>
int ucln(int a,int b){
	while(b != 0){
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main(){
	int a,b;
		printf("moi ban nhap a :");
		scanf("%d",&a);
	printf("moi ban nhap b :");
	scanf("%d",&b);
	int result = ucln(a, b);
	printf("uoc chung lon nhat cua %d va %d la %d",a,b,result);	
	return 0;
}
