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
	int samples[] = {2,6,8,10,4};
	int summe = calcSumIntArray(samples, 5);
	printf("Die Summe des Arrays ist: %d", summe);

	return 0;
}
