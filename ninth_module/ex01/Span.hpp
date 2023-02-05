#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <algorithm>
#include <vector>
class Span
{
	public:
		Span();
		~Span();
		Span(unsigned int input);
		Span(Span const &obj2);
		Span &operator= (Span const &obj2);
		int	operator[](int);
		int getN() const;
		void addNumber(int);
		int	shortestSpan();
		int	longestSpan();
		void fill_with_iter(
	std::vector<int>::iterator start, std::vector<int>::iterator end)
;	
	private:
		unsigned int	N;
		unsigned int		counter;
		std::vector<int> a;

};
#endif

