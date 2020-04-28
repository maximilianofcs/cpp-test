#ifndef CSV_H
#define CSV_H

#include "../common/CppTestApp.h"
#include "person.h"

using namespace std;


class CsvApp: public CppTestApp
{
public:
    /**
     * @brief ConsoleApp: constructor
     * @param readStreamObj: input stream like cin
     * @param outStreamObj: output stream like cout
     */
    explicit CsvApp(istream& readStreamObj, ostream& outStreamObj) :
        CppTestApp(readStreamObj, outStreamObj) {}

    virtual ~CsvApp() {}

public:
    /**
     * @brief App::run run the csv cpp-test application
     */
    virtual int run() override;

public:
    enum Field {name, state, city, country, age};
};


#endif // CSV_H
