// TestDll.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Project4.h"

#pragma comment(lib,"Project4.lib")
extern int __declspec(dllimport) nProject;
CProject4 test;
int main()
{
	test.Test();
	test.Test1();
	printf("%d \n", nProject);
    return 0;
}

