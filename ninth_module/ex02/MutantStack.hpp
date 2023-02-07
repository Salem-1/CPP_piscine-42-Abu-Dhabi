#include <iostream>
#include <algorithm>
#include <list>

template <class T, class Container = deque<T> >
class Mutantstack
{
	Mutantstack();
}

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