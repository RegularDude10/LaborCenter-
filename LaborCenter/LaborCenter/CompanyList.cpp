#include "Company.hpp"
#include "CompanyList.hpp"
#include <iostream>

void CompanyList::addCompany(std::string _company)
{
    Company newComp(_company);

    m_companies.push_back(newComp);
}

void CompanyList::employSpecialist(std::string _speciality)
{
    for(int i = 0; i < m_companies.size(); i++)
    {
        std::string isEmpty;

        if (m_companies[i].employSpecialist(_speciality, isEmpty) == "Hired")
        {
            if (isEmpty == "Yes")
            {
                std::cout << "Company " << m_companies[i].m_name << " is full." << std::endl;
                m_companies.erase(m_companies.begin() + i);
            }
            break;
        }
    }
}

void CompanyList::printAll()
{
    for (int i = 0; i < m_companies.size(); i++)
    {
        m_companies[i].printCompany();
    }
    if (m_companies.size() == 0)
    {
        std::cout << "No companies in the list." << std::endl;
    }
    std::cout << std::endl;
}
