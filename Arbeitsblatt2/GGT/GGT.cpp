#include <stdio.h>


int ggT(int a, int b)
{

	int ggt = 0;
	for(int i = 1; i <= a && i <= b; i = i+1)
	{
		if((a%i == 0) && (b%i == 0))
		{
			ggt = i;
		}
	}

	return ggt;
}


int main(void)
{
	int a = 23;
	int b = 68;

	printf("Der ggT von %d und %d ist %d.\n", a, b, ggT(a,b));

	return 0;

}



