#include "Span.hpp"

int main(void)
{
	std::vector<int> a;
	for(int i = 0; i < static_cast<int>(2000) ;i++)
			a.push_back(rand());
	Span s(20000);
	std::cout << "N = " << s.getN() << std::endl;
	std::vector<int>::iterator start = a.begin();
	std::vector<int>::iterator end = a.end();
	s.fill_with_iter(start, end);
	std::cout << "Shortest span is " << s.shortestSpan() << std::endl;
	std::cout << "Longest span is " << s.longestSpan() << std::endl;

}

//fwa