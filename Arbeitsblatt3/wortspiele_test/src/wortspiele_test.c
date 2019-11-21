/*
 ============================================================================
 Name        : wortspiele_test.c
 Author      : Lorenz Sommer
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include </home/lorenz/git/Prakt_1/header_files/global.h>

int main(void)
{




	char array[10];
	readInputAsString(array,10);

	caesarChiffre(array,10,5);



	return 0;
}
