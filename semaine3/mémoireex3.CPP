#include <iostream>
#include <cstdint>
typedef struct s
{
	int x, y, z, w;
} S;
void Increment(S *ps)
{
	(*ps).x++;
}
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
	int *tab2 = new int[10];
	printf("main - id: tab2, value:%x, address:%x, size:%d\n", tab2, &tab2,
		   sizeof(tab2));
	tab2[0] = 15;
	printf("main - id: tab2[0], value:%d, address:%x, size:%d\n", tab2[0], &(tab2[0]),
		   sizeof(tab2[0]));
	int *previous = tab2;
	for (int i = 0; i < 10; ++i)
	{
		tab2 = new int[i];
		printf("previous->tab2 address position difference:%d\n", (long)tab2 -

																	  (long)previous);

		previous = tab2;
		S *ps = new S;
		printf("main - id: ps, value:%x, address:%x, size:%d\n", ps, &ps, sizeof(ps));
		printf("main - id: (*ps), address:%x, size:%d\n", &(*ps), sizeof(*ps));
		(*ps).x = 20;
		Increment(ps);
		printf("main - id: (*ps).x, value:%d\n", (*ps).x);
	}
	
}
