#include <stdio.h>

void sanduhr(unsigned int h, unsigned int b, char c)
{
	for(int i = 0; i < h; i++)
	{
		for (int i2 = 0; i2 < b; i2++)
		{
			if (i == 0 || i == i2 || b-i-1 == i2 || i == h -1)
			{
				putchar(c);
			}
			else
			{
				putchar(' ');
			}

		}
		printf("\n");
	}
}

int main(void)
{
	unsigned int a = 0;

	printf("Groesse? \n");
	scanf("%d",&a);


	sanduhr(a,a,'x');
}
