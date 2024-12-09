#include<stdio.h>
void nhapMang(int n,int m){
	for(int i = 0;i<n;i++){
	printf("nhap phan tu thu %d la : ",i);
	scanf("%d", &m);
    }
}
int maxValune(int n, int arr[]){
	int max = arr[0];
	for(int i = 0;i < n; i++){
			if(arr[i] > max){
				arr[i] = max ;
			}
		}
}

int main(){
	int arr[]={};
	int n,m;
	int max;
	printf("moi ban nhap so phan tu cho mang : ");
	scanf("%d",&n);
	nhapMang(n,m);
	max = maxValune(n,arr);
	printf("phan tu lon nhat trong mang la : %d", max);
	return 0;
}
