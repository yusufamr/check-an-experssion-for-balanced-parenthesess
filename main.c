#include "stack.h"
#include <string.h>
#include "CheckExperssion.h"
#define testCase 4
int main() {
	uint8 experssion[20];
	// test case 1
#if testCase ==1
	strcpy(experssion,"{{}}");
#endif
	// test case 2 if user want to input string
#if testCase == 2
	printf("please enter sentence you want to test : \n");
	scanf("%s", experssion);
#endif // testCase
	experssion_counter++;
}
printf("\n");
sint8 c = Check_experssion(experssion);
if (c == Balanced)
printf("balanced");
else if (c == Unbalanced)
printf("unbalanced");

return 0;
}
