#include <stdio.h>

void rechteck (unsigned int h, unsigned int b, char c)
{
for (int i = 0; i < b; i++)
{
	for (int i2 = 0; i2 < h; i2++)
	{
		if(i == 0 || i2 == 0 || i == b-1 || i2 == h-1)
		{
			putchar('x');
		}
		else
		{
			putchar(' ');
		}
	} printf("\n");
}
}

int main(void)
{
	unsigned int a = 0;
	unsigned int b = 0;
	char c;

	printf("Breite? \n");
	scanf("%d",&a);

	printf("Hoehe? \n");
	scanf("%d",&b);

	printf("Zeichen? \n");
	scanf("%c",&c);

	rechteck(a,b,'#');

	//rechteck2();

	return 0;
}


