// TRPO.cpp: Лабараторная работа по ТРПО 2.
//

#include "stdafx.h"
#include <iostream>
#include <clocale>

float raschet(float vklad, float time_vk);
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float vklad(0), time_vk(0), value(0);




	while (true)
	{
		cout << "Введите сумму вклада " << endl;
		cin >> vklad;
		if (cin.good())
		{
			cin.ignore(10, '\n');
			break;
		}
		cin.clear();
		cout << "Непрпвильный ввод данных " << endl;
		cin.ignore(10, '\n');
	}
	while (true)
	{
		cout << "Введите срок вклада " << endl;
		cin >> time_vk;
		if (cin.good())
		{
			cin.ignore(10, '\n');
			break;
		}
		cin.clear();
		cout << "Непрпвильный ввод данных " << endl;
		cin.ignore(10, '\n');	}
	cout << "Ваш вклад:"<< vklad << endl;
	cout << "Время:" << time_vk << endl;
	cout << "Итого:" << raschet(vklad, time_vk) << endl;
	cout << endl <<"Ваш доход: "<<vklad-raschet(vklad, time_vk) << endl;
	system("pause");
	return 0;
}
float raschet(float vklad, float time_vk)
{
	float vkladnew = vklad;
	float timevknew = time_vk;

	if (vklad < 100000)
	{
		//Если вклад меньше чем 100000.

		if ((timevknew <= 365) && (timevknew >= 241))
		{
			vkladnew = vkladnew + (vkladnew *((vkladnew * 0, 12)*timevknew)) / 365 / 100;
			return vkladnew;
		}
		if ((timevknew <= 240) && (timevknew >= 121))
		{
			vkladnew = vkladnew + (vkladnew *((vkladnew * 0, 06)*timevknew)) / 365 / 100;
			return vkladnew;
		}
		if ((timevknew <= 120) && (timevknew >= 31))
		{
			vkladnew = vkladnew + (vkladnew *((vkladnew * 0, 03)*timevknew)) / 365 / 100;
			return vkladnew;
		}
		if ((timevknew <= 30) && (timevknew > 0))
		{
			vkladnew = vkladnew - (vkladnew *((vkladnew * 0, 10)*timevknew)) / 365 / 100;
			return vkladnew;
		}
	}
	{
		//Если вклад больше 100000.
		if ((timevknew <= 365) && (timevknew >= 241))
		{
			vkladnew = vkladnew + (vkladnew *((vkladnew * 0, 15)*timevknew)) / 365 / 100;
			return vkladnew;
		}
		if ((timevknew <= 240) && (timevknew >= 121))
		{
			vkladnew = vkladnew + (vkladnew *((vkladnew * 0.08)*timevknew)) / 365 / 100;
			return vkladnew;
		}
		if ((timevknew <= 120) && (timevknew >= 31))
		{
			vkladnew = vkladnew + (vkladnew *((vkladnew * 0, 03)*timevknew)) / 365 / 100;
			return vkladnew;
		}
		if ((timevknew <= 30) && (timevknew > 0))
		{
			vkladnew = vkladnew - (vkladnew *((vkladnew * 0, 10)*timevknew)) / 365 / 100;
			return vkladnew;


		}

	}
}