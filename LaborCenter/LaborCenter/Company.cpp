#include "Company.hpp"
#include <iostream>

void Company::printCompany()
{
    std::cout << "Company " << m_name << ", speciality and quantity needed: " << std::endl;
    
    for(int i = 0; i < m_employeeNeed.size(); i++)
    {
        std::cout << "Speciality number " << i + 1 << ": " << m_employeeNeed[i].m_name << ". Needs: " << m_employeeNeed[i].m_employNeed << " specialists." << std::endl;
    }
}

void Company::addSpeciality(std::string _name, int _quantity)
{
    SpecialityNeed newScpec(_name, _quantity);

    m_countEmployee += _quantity;

    m_employeeNeed.push_back(newScpec);
}

std::string Company::employSpecialist(std::string _name, std::string &_isEmpty)
{
    std::string ret;

    for (int i = 0; i < m_employeeNeed.size(); i++)
    {
        if (m_employeeNeed[i].m_name == _name)
        {
            std::cout << "Company: " << m_name << " hired " << "a " <<_name << "." <<std::endl;

            m_employeeNeed[i].m_employNeed--;
            m_countEmployee--;
            
            ret = "Hired";

            if (m_employeeNeed[i].m_employNeed == 0)
            {
                m_employeeNeed.erase(m_employeeNeed.begin() + i);
                _isEmpty = "Yes";
            }
        }
    }
    return ret;
}
