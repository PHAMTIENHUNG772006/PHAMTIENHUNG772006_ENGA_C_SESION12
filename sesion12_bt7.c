#include<stdio.h>
void nhapMang(int arr[100][100], int col,int row){
	printf("moi ban nhap phan tu trong mang \n");
	for(int i = 0;i<row;i++){
		for(int j=0;j<col;j++){
		printf("phan tu  arr[%d][%d] la : ",i+1,j+1);
		scanf("%d",&arr[i][j]);
		}
	}
}
void inMang(int arr[100][100], int row, int col) {
    printf("Mang da nhap la:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n"); 
        
    }
}
int main(){
	int arr[100][100];
	int col,row;
	printf("Moi ban nhap so hang cho mang : ");
	scanf("%d",&row);	
	printf("Moi ban nhap so cot cho mang : ");
	scanf("%d",&col);	
	nhapMang(arr,row,col);
	inMang(arr,row,col);
	return 0;
}
