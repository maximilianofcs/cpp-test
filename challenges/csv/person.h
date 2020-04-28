#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person
{
public:
    explicit Person(string m_name, string m_state, string m_city, string m_country, string m_age);

public:
    string toString();

private:
    string m_name;
    string m_state;
    string m_city;
    string m_country;
    string m_age;
};

#endif // PERSON_H
