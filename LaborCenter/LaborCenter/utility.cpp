#include "utility.hpp"

void printOption()
{
    std::cout << "1. Add a speciality." << std::endl;
    std::cout << "2. Add a specialist." << std::endl;
    std::cout << "3. Print all specialists." << std::endl;
    std::cout << "4. Add a company." << std::endl;
    std::cout << "5. Add a speciality to a company." << std::endl;
    std::cout << "6. Print all the companies." << std::endl;
    std::cout << "7. Employ a specialist." << std::endl;
    std::cout << "q - to quit the program." << std::endl;
}

int validStrToInt()
{
    int ret = -1;

    std::string str;
    std::cin >> str;

    try
    {
        ret = std::stoi(str);
    }
    catch (std::invalid_argument)
    {
        std::cout << "Invalid argument." << std::endl;
        ret = -1;
    }
    return ret;
}
