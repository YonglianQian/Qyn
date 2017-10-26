#pragma once
#ifdef TESTDLL_EXPORTS
#define MY_TEST_API __declspec(dllexport)
#else
#define MY_TEST_API __declspec(dllexport)
#endif

class MY_TEST_API CMyTestDll
{
public:
	CMyTestDll();
	~CMyTestDll();
	//做一个类中的接口
	int Add(int a, int b);
};
//做一个全局的接口
extern "C" {

	MY_TEST_API int Sub(int a, int b);
}

