#include<locale.h>
#include<stdio.h>
#include<iostream>
#include<time.h>
#include<math.h>
#include"Header.h"
using namespace std;


char f;
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	do {
		int N;
		cout << "Выберите задание" << endl;
		cin >> N;
		switch (N)
		{
		case 1:
		{
			cout << "Введите катеты" << endl;
			double x, y;
			cin >> x >> y;
			cout << fe(&x, &y) << endl;
		}
		break;
		case 2:
		{
			/*Напишите функцию double f(double x1, double y1, double x2, double y2), которая вычисляет расстояние между двумя точками (xl, yl) и (x2, y2).
*/
			double x, y, x2, y2;
			cout << "Введите кординаты 1" << endl;
			cin >> x >> y ;
			cout << "Введите кординаты 2" << endl;
			cin >> x2 >> y2 ;
			cout << fa(&x, &y, &x2, &y2) << endl;
		}
		break;
		case 3:
		{
			/*Напишите несколько функций с одним именем int f(…) и с разными наборами параметров. Продемонстрируйте работу перегруженных функций
*/
			cout << x(10, 20) << endl;
			cout << x(10, 20, 40, 40) << endl;
		}
		break;
		case 4:
		{
			/*Напишите функцию swap(int* a, int* b), которая изменяет значения параметров a и b так, что новое значение a равно старому значению b и наоборот.
*/int a, b;
		cout << "Введите а и b" << endl;
		cin >> a >>b;
			 swap(& a, &b);
			 cout << "a=" << a << endl
				<< "b=" << b << endl;
		}
		break;
		case 5:
		{
			int a, b;
			cout << "Введите а и b" << endl;
			cin >> a >> b;
			swap(&a, &b);
			cout << "a=" << a << endl
				<< "b=" << b << endl;
		}
		break;
		case 6:
		{
			/*Даны два натуральных числа a и b, обозначающие соответственно числитель и знаменатель дроби. Сократить дробь, используя функцию определения наибольшего общего делителя
*/
			int a, b;
			cout << "Введите числитель" << endl;
			cin >> a;
			cout << "Введите знаменатель" << endl;
			cin >> b;
			int delit;
			delit=del(&a, &b);
			cout << "a/b= " << a << "/" << b << endl;
			cout << "делитель =" << delit << endl;

		}
		break;
		case 7:
		{
			/*В заданном массиве целых чисел найти максимальное и минимальное число, использую функции определения максимального и минимального числа
*/int A[10];
		int len=10;
		masivRand(A, &len);
		masivCout(A, &len);
		maxMin(A, &len);

		}
		break;
		case 8:
		{
			/*Задан одномерный массив из 16 элементов. Сформировать двухмерный массив 4×4, в котором элементы увеличиваются слева направо, используя функции сортировки и преобразования одномерного массива в двухмерный массив
*/int A[16], B[4][4];
		int len = 16,len2=4;
		masivRand(A, &len);
		masivCout(A, &len);
		maxMin(A, &len);
	Masiv4x4(A, &len,B, &len2);

	Masiv4x4Cout(B, &len2);
		}
		break;
		case 9:
		{
			/*С помощью функции random(n) сгенерировать массив чисел от 0 до 50 и определить количество четных и нечетных чисел в этом массиве. Для определения четных и нечетных чисел использовать функцию*/
			int A[50];
			int len = 50;
			masivRand(A, &len);;
		     masivChetNechet( A, &len);
		}
		}
		cout << "Хотите продолжить" << endl;
		cin >> f;
	} while (f == 'y');
}