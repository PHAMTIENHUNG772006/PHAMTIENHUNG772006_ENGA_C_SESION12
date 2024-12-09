#include<stdio.h>
#include<math.h>
int perfect(int n){
	int sum = 1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			if(i!=n/i)
			sum += i + n/i;
 		} else sum += i;
	}
	if(sum==n)
	      return 1;
	return 0;
}
int main(){
	int n;
	printf("moi ban nhap so muon kiem tra : ");
	scanf("%d",&n);
		if(perfect(n)){
			printf("%d la so hoan hao ",n);
		} else{
			printf("%d khong phai la so hoan hao ",n);
		}
	return 0;
}
