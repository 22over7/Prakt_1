#include<stdio.h>

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

void bruchMultiplikation(int zaehler1, int nenner1, int zaehler2, int nenner2)
{
	printf("1. Bruch: %d/%d\n", zaehler1, nenner1);
	printf("2. Bruch: %d/%d\n", zaehler2, nenner2);

	int erg_z = zaehler1 * zaehler2;
	int erg_n = nenner1 * nenner2;

	printf("Ergebnis: %d/%d\n", erg_z, erg_n);

	int ggt = ggT(erg_z, erg_n);

	printf("Gekuerztes Ergebnis: %d/%d\n", erg_z*1/ggt, erg_n*1/ggt);
}



int main(void)
{
	int zaehler1 = 5, nenner1 = 8, zaehler2 = 2, nenner2 = 7;
	bruchMultiplikation(zaehler1, nenner1, zaehler2, nenner2); return 0;
}
