#include "LaborCenter.hpp"
#include <iostream>

void LaborCenter::addSpeciality(std::string _speciality) 
{
    Speciality newSpec(_speciality);

    m_specialities.push_back(newSpec);
}


void LaborCenter::employSpeciality(std::string _speciality)
{
    for (int i = 0; i < m_specialities.size(); i++)
    {
        if (_speciality == m_specialities[i].m_name)
        {
            m_specialities[i].employSpecialist();
            return;
        }
    }
    std::cout << _speciality << " not found in the labor center." << std::endl;
}

void LaborCenter::printSpecialities()
{
    for (int i = 0; i < m_specialities.size(); i++)
    {
        m_specialities[i].printSpecialists();
    }
    std::cout << std::endl;
}
