#include<stdio.h>

int InsertionSort(int subarr[], int k);

void main()
{
	int i,j,k;
	int subarr[20];
	int x,step=0;
	int H[20],A[20];
	int sizeH,sizeA;
	
	printf("Enter size of step array H");//Input size of step array H
	scanf("%d",&sizeH);

	printf("Enter the elements of step array H");//Input elements of step array H
	for(i=0;i<sizeH;i++)
		scanf("%d",&H[i]);

	printf("Enter size of input array A");//Input size of input array A
	scanf("%d",&sizeA);

	printf("Enter the elements of input array A");//Input elements of input array A
	for(i=0;i<sizeA;i++)
		scanf("%d",&A[i]);

	
	for (x = 0; x < sizeH; x++)
	{
		for (i = 0; i < H[step]; i++)
		{
			j = i;
			k = 0;

			while (j < sizeA)
			{
				subarr[k] = A[j];
				j = j + H[step];
				k++;
			}
			
			InsertionSort(subarr, k);

			j = i;
			k = 0;
			while (j < sizeA)
			{
				A[j] = subarr[k];
				j = j + H[step];
				k++;
			}


		}



		printf("H = %d\n", H[step]);

		for (i = 0; i < sizeA; i++)
		{
			printf("%d ", A[i]);
		}
		printf("\n\n");
		step++;
	}
	
	
}



int InsertionSort(int subarr[], int k)
{

	int i, key, j;
	for (i = 1; i < k; i++)
	{
		key = subarr[i];
		j = i - 1;

	
		while (j >= 0 && subarr[j] > key)
		{
			subarr[j + 1] = subarr[j];
			j = j - 1;
		}
		subarr[j + 1] = key;
	}

	
}
