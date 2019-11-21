/*
 ============================================================================
 Name        : matrix_rot_test.c
 Author      : Lorenz Sommer
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include </home/lorenz/git/Prakt_1/header_files/global.h>

int main(void)
{
	char myMatrix1[MATRIXSIZE][MATRIXSIZE] = { { 0,1,2,3 },{ 4,5,6,7 },{ 8,9,10,11 },{12,13,14,15}};
	char myMatrix2[MATRIXSIZE][MATRIXSIZE] = {  { "         "},
												{ "   *     "},
												{ "   ***   "},
												{ "******** " },
												{ "*********" },
												{ "******** " },
												{ "   ***   "},
												{ "   *     "},
												{ "         "},
												{ "         "}};


	rotateMatrixRight(myMatrix2,9);
	printMatrix(myMatrix2,9,CHAR);

}
