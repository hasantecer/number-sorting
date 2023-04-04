#include <stdio.h>
#include <stdlib.h>



int main() {
	
	printf("---------sayi siralama--------\n");
	
	int dizi[5];
	int i,j;
	int temp;
	for (i=0;i<5;i++){
		
		printf("Lutfen sayi giriniz:");
		scanf("%d",&dizi[i]);
	}
	
	for (i=0;i<4;i++){
		
		for(j=i+1;j<5;j++)
		{
			if (dizi[i] < dizi[j])
				{
					temp =  dizi[i];
					dizi[i] = dizi[j];
					dizi[j] = temp;
				}
			
		}
	 	
	}
	printf("\n--Sayilarin sirali hali--");
	
	for (i=0;i<5;i++){
		
		printf("-%d-",dizi[i]);
	}
	
	
	
	system("pause");
	return 0;
}
