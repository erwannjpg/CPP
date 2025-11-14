#include <iostream>
float AllocateSquare(float oat);
 void main()
{
	float *pi = new float;
	float pointeurdefloat = AllocateSquare(5.f);
	std::cout << pointeurdefloat << std::endl;
	pointeurdefloat = AllocateSquare(2.F);
	std::cout << pointeurdefloat << std::endl;
	delete pi;
}
float AllocateSquare (float oat)
{
	
  return oat ;
}