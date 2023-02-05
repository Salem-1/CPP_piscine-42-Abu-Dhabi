#include "easyfind.hpp"

int main(void)
{
	std::vector<int> a(10);
	for (int i = 0; i < 10; i++)
		a[i] = i * i;
	std::vector<int>::iterator it;	
	it =  easyfind( a, 64) ;
	std::cout << "tfinding element = ";
	std::cout << *it<< std::endl;
}

//fwa