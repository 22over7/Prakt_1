#include <stdio.h>

int main()
{
	int i;
	int check;

	printf("Quersumme?: ");
	scanf("%d", &check);

	for (i = 0; i < 10000; i = i + 1)
	{
		if ((i/1000) + ((i/100)%10) + ((i/10)%10) + ((i/1)%10) == check)
		{
			printf("%04d\n", i);
		}
	}

	return 0;
}

