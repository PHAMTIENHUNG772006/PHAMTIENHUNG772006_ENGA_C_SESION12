#include<stdio.h>
#include<stdlib.h>
	int n, m, p, start, sum, tb;
	int choice;

	int main() {
	
		while(1) {
		   printf("*********MENU**********");
	       printf("\n1.nhap ba so");
	       printf("\n2.tong ba  so");
	       printf("\n3.trung binh cong ba so");
	       printf("\n4.so lon nhat");
	       printf("\n5.so nho nhat");
	       printf("\n6.thoat");
	       printf("\nso ban chon  la: ");
	       scanf("%d", &choice);
	
	switch(choice) {
		  case 1:
	    	printf("moi ban nhap so nguyen thu nhat");
         	scanf("%d", &n);
        	printf("moi ban nhap so nguyen thu hai");
        	scanf("%d", &m);
        	printf("moi ban nhap so nguyen thu ba");
        	scanf("%d", &p);
        
		break;
		  case 2:
		  	
		  	printf("moi ban nhap so nguyen thu nhat");
	        scanf("%d", &n);
	        printf("moi ban nhap so nguyen thu hai");
        	scanf("%d", &m);
            sum = n + m;
	        printf("tong cua %d va %d = %d\n", n, m, sum);	  
		
	    break;
		  case 3:
		  	tb = n + m +p;
	       printf("trung binh cong cua n,m,p = %d\n", n ,m , p, tb);
		break;
		  case 4:
		  if (n >= m && n >= p)
                    printf("So lon nhat la: %d\n", n);
                else if (m >= n && m >= p)
                    printf("So lon nhat la: %d\n", m);
                else
                    printf("So lon nhat la: %d\n", p);
		break;
		  case 5:
		  	if (n <= m && n <= p)
                    printf("So nho nhat la: %d\n", n);
                else if (m <= n && m <= p)
                    printf("So nho nhat la: %d\n", m);
                else
                    printf("So nho nhat la: %d\n", p);
		  	break;
		  case 6:
		   printf("thoat chuong trinh.....\n");
		   exit(0);
		break;
		default:
		   printf("chon sai roi hay tron lai\n");	
	    }
    }	
	return 0;	
	}
