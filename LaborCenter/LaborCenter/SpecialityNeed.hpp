#pragma once

class SpecialityNeed
{
    public:
        int m_employNeed;
        std::string m_name;

        SpecialityNeed(std::string _name, int _number) : m_name(_name), m_employNeed(_number) {}
};
