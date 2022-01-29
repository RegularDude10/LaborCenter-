#include "Speciality.hpp"
#include <algorithm>
#include <iostream>

void Speciality::addSpecialist(std::string _name, std::string _surName)
{
    Specialist newSpecialist(_name, _surName);
    int index = findPlace(_name);

    m_specialists.insert(m_specialists.begin() + index, newSpecialist);
}

int Speciality::findPlace(std::string _name)
{
    int ret = 0;

    for (int i = 0; i < m_specialists.size(); i++)
    {
        Specialist curent = m_specialists[i];
        std::string name = curent.m_name;

        unsigned long int end = name.size() > _name.size() ? _name.size() : name.size();

        for (int j = 0; j < end; j++)
        {
            if (_name[j] > name[j])
            {
                break;
            }
            if (_name[j] < name[j])
            {
                return ret;
            }
        }
        ret++;
    }
    return ret;
}

void Speciality::employSpecialist(){
    m_specialists.pop_back();
}

void Speciality::printSpecialists()
{
    std::cout << " Speciality " << m_name << " has this specialists: " << std::endl;

    for ( int i = 0; i < m_specialists.size(); i++)
    {
        std::cout << m_specialists[i].m_name << ", " << m_specialists[i].m_surName << "." << std::endl;
    }
}
