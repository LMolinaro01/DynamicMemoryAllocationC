#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int *ptr;
	int n;
	int i;
	
	printf("Quantos Endereços Gostaria de Reservar?");
	
	scanf("%d", &n);
	
	ptr = (int*) malloc(n*sizeof(int));
	
	for (i=0; i<n; i++)
	{
		ptr[i]= i+1;
	}
	
		for (i=0; i<n; i++)
	{
		printf("%d\n", ptr[i]);
	}
	
	free(ptr);

	return 0;
}
