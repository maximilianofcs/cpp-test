#include "person.h"
#include <sstream>


Person::Person(string name, string state, string city, string country, string age)
{
    m_name = name;
    m_state = state;
    m_city = city;
    m_country = country;
    m_age = age;
}

string Person::toString()
{
    ostringstream stringStream;
    stringStream << m_name
                 << " is "
                 << m_age
                 << " years old and lives in "
                 << m_city
                 << ", "
                 << m_state
                 << ".";
    return stringStream.str();
}
