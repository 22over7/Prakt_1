#include <stdio.h>

int main()
{

	for (int i = 0; i < 100000; i = i + 1) //Iteration
	{
		if ((i/10000) == ((i/1)%10) && ((i/1000)%10) == ((i/10)%10))
		{
			printf("%05d\n", i);
		}
	}

	return 0;
}


