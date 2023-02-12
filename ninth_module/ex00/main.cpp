#include "easyfind.hpp"

int main(void)
{
	std::vector<int> a(10000);
	for (int i = 0; i < 10000; i++)
		a[i] = i * i;
	std::vector<int>::iterator it;	
	it =  easyfind( a, 64) ;
	std::cout << "finding element = ";
	std::cout << *it<< std::endl;
}

//fwa