#include <iostream>
#include <cstdint>
void Func1(int a)
{
	printf("Func1 - id: a, value:%d, address:%x, size:%d\n", a, &a, sizeof(a));
}
void Func2(int &a)
{
	printf("Func2 - id: a, value:%d, address:%x, size:%d\n", a, &a, sizeof(a));
}
int main(int argc, char const *argv[])
{

	int a = 0;
	printf("main - id: a, value:%d, address:%x, size:%d\n", a, &a, sizeof(a));
	int b = 1;
	int c = 2;
	int d = 3;
	printf("a->b address position difference:%td\n", (intptr_t)&b - (intptr_t)&a);
	printf("b->c address position difference:%td\n", (intptr_t)&c - (intptr_t)&b);
	printf("c->d address position difference:%td\n", (intptr_t)&d - (intptr_t)&c);
	Func1(a);
	int &e = a;
	Func2(a);
	printf("main - id: e, value:%d, address:%x, size:%d\n", e, &e, sizeof(e));
}