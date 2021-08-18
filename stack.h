#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "TypeDefs.h"
uint8 stack1[100];

void push(uint8 u8_data);
uint8 pop();
void printStack();
#endif // STACK_H_INCLUDED
