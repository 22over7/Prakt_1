#include <stdio.h>
void rechteck(unsigned int b, unsigned int h, char c)
//a für breite, b für hoehe, c für das Zeichen
{

	//Oberste Zeile
	for (int i = 1; i <= b; i = i + 1)
	{
		if (h == 0)
		{
			break;
		}
		else
		{
			printf("%c", c);
		}
	}
	printf("\n");

	//Körper des Rechteckes

	for (int i2 = 2; i2 < h; i2 = i2 + 1)  //Für jede Zeile ab der zweiten
	{
		//Das erste Element einer Zeile ist immer das Zeichen also für Breitenindex 1 -> Zeichen
		//Dann (Breite - 2) Leerzeichen
		//Letztes Element wieder das Zeichen

		for (int i3 = 1; i3 <= b; i3 = i3 + 1)
		{
			if (b == 1)  //Ausnahme für Breite 1
			{
				putchar(c);
				printf("\n");
			}
			else if (i3 == 1)  //Erstes
			{
				putchar(c);
			}
			else if (i3 != 1 && i3 != b)  //Leerzeichen dazwischen
			{
				putchar(' ');
			}
			else if (i3 == b)
			{
				putchar(c);		//Letztes Zeichen
				printf("\n");   //Absatz nach jeder Zeile
			}
		}
	}

	//Unterste Zeile
	for (int i = 1; i <= b; i = i + 1)
	{
		if (h == 1 || h == 0) //Ausnahme für Höhe 1 und  0
		{
			break;
		}
		else if (h != 1)
		{
			printf("%c", c);
		}
	}


}
void rechteck2 (void)
{
for (int i = 0; i < 10; i++)
{
	for (int i2 = 0; i2 < 10; i2++)
	{
		if(i == 0 || i2 == 0 || i == 9 || i2 == 9)
		{
			putchar('c');
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


