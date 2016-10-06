// ResolvingEquation.cpp: îïðåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïðèëîæåíèÿ.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	printf("Equation is ((x+(3*x)/(x-3))^2)-4+((3*x^2)/(x-3))=\n");
	int x = 0;
	float a = 1.1;
	printf("x = ");
	scanf("%d", &x);
	if (x != 3) {
		a = ((x + (3 * x) / (x - 3)) ^ 2) - 4 + ((3 * x ^ 2) / (x - 3));
		printf(" Result is %f", a);
	}
	else 
		printf("ERROR\nInvalid value");
	
	getch();

	return 0;
}

