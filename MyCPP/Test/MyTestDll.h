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
	//��һ�����еĽӿ�
	int Add(int a, int b);
};
//��һ��ȫ�ֵĽӿ�
extern "C" {

	MY_TEST_API int Sub(int a, int b);
}

