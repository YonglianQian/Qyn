#include <stdio.h>
#include <iostream>

static int GCount = 0;

void output(const int* a) {
	for (size_t i = 0; i < 9; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void f(int* a, int n) {
	//a[n]最大序号位置的可能性，赋值 。递归调用，a[n-1]序号位置的可能性。直至a[0]序号位置，输出output(a)
	for ( a[n] = 1; a[n] < 10; a[n]++)
	{
		if (n==0)
		{
			output(a);
			GCount++;//成功摆放情况，计数累加

		}
		else
		{
			f(a, n - 1);
		}
	}
}
int main() {

	int a[9];
	f(a, 0);

	printf("总和的计数为 %d", GCount);
	system("pause");
	return 0;
}