#include "easyfind.h"
#include <vector>
#include <deque>
#include <list>
int main()
{
    std::vector<int> v(10);
    for (unsigned int i = 0; i < v.size(); i++)
            v[i] = i + 1;
    
    easyfind(v, 10);

    try
    {
        std::deque<int> d(5);
        for (unsigned int i = 0; i < d.size(); i++)
            d[i] = i * 100;
        easyfind(d, 300);
        easyfind(d, 50);
    }
    catch(const std::exception& e)
    {
        std::cerr <<  e.what() <<'\n';
    }

     try
    {
        std::list<int> l;
        l.push_back(12);
        l.push_back(23);
        l.push_back(42);
        l.push_back(20);
        l.push_back(7);
        easyfind(l, 20);
        easyfind(l, 77);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}