#pragma once
#include <vector>
#include "Specialist.hpp"
#include "Speciality.hpp"

class LaborCenter
{
public:
    std::vector<Speciality> m_specialities;

    void addSpeciality(std::string _speciality);
    void employSpeciality(std::string _speciality);
    void printSpecialities();
};
