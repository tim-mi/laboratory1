// finding the root of the chord method V2.0.cpp: определяет точку входа для консольного приложения.
//Нахождение корней функции F(x)=x^2 -1 методом хорд

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
	{
		float a, b, f, fa, fb, eps, x, fab; //fa-это значение функции f от a 
		// fb-это значение функции f от b
		// fab- это разность значений f(a)-f(b)
		scanf_s("%f", &a); //Вводим значениe координаты а 
		scanf_s("%f", &b); //Вводим значениe координаты b
		scanf_s("%f", &eps); //Вводим значениe eps
		fa = a*a - 1;
		fb = b*b - 1;
		fab = fa - fb;
		if (fa*fb <= 0){
			x = (b - a)* fabsf(fa) / fabsf(fab) + a;
			f = x*x - 1;
			for (fabsf(f); fabsf(f) >= eps; x = (b - a)* fabsf(fa) / fabsf(fab) + a, f = x*x - 1)
			{
				if (fa*f < 0){
					b = x;
					fb = f;
				}
				else {
					a = x;
					fa = f;
				}
			}
			printf("If x = %.6f then y = %.6f", x, f);
		}
		else printf("Method is wrong");
		_getch();
	return 0;
}


