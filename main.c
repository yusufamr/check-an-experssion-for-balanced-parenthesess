#include "stack.h"
#include "CheckExperssion.h"
int main() {
	uint8 x[20];
	printf("please enter sentence you want to test : \n");
	scanf("%s", x);
	sint8 c = Check_experssion(x);
	if (c == 1)
		printf("balanced");
	else if (c == -1)
		printf("unbalanced");

	return 0;
}
