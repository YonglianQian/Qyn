// MyCPP.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include "MyCPP.h"
#include <iostream>


class Human {
public:
	void Walk() {
		printf("%s is walking \n", this->m_strName);
	}
	void Talk() {
		printf("%s is Talking \n", this->m_strName);
	}
	void SetString(string name) {

	}
protected:
	string m_strName;
	int m_nAge;
	bool m_bMale;
};
class Teacher :public Human {
public:
	void PrepareLesson() {
		printf("%s is preparing Lesson \n", this->m_strName);
	}
	void GiveLesson() {
		printf("%s is giving Lesson \n", this->m_strName);
	}
	void ReviewHomework() {
		printf("%s is Reviewing Homework \n", this->m_strName);
	}
protected:
	int m_nduty;
};

int main()
{
	Teacher MrChen;
	
    return 1;
}

