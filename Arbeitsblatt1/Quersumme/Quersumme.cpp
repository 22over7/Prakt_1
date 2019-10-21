#include <stdio.h>

int main()
{

	int zahl;
	int qsum;

	printf("Bitte geben sie eine 4-Stellige Zahl ein: ");
	scanf("%d", &zahl);

	qsum = (((zahl/1000)) + ((zahl/100)%10) + ((zahl/10)%10) + ((zahl/1)%10));

	printf("Die Quersumme der Zahl ist: %d",qsum);

	return 0;
}

