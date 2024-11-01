#include "easyfind.hpp"

int main(void)
{   
    std::vector<int> vector;
    vector.push_back(1);
    vector.push_back(20);
    vector.push_back(3);
    vector.push_back(71);
    vector.push_back(500);

    std::cout <<  "Testing with Vector: " << std::endl;
    for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl << std::endl;

    try
    {
        std::cout << "Using easyfind to find value 3 on a vector: " << std::endl;
        std::cout << *easyfind(vector, 3) << std::endl;

        std::cout << "Using easyfind to find value 42 on a vector: " << std::endl;
        std::cout << *easyfind(vector, 42) << std::endl;
    } catch (std::string &e)
    {
        std::cout << e << std::endl;
    }


    std::list<int> list;
    list.push_back(11);
    list.push_back(-2);
    list.push_back(3);
    list.push_back(90);
    list.push_back(5);

    std::cout << "\nTesting with List: " << std::endl;
    for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl << std::endl;

    try
    {
        std::cout << "Using easyfind to find value 3 on a list: " << std::endl;
        std::cout << *easyfind(list, 3) << std::endl;

        std::cout << "Using easyfind to find value 42 on a list: " << std::endl;
        std::cout << *easyfind(list, 42) << std::endl;
    } catch (std::string &e)
    {
        std::cout << e << std::endl;
    }
    return 0;
}