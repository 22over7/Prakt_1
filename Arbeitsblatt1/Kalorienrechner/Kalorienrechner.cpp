#include <stdio.h>

int main()
{
	int m; //Gewicht
	int l; //Groesse
	int t; //Alter
	//int g;

	float k_mann;
	float k_frau;

	printf("Groesse eingeben: ");
	scanf("%d", &l);

	printf("Gewicht eingeben: ");
	scanf("%d", &m);

	printf("Alter eingeben: ");
	scanf("%d", &t);

	//printf("Sind Sie m oder w? ");
	//scanf("%c", &g);

	k_mann = 66.47 + (13.7 * m) + (5 * l) - (6.8 * t);
	k_frau = 655.1 + (9.6 * m) + (1.8 * l) - (4.7 * t);

	printf("Koerpergewicht: %dkg, Groesse: %dcm, Alter: %d.\n", m,l,t);
	printf("Kalorien pro Tag Mann: %.2f. Kalorien pro Tag Frau: %.2f\n", k_mann, k_frau);

	return 0;
}
