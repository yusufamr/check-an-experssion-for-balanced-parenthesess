#include "stack.h"
#include <string.h>
#include "CheckExperssion.h"
#define X 2
int main() {
	uint8 x[20];
	// test case 1
#if X ==1
	strcpy(x,"{{}}");
#endif
	// test case 2 if user want to input string
#if X == 2
	printf("please enter sentence you want to test : \n");
	scanf("%s", x);
#endif // X
	i++;
}
printf("\n");
sint8 c = Check_experssion(x);
if (c == 1)
printf("balanced");
else if (c == -1)
printf("unbalanced");

return 0;
}
