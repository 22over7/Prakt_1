/*
 ============================================================================
 Name        : 2d_array.c
 Author      : Lorenz Sommer
 Version     :
 Copyright   :
 Description :
 ============================================================================
 */

#include <stdio.h>

#include </home/lorenz/git/Prakt_1/header_files/global.h>

int main(void)
{
	char myMatrix1[MATRIXSIZE][MATRIXSIZE] = { { 0,1,2 },{ 3,4,5 },{ 6,7,8 } };
	char myMatrix2[MATRIXSIZE][MATRIXSIZE] = { 	{ "        "},
												{ "   *    "},
												{ "   ***  "},
												{ "********" },
												{ "*********" },
												{ "********" },
												{ "   ***  "},
												{ "   *    "},
												{ " 	   "} };

	printMatrix(myMatrix1, 3, VALUE);
	printMatrix(myMatrix2, 10, CHAR);



	return 0;
}

