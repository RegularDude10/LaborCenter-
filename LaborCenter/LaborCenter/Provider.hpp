#pragma once
#include "LaborCenter.hpp"
#include "CompanyList.hpp"

#include <iostream>


class Provider
{
private:
    LaborCenter m_labor;
    CompanyList m_companyList;
public:

    void manageOptions(int _option);
    void addSpeciality();
    void addSpecialist();
    void printSpecialist();
    void addCompany();
    void addSpecialityToCompany();
    void printCompanies();
    void employSpecialist();
};
