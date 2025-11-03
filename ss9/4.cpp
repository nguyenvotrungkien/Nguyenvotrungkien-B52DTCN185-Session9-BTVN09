#include<stdio.h>
int main() {
	int n, i;
	int a[100];
	int sum = 0;
    float avg;

	
	printf ("nhap so phan tu cua mang: ");
	scanf ("%d", &n);
	
	for (i=0; i<n; i++) {
	printf ("nhap tung phan tu cua mang: ");
	scanf ("%d", &a[i]);
	}
	
	for (i=0; i<n; i++) {
	sum+= a[i];
	}
		
	avg = (float)sum / n;
    printf("Gia tri trung binh cua cac phan tu la: %.2f\n", avg);	
			
}

