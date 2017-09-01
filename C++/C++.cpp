// C++.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <math.h>
#include <stdio.h>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int startTime = clock();
	int origin = 3;
	int cache = 0;
	bool status = false;
	cout << "Testing" << endl;
	cout << endl;
	while (1)
	{
		status = false;
		cache = floor(sqrt(origin));
		for (int i = 2; i <= cache; i++)
		{
			if (origin % i == 0)
			{
				status = true;
				break;
			}
		}

		if (!status)
		{
			if ((origin / (10000 * 1000)) > 1)
			{

				int endTime = clock();
				cout << "Calculated:" << endTime - startTime << endl;
				cout << "The smaller the numbers, the better!" << endl;
				cout << endl;
				cout << "Press Y to Exit" << endl;
				string a;
				getline(cin, a);
				if (a.compare("Y") == 0)
				{
					return 0;
				}
			}
		}

		origin++;
	}
	return 0;
}

