#include "CheckExperssion.h"
/*
 *[Function name]:Check_experssion
 *[description]: responsible for check if sentence is balance of brackets or not
 */
sint8 Check_experssion(uint8 *Data) {
	uint8 experssion_counter = 0;
	uint8 temp;

	while (Data[experssion_counter] != '\0') {   // if char is { or ( then we push it
		if (Data[experssion_counter] == '{' || Data[experssion_counter] == '(') {

			push(Data[experssion_counter]);

		}
		// if data is } or ) then we compare it with last element in stack
		else if (Data[experssion_counter] == '}' || Data[experssion_counter] == ')') {
			temp = pop();

			if (!isMatching(temp, Data[experssion_counter]))
				return Unbalanced;
		}
		// if data is anything other than this do nothing
		experssion_counter++;
	}
	return Balanced;
}
/*
 *[Function name]:isMatching
 *[description]: responsible for check if { and } or ( and ) is balanced or not
 */
uint8 isMatching(uint8 char1, uint8 char2) {
	if (char1 == '(' && char2 == ')')
		return Matched;
	else if (char1 == '{' && char2 == '}')
		return Matched;
	else
		return Unmatched;
}
