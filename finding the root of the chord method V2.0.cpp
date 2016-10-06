// finding the root of the chord method V2.0.cpp: ���������� ����� ����� ��� ����������� ����������.
//���������� ������ ������� F(x)=x^2 -1 ������� ����

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
	{
		float a, b, f, fa, fb, eps, x, fab;
		scanf_s("%f", &a); //������ �������e ���������� � 
		scanf_s("%f", &b); //������ �������e ���������� b
		scanf_s("%f", &eps); //������ �������e eps
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

