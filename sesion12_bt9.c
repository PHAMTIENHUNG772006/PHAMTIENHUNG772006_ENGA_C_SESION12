#include <stdio.h>
#include <math.h>


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
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void inGoc(int arr[100][100], int row, int col) {
    printf("Cac phan tu o goc mang la:\n");
    printf("arr[0][0] = %d\n", arr[0][0]);
    printf("arr[0][%d] = %d\n", col - 1, arr[0][col - 1]);
    printf("arr[%d][0] = %d\n", row - 1, arr[row - 1][0]);
    printf("arr[%d][%d] = %d\n", row - 1, col - 1, arr[row - 1][col - 1]);
}

void inBien(int arr[100][100], int row, int col) {
    printf("Cac phan tu tren duong bien:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == 0 || i == row - 1 || j == 0 || j == col - 1) {
                printf("%d ", arr[i][j]);
            }
        }
    }
    printf("\n");
}
void cheoChinhPhu(int row, int col, int arr[100][100]) {
    printf("Duong cheo chinh cua mang la: ");
    for (int i = 0; i < row; i++) {
        printf("%d ", arr[i][i]);
    }
    printf("\nDuong cheo phu cua mang la: ");
    for (int i = 0; i < row; i++) {
        printf("%d ", arr[i][row - 1 - i]);
    }
    printf("\n");
}

int isPrime(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
void soNguyenTo(int arr[100][100], int row, int col) {
    printf("Cac phan tu la so nguyen to trong mang la:\n");
    int found = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (isPrime(arr[i][j])) {
                printf("%d\t ", arr[i][j]);
                found = 1;
            }
        }
    }
    if (!found) {
        printf("Khong co so nguyen to trong mang.\n");
    }
    printf("\n");
}

int main() {
    int arr[100][100];
    int col, row, choice;
    printf("hay nhap cot va hang bang nhau de tao mot mang hinh vuong\n");
    printf("Moi ban nhap so hang: ");
    scanf("%d", &row);
    printf("Moi ban nhap so cot: ");
    scanf("%d", &col);

    do {
        printf("\n********MENU*******\n");
        printf("1. Nhap cac phan tu vao cho mang\n");
        printf("2. In gia tri cac phan tu theo ma tran\n");
        printf("3. In ra cac phan tu o goc mang\n");
        printf("4. In ra cac phan tu bien\n");
        printf("5. In ra cac phan tu o duong cheo chinh va phu\n");
        printf("6. In ra cac phan tu la so ngto theo ma tran\n");
        printf("7. Thoat\n");
        printf("Hay chon chuc nang (1-7): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(arr, row, col);
                break;
            case 2:
                inMang(arr, row, col);
                break;
            case 3:
                inGoc(arr, row, col);
                break;
            case 4:
                inBien(arr, row, col);
                break;
            case 5:
                cheoChinhPhu(row, col, arr);
                break;
            case 6:
                soNguyenTo(arr, row, col);
                break;
            case 7:
                printf("Da thoat chuong trinh\n");
                break;
            default:
                printf("Du lieu khong hop le, nhap lai!\n");
        }
    } while (choice != 7);

    return 0;
}

