#include<locale.h>
#include<stdio.h>
#include<iostream>
#include<time.h>
#include<math.h>
#include"Header.h"
using namespace std;

double fe(double *x, double *y)
{
	/*Определите функцию double f(double x, double y), которая вычисляет и возвращает длину гипотенузы прямоугольного треугольника, когда две другие стороны x и y известны
	*/
	double c = sqrt(*x**x + *y + *y);
	return c;
}
double fa(double *x, double *y, double *x2, double *y2)
{
	/*Напишите функцию double f(double x1, double y1, double x2, double y2), которая вычисляет расстояние между двумя точками (xl, yl) и (x2, y2).
*/
	double Z = sqrt(pow(*x - *x2, 2) + pow(*y - *y2, 2));
	return Z;
}

float x(float a, float b)
{
	return a + b;
}
float x(float a, float b,float c,float z)
{
	return a + b+c+z;
}
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


int del(int *a, int *b)
{
	int delit;
	if (*a >= *b)
	{
		delit=del2(a, b);
		*a /= delit;
		*b /= delit;
	}
	else if (*a < *b)
	{
		delit = del2(a, b);
		*a /= delit;
		*b /= delit;
	}
	return delit;
}

int del2(int *a, int *b)
{
	int i=2;
	if ((*a%*b) == 0)
	{
		return *b;
	}
	else {
		while (((*a%i) == 0) && ((*b%i == 0)))
		{
			if((*b%i)==0)
			{
				if ((*a%i) == 0)
				{
					return i;
				}
			
			}
			i++;
		}
	}
}
void masivRand(int *A, int *len)
{
	for (int i = 0; i < *len; i++)
	{
		A[i] = 0 + rand() % 1000;
	}
}
void masivCout(int *A, int *len)
{
	for (int i = 0; i < *len; i++)
	{
		cout << "A[" << i << "]= "<<A[i] << endl;
	}
}
void maxMin(int *A, int *len)
{
	int temp;
	for (int i = 0; i < *len - 1; i++)
	{
		for (int r=*len - 1; r > i; r--)
		{
			if (A[r-1] > A[r])
			{
				temp = A[r-1];
				A[r - 1] = A[r];
				A[r] = temp;
			}
		}
	}
	cout << "A[" << 9 << "]= " << A[9]<<endl;
	cout << "A[" << 0 << "]= " << A[0] << endl;
}

void Masiv4x4(int *A, int *len,int (*B)[4],int *len2)
{
	for (int i = 0,k=0; i < *len2,k<*len; i++)
	{
		for (int j = 0; j < *len2; j++)
		{
			B[i][j] = A[k];
			k++;
		}	
	}
}
void Masiv4x4Cout( int(*B)[4], int *len2)
{
	for (int i = 0; i < *len2; i++)
	{
		for (int j = 0; j < *len2; j++)
		{
			cout << "A[" << i << "]" << "[" << j << "]= " << B[i][j] << "\t";
		}
		cout << endl;
	}
}
void masivChetNechet(int *A, int *len)
{
	int chet=0;
	int nechet=0;
	for (int i = 0; i < *len; i++)
	{
		if ((A[i] % 2) == 0)
			chet++;
		else
			nechet++;
	}
	cout << "Четных= " << chet << endl;
	cout << "неЧетных= " << nechet << endl;
}