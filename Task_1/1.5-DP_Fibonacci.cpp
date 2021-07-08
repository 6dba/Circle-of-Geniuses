#include <iostream>

int fib(int n) {
	
	const int MAXN = 1000;
	
	// �� ��������� ������ ���������������� ������
	static int c[MAXN];

	if (n == 0) return 0;

	if (n == 1) return 1;
	
	// ���� ���� �������� �� ������� -> ����������
	if (c[n] > 0) return c[n];
	
	// ���� ��� - ���������
	return c[n] = fib(n-1) + fib(n-2);
}
