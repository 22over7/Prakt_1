#include <stdio.h>

int calcSumIntArray(int* samples, int n)
{
	int summe = 0;
	for(int i = 0; i < n; i++)
	{
		summe = summe + samples[i];
	}

	return summe;
}

int main(void)
{
	int samples[] = {5,4,3,2,6};
	int summe = calcSumIntArray(samples, 5);
	printf("Die Summe des Arrays ist: %d", summe);

	return 0;
}
