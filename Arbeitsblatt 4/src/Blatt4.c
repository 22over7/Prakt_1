/*
 ============================================================================
 Name        : uebung4.c
 Author      : Lorenz Sommer
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "element.h"
#include "myboolean.h"
#include "test.h"

int main(void)
{
	printf("Hallo\n");
	List* pList = listCreate();

	listFillRandom(pList,12,10,0,10);
	listPrint(pList);

	return EXIT_SUCCESS;
}
