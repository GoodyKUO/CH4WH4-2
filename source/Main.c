#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

int main(void){
	
	int num[SIZE];

	for (int i = 0; i < SIZE; i++){   //
		scanf_s("%d", &num[i]);
	}
	for (int w = 0; w < SIZE; w++){
		for (int i = 0; i < SIZE - 1; i++){

			if (num[i]>num[i + 1]){
				int t = num[i];
				num[i] = num[i + 1];
				num[i + 1] = t;
					for (int i = 0; i < SIZE; i++){   //
						printf("%d ", num[i]);
					}
			
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}
