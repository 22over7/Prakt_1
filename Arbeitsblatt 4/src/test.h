/*
 * test.h
 *
 *  Created on: Nov 29, 2019
 *      Author: lorenz
 */

#ifndef TEST_H_
#define TEST_H_

#pragma once
#include "list.h"

void listFillRandom(List* list, int seed, int anzahlWerte, int min, int max);
void testListFindElement(void);
void testListGetElementAtIndex(void);
unsigned testListGetIndexOf(void);

#endif /* TEST_H_ */
