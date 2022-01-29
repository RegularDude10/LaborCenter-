#pragma once
#include <vector>
#include <string>
#include "Company.hpp"
#include "Speciality.hpp"

class CompanyList
{
    public:
        std::vector<Company> m_companies;
    
        void addCompany(std::string _company);
        void printAll();
        void employSpecialist(std::string _speciality);
};
