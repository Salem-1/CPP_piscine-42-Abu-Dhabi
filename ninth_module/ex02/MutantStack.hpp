
#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <list>
# include <deque>

template <typename T>
class MutantStack
{
	public:
		MutantStack(){};
		~MutantStack(){};
		MutantStack &operator= (MutantStack const &obj2)
		{
			if (this != &obj2)
			{
				this->capsule = obj2.capsule; 
			}
			return (*this);
		};

		void	push(int);
		T		top(void);
		void	pop(void);
		int		size(void);
		T		*begin();
		T		*end();
		bool	empty() const;
		void	swap(MutantStack *obj2);
		void	emplace(T);
		// class iterator
		// {
		// 	public:
		// 		iterator(){};
		// 		~iterator(){};
		// 		// iterator
		// 		std::iterator<T> it;
		// };
		// static T *iterator;
	private:
		std::deque<T>	capsule;
};

template <typename T>
void	MutantStack<T>::swap(MutantStack *obj2)
{
	MutantStack<T> tmp;

	tmp = *this;
	*this = *obj2;
	*obj2 = tmp;
}
template <typename T>
void	MutantStack<T>::emplace(T arg)
{
	capsule.emplace_front(arg);
};

template <typename T>
void	MutantStack<T>::push(int item)
{
	capsule.push_back(item);
};

template <typename T>
void	MutantStack<T>::pop()
{
	capsule.pop_back();
};

template <typename T>
int	MutantStack<T>::size()
{
	return (capsule.size());
};

template <typename T>
T	MutantStack<T>::top()
{
	return (capsule.back());
};
template <typename T>
T	*MutantStack<T>::begin()
{
	return (capsule.begin());
};
template <typename T>
T	*MutantStack<T>::end()
{
	return (capsule.end());
};

template <typename T>
bool	MutantStack<T>::empty() const
{
	return (capsule.empty());
};
#endif
// will provide all member functions + iterators
//push
//pop
//top
//size
//begin  return addresses 
//end

/*
(constructor)	Construct stack (public member function)
empty	Test whether container is empty (public member function)
size	Return size (public member function)
top	Access next element (public member function)
push	Insert element (public member function)
emplace	Construct and insert element (public member function)
pop	Remove top element (public member function)
swap	Swap contents (public member function)
*/
//what are iterators, and how to build one 
//how to implement this ugly syntax 
//MutantStack<int>::iterator it = mstack.begin();
//MutantStack<int>::iterator ite = mstack.end();