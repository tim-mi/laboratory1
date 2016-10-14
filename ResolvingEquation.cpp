// ResolvingEquation.cpp: îïðåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïðèëîæåíèÿ.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
		printf("Equation is x^2+x^3-sqrt(x^2-2x+4)\n");
		int x;
		double a, b;
		printf("x = ");
		scanf_s("%d", &x);
		if ((x ^ 2 - 2 * x + 4) >= 0) {
			b = x*x - 2 * x + 4;
			a = x*x + x*x*x - sqrt(b);
			printf(" Result is %f", a);
		}
		else
			printf("ERROR\nInvalid value \n");
		system("pause");
		return 0;
	}

