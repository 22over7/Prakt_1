#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <time.h>

void printarr(int* arr, int n)
{
	for(int i; i < n; ++i)
	{
		printf("{%d}",arr[i]);
	}
	printf("\n");
}

int calcSumIntArray(int* samples)
{
	int summe = 0;
	for(int i = 0; i < 5; i++)
	{
		summe = summe + samples[i];
	}

	return summe;
}

int wuerfel6()
{
	return rand() % 6 + 1;
}

char grosseStrasse(int* samples)
{

	for(int i = 0; i < 5; i++)
	{
		for(int i2 = 0; i2 < 5; i2++)
		{
			if(i != i2)
			{
				if (samples[i] == samples[i2])
				{
					return 0;
				}
			}
		}
	}

	if((calcSumIntArray(samples) == 15) || (calcSumIntArray(samples) == 20))
	{
		return 1;
	}
	return 0;
}

void becherWurf(int* samples)
{
	for(int i = 0; i < 5; i++)
	{
		samples[i] = wuerfel6();
	}
}
int wuerfe(void)
{
	int counter = 0;
	int samples[5];

	do
	{
		becherWurf(samples);
		counter = counter + 1;
		//printarr(samples,5);
	}
	while((grosseStrasse(samples)) == 0);

	//printf("%d bis zur grossen Strasse\n", counter);

	return counter;

}

int main(void)
{
	srand(getpid()); //Wird zur Initialisierung der Zufallszahlen benoetigt
	float durchs = 0;
	float count = 0;
	int arr[] = {1,2,3,4,5,6};
	printarr(arr,6);
	wuerfe();

	for(int i = 0; i < 10000; i++)
	{
		count = wuerfe() + count;
	}

	durchs = count / 10000;
	printf("Durchschnittlich %.2f Wuerfe bis zur grossen Strasse.", durchs);

	return 0;

}
