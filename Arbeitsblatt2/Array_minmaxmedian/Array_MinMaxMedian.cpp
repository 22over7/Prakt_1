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

int min(int* samples, int n)
{
	int min = samples[0];
	for(int i = 0; i < n; i++)
	{
		if (samples[i] < min)
		{
			min = samples[i];
		}
	}
	return min;
}

int max(int* samples, int n)
{
	int max = samples[0];
	for(int i = 0; i < n; i++)
	{
		if (samples[i] > max)
		{
			max = samples[i];
		}
	}
	return max;
}

float mean(int* samples, int n)
{
	return calcSumIntArray(samples, n) / n;
}

int main (void)
{
	int samples[] = {2,6,8,10,4};

	printf("Minimum aus Samples = %d\n", min(samples, 5));
	printf("Maximum aus Samples = %d\n", max(samples, 5));
	printf("Der Mittelwert von Samples = %.2f\n", mean(samples, 5));

	return 0;
}
