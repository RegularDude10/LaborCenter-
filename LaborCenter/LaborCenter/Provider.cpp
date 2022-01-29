#include "Provider.hpp"
#include "utility.hpp"

void Provider::addSpeciality()
{
    std::cout << std::endl << "Enter speciality name: " << std::endl;
    
    std::string specName;
    std::cin >> specName;

    m_labor.addSpeciality(specName);

    std::cout << specName << " has been added to the list of specialities." << std::endl;
}

void Provider::addSpecialist()
{
    std::cout << std::endl << "Enter specialist name: " << std::endl;

    std::string name;
    std::cin >> name;

    std::cout << "Enter specialist surname: " << std::endl;

    std::string surName;
    std::cin >> surName;

    int intSpecNum;

    while(true)
    {
        std::cout << "Choose a speciality: " << std::endl;

        for (int i = 0; i < m_labor.m_specialities.size(); i++)
        {
            std::cout << i + 1 << ". " << m_labor.m_specialities[i].m_name << "." << std::endl;
        }

        intSpecNum = validStrToInt();

        if ( intSpecNum > 0 && intSpecNum <= m_labor.m_specialities.size())
        {
            m_labor.m_specialities[intSpecNum - 1].addSpecialist(name, surName);
            break;
        }
    }

    std::cout << std::endl << name << ", " << surName << " has been added to the list of " <<  m_labor.m_specialities[intSpecNum - 1].m_name << " speciality." << std::endl;
}

void Provider::printSpecialist()
{
    std::cout << std::endl;
    m_labor.printSpecialities();
    std::cout << std::endl;
}

void Provider::addCompany()
{
    std::cout << std::endl << "Enter the name of company: " << std::endl;

    std::string name;
    std::cin >> name;

    m_companyList.addCompany(name);

    std::cout << std::endl << name << " has been added to the list of companies." << std::endl;
}

void Provider::addSpecialityToCompany()
{
    std::cout << std::endl << "Enter speciality to add to a company: " << std::endl;

    std::string name;
    std::cin >> name;

    int intQuant;

    while(true)
    {
        std::cout << "Enter quantity of specialists needed: " << std::endl;

        intQuant = validStrToInt();

        if (intQuant > 0 && intQuant << 10)
        {
            break;
        }
    }

    int compNum;

    while(true)
    {
        std::cout << "Choose a company: " << std::endl;

        for (int i = 0; i < m_companyList.m_companies.size(); i++)
        {
            std::cout << i + 1 << ". " << m_companyList.m_companies[i].m_name << "." << std::endl;
        }

        compNum = validStrToInt();

        if ( compNum > 0 && compNum <= m_companyList.m_companies.size())
        {
            m_companyList.m_companies[compNum - 1].addSpeciality(name, intQuant);
            break;
        }
    }
    std::cout << std::endl << name << " speciality, " << intQuant << " emloyees needed. In " <<  m_companyList.m_companies[compNum - 1].m_name << " company" << std::endl;
}

void Provider::printCompanies()
{
    std::cout << std::endl;
    m_companyList.printAll();
    std::cout << std::endl;
}

void Provider::employSpecialist()
{
    int compNum;

    while(true)
    {
        std::cout << "Choose a company: " << std::endl;

        for (int i = 0; i < m_companyList.m_companies.size(); i++)
        {
            std::cout << i + 1 << ". " << m_companyList.m_companies[i].m_name << "." << std::endl;
        }

        compNum = validStrToInt();

        if ( compNum > 0 && compNum <= m_companyList.m_companies.size())
        {
            Company tempComp = m_companyList.m_companies[compNum - 1];
            std::cout << std::endl;
            tempComp.printCompany();
            std::cout << std::endl;
            break;
        }
    }
    int empNum;

    while (true)
    {
        std::cout << "Type a number of speciality from the list to hire: " << std::endl;
        empNum = validStrToInt();
        
        if ( empNum > 0 && empNum <= m_companyList.m_companies[empNum - 1].m_employeeNeed[empNum - 1].m_employNeed)
        {
            std::string speciastNeed = m_companyList.m_companies[empNum - 1].m_employeeNeed[empNum - 1].m_name;
            m_labor.employSpeciality(speciastNeed);
            m_companyList.employSpecialist(speciastNeed);
            std::cout << std::endl;
            break;
        }
    }
    
}

void Provider::manageOptions(int _option)
{
    switch (_option)
    {
        case 1:
            addSpeciality();
            break;
        case 2:
            addSpecialist();
            break;
        case 3:
            printSpecialist();
            break;
        case 4:
            addCompany();
            break;
        case 5:
            addSpecialityToCompany();
            break;
        case 6:
            printCompanies();
            break;
        case 7:
            employSpecialist();
            break;
    }
    
}
