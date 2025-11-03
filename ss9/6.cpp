#include<stdio.h>
int main() {
	int n, i;
	int a[100];
	int x;
	int found = 0;

	
	printf ("nhap so phan tu cua mang: ");
	scanf ("%d", &n);
	
	for (i=1; i<n; i++){
	printf ("nhap tung phan tu cua mang: ");
	scanf ("%d", &a[i]);
	
	}
	
	printf("\ncac phan tu trong mang la: \n");
	for (i=1; i<n; i++) {
    printf ("%d ", a[i]);
	}
	printf("\nNhap gia tri can tim x: ");
    scanf("%d", &x);
    for (i = 1; i < n; i++) {
    if (a[i] == x) { 
    printf("\nGia tri %d xuat hien o vi tri thu %d trong mang.", x, i);
    found = 1; 
    }
    }
    
    if (found == 0) {
    printf("\nGia tri %d khong ton tai trong mang.", x);
    }
return 0;
		
}
