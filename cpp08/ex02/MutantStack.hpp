#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
    MutantStack() : std::stack<T>() {}

    MutantStack(const MutantStack &other) : std::stack<T>(other) {}

    virtual ~MutantStack( void ) {}

    MutantStack &operator=(const MutantStack &other)
    {
        if (this != &other) {
            std::stack<T>::operator=(other);
        }
        return *this;
    }

    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator begin()
    {
        return std::stack<T>::c.begin();
    }

    iterator end()
    {
        return std::stack<T>::c.end();
    }

    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

    reverse_iterator rbegin()
    {
        return std::stack<T>::c.rbegin();
    }

    reverse_iterator rend()
    {
        return std::stack<T>::c.rend();
    }
};

#endif