#include<stdio.h>
int main() {
	int n, i;
	int a[100];
	int demChan=0; 
	int demLe=0;
	
	printf ("nhap so phan tu cua mang: ");
	scanf ("%d", &n);
	
	for (i=0; i<n; i++){
	printf ("nhap tung phan tu cua mang: ");
	scanf ("%d", &a[i]);
	
	}
	
	printf("\n cac so chan trong mang la: ");
	  for (i=0; i<n; i++) {
	   if (a[i] % 2 == 0) {
	printf ("%d ", a[i]);
	demChan++;	
 	   }
      }
    
    printf("\n cac so chan trong mang la: ");
      for (i=0; i<n; i++) {
        if (a[i] % 2!= 0) {
    printf ("%d ", a[i]);
    demLe++;
        }
      }
    
    return 0;
}
