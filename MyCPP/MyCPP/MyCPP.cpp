// MyCPP.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int sum = 0, value = 0;
	while (cin >> value)
	{
		sum += value;
	}
	cout << "总和为SUM " << sum << endl;
	
	
    return 0;
}

