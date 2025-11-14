#include <iostream>
int a = 5;
int *pa = &a;
int b = 10;
int *pb = &b;
int *pc = nullptr;
int main(int argc, char const *argv[])
{
	
	std::cout << a << std::endl;
	std::cout << *pa << std::endl;
	std::cout << b << std::endl;
	std::cout << *pb << std::endl;
	pc=pa;
	std::cout << *pa << std::endl;
	pa=pb;
	std::cout << *pa << std::endl;
	pc=pb;
	std::cout << *pb << std::endl;
	std::cout << "new"<< std::endl;
	std::cout << a << std::endl;
	std::cout << pa << std::endl;
	std::cout << b << std::endl;
	std::cout << pb << std::endl;
	std::cout << *pa << std::endl;
	std::cout << *pb << std::endl;
}
