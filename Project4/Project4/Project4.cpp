// Project4.cpp: 定义 DLL 应用程序的导出函数。
//


#include "stdafx.h"
#include "Project4.h"
#include <iostream>


//导出变量示例
 int PROJECT_API nProject = 0xDD;

//导出函数示例
 int PROJECT_API fnProject4(int a, int b) {
	return a + b;
}

//导出类
CProject4::CProject4() {
	std::cout << "构造函数 CProject4 被调用" << std::endl;
};
CProject4::~CProject4() {
	std::cout << "析构函数 ~CProject4 被调用" << std::endl;
};
bool CProject4::Test() {
	printf("Test方法被调用 返回true \n");
	return true;
}
char* CProject4::Test1() {
	printf("Test1方法被调用 返回为NULL \n");
	return NULL;
}
