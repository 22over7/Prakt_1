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
	printf(">>Begin:\n\n");

	//test_PushPrint();
	testListGetIndexOf();

	printf(">>End");
	return EXIT_SUCCESS;
}
