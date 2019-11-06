#include <stdio.h>

void printarr(int* arr, int n)
{
	for(int i; i < n; ++i)
	{
		printf("{%d}",arr[i]);
	}
}

void printIntArray(int* samples, int n)
{
	int backw[n];
	for(int i = 0; i < n; i++)
	{
		backw[n-i-1] = samples[i];
	}

	printf("samples[] = {%d,%d,%d,%d,%d}", backw[0],backw[1],backw[2],backw[3],backw[4]);

}

int main(void)
{
	int samples[] = {2,6,8,10,4};
	printIntArray(samples,5);

	return 0;

}
;
