#include <iostream>
#include <deque>

int main()
{
	std::deque<int> d;
	d.push_back(0);
	d.push_back(1);

	std::cout << d[1] << std::endl;
	d.pop_back();
	d.push_back(2);
	
	std::deque<int>::iterator it;
	it = d.begin();
	std::cout << *it << std::endl;

	return (0);
}