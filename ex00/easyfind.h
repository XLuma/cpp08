#ifndef EASYFIND_H
#define EASYFIND_H
#include <string>
#include <iostream>
#include <algorithm>
#include<iterator>
#include <vector>

class NoExist : public std::exception{
    public:
    const char *what() const throw(){
        return("Argument does not exist !");
    }
};

template<typename T> typename T::const_iterator easyfind(T const &tab, int tofind) //find returns an iterator, USE GOOGLE MFER
{
    typename T::const_iterator it = find(tab.begin(), tab.end(), tofind);
    if(it == tab.end())
        throw NoExist();
    else
    {
        std::cout << *it << std::endl;
        return it; //read the COMPILER ERRORS MUFFIN THEY ARE USEFUL
    }
}

#endif