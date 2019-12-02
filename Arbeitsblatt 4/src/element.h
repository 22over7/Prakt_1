/*
 * element.h
 *
 *  Created on: Nov 29, 2019
 *      Author: lorenz
 */

#ifndef ELEMENT_H_
#define ELEMENT_H_

struct Element
{
	unsigned int value;
	void* pSuccessor;
};
typedef struct Element Element;

Element* elementCreate()

{
	Element* pElement = (Element*) malloc(sizeof(Element));
	pElement->pSuccessor = NULL;
	pElement->value = 0;
	//printf(">elementcreate at %x in memory\n",pElement);
	return pElement;
}

#endif /* ELEMENT_H_ */
