#ifndef DIRTY_BILLS_H
#define DIRTY_BILLS_H

#include <iostream>
#include "../common/CppTestApp.h"

using namespace std;

class DirtyBillsApp: public CppTestApp
{
public:
    /**
     * @brief ConsoleApp: constructor
     * @param readStreamObj: input stream like cin
     * @param outStreamObj: output stream like cout
     */
    explicit DirtyBillsApp(istream& readStreamObj, ostream& outStreamObj) :
        CppTestApp(readStreamObj, outStreamObj) {};

    virtual ~DirtyBillsApp() {};

public:
    /**
     * @brief App::run run the dirty_bills application
     */
    virtual int run() override;
};

#endif // DIRTY_BILLS_H
