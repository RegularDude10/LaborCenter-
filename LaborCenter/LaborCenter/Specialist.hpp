#pragma once
#include <string>

class Specialist
{
public:
    std::string m_name;
    std::string m_surName;

    Specialist( std::string _name, std::string _surName) : m_name(_name), m_surName(_surName) {}
};
