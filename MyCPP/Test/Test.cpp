// Test.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "MyTestDll.h"


int main()
{
	CMyTestDll dllt;
	int ret2 = dllt.Add(3, 5);
	printf("ret2=%d", ret2);
    return 0;
}

