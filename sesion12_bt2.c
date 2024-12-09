#include<stdio.h>
  int i,n;
  int arr[1000];
  void inMang(int n){
  	printf("mang cua ban nhap la :\n");
  	for(int i=0;i<n;i++){
  		printf("%d", arr[i]);
	  }
	  printf("\n");
  }
  int main(){
  	printf("moi ban nhap phan tu cho mang :");
  	scanf("%d",&n);
  	for(int i=0;i<n;i++)
  	scanf("%d",&arr[i]);
    inMang(n);
  	return 0;
  }
