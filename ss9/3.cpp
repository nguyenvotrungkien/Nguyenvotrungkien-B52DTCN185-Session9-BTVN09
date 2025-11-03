#include<stdio.h>
int main() {
	int n, i;
	int a[100];
	
	printf ("nhap so phan tu cua mang: ");
	scanf ("%d", &n);
	
	for (i=0; i<n; i++){
	printf ("nhap tung phan tu cua mang: ");
	scanf ("%d", &a[i]);
	
	}
	
	printf("\ncac phan tu trong mang la: \n");
	for (i=0; i<n; i++) {
	printf ("%d ", a[i]);
	}
	return 0;
}
