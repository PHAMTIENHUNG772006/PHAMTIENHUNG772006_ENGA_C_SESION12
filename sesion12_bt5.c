

#include<stdio.h>
#include<math.h>
void nhapA(int *a){
	printf("moi ban nhap so A : ");
	scanf("%d",a);
	
}
void nhapB(int *b){
	printf("moi ban nhap so B : ");
	scanf("%d",b);

}
int xetSoNguyenTo(int n) {
    if (n < 2) {
        return 0; 
    }
    	for(int i = 2; i<= sqrt(n);i++){
    		if(n % i == 0) return 0;	
		}
	return 1;
}
int main(){
	int a, b;
	nhapA(&a);
	if (xetSoNguyenTo(a)) {
        printf("%d la so nguyen to\n", a);
    } else {
        printf("%d khong phai so nguyen to\n", a);
    }
	nhapB(&b);
	if (xetSoNguyenTo(b)) {
        printf("%d la so nguyen to\n", b);
    } else {
        printf("%d khong phai so nguyen to\n", b);
    }
    return 0;
}
