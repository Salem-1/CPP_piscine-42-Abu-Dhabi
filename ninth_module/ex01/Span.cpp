#include "Span.hpp"

Span::Span(): N(0), counter(0){
};

Span::~Span(){};

Span::Span(unsigned int input): N(input), counter(0)
{
	std::vector<int> a(N);
};

Span::Span(Span const &obj2)
{
	*this = obj2;
};

//do the copy
Span &Span::operator= (Span const &obj2)
{
	if (this != &obj2)
	{
		this->a = obj2.a;
	}
	return (*this);
};
int	Span::operator[](int i)
{
	if (i < 0 || i > static_cast<int>(N) -1)
		throw (std::out_of_range("Index out of range"));
	return (a[i]);
};
int Span::getN() const
{
	return (N);
}

void	Span::addNumber(int x)
{
	if (counter < N)
	{
		a.push_back(x);
		counter++;
	}
	else
		throw (std::out_of_range("Index out of range"));
};

int	Span::shortestSpan()
{
	if (counter < 2 || a.begin() == a.end())
		throw (std::out_of_range("Span length too small"));
	std::sort(a.begin(), a.end());
	int	tmp = (a[1] - a[0]);
	for(int i = 1; i < static_cast<int>(counter); i++)
	{
		if ((a[i] - a[i -1]) < tmp)
			tmp = (a[i] - a[i -1]);
	}
	return (tmp);
};
int	Span::longestSpan() 
{
	if (counter < 2 || a.begin() == a.end())
		throw (std::out_of_range("Span length is too small"));
	std::sort(a.begin(), a.end());
	return (a[counter - 1] - a[0]); 
};

void Span::fill_with_iter(
	std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	unsigned int	local_counter = 0;
	std::vector<int>::iterator it;
	for (it = start; it != end ; it++)
	{
		if (local_counter >= N)
			throw (std::out_of_range("Index out of range"));
		a.push_back(*it);
		counter++;
		local_counter++;
	}
}	
