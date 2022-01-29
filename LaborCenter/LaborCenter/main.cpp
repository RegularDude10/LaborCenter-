#include <iostream>
#include "utility.hpp"
#include "Provider.hpp"

int main()
{
    Provider provider;
    std::cout << "Welcome to Labor Center! Choose an option:" << std::endl;
    
    while (true)
    {
        printOption();

        std::string option;
        std::cin >> option;
        
        int intOption = 0;

        if (option == "q")
        {
            std::cout << "Good bye!" << std::endl;
            return 0;
        }
        try
        {
            intOption = std::stoi(option);
        }

        catch (std::invalid_argument)
        {
            std::cout << "Invalid argument." << std::endl;
        }
        
        if ( intOption > 0 && intOption < 8)
        {
            provider.manageOptions(intOption);
        }

        std::cout << std::endl;
    }

    return 0;
}

  
