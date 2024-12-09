#include<stdio.h>
int giaiThua = 1;
int tinhGiaiThua(int n){
	for(int i=1; i<=n;i++){
	giaiThua *= i;
	
	}
		return giaiThua;
}
int main(){
	int n, giaiThua;
	printf("Moi ban nhap so de tinh giai thua : ");
	scanf("%d",&n);
	int kp = tinhGiaiThua(n);
	printf("ket qua tinh giai thua cua %d la %d",n , kp);
	return 0;
}
