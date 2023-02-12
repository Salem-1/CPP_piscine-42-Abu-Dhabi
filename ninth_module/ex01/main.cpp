#include "Span.hpp"

/*
int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
*/
// /*
int main(void)
{
	std::vector<int> a;
	for(int i = 0; i < static_cast<int>(20000) ;i++)
			a.push_back(rand());
	Span s(20000);
	std::cout << "N = " << s.getN() << std::endl;
	std::vector<int>::iterator start = a.begin();
	std::vector<int>::iterator end = a.end();
	s.fill_with_iter(start, end);
	std::cout << "Shortest span is " << s.shortestSpan() << std::endl;
	std::cout << "Longest span is " << s.longestSpan() << std::endl;

}
// */
//fill with items more than N should throw and error
/*
int main(void)
{
	Span s(10);
	s.addNumber(3);
	s.addNumber(4);
	// s.addNumber(5);
	std::cout << "longest span " << s.longestSpan() << std::endl;
	// std::cout << "shortest span " << s.shortestSpan() << std::endl;

}
*/