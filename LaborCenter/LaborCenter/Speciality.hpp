#pragma once
#include <vector>
#include "Specialist.hpp"

class Speciality
{
    public:
        std::vector<Specialist> m_specialists;
        std::string m_name;
        
        void addSpecialist(std::string _name, std::string _surName);
        int findPlace(std::string _name);
        void employSpecialist();
        void printSpecialists();

    Speciality(std::string _name) : m_name(_name){}
         
        
};
