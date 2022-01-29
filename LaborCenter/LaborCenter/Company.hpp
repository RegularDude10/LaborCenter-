#pragma once
#include <vector>
#include <string>
#include "SpecialityNeed.hpp"

class Company
{
    public:
        std::string m_name;
        std::vector<SpecialityNeed> m_employeeNeed;
        int m_countEmployee;

        void printCompany();
        void addSpeciality(std::string _name, int _quantity);
        std::string employSpecialist(std::string _name, std::string &_isEmpty);
        Company(std::string _name) : m_name(_name){}
};
