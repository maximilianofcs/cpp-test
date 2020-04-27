#ifndef STAIRWAYTOHEAVEN_H
#define STAIRWAYTOHEAVEN_H

#include <iostream>
#include "../common/CppTestApp.h"


using namespace std;

/**
 * @brief The StairwayToHeavenApp class
 * Read an integer from the standard input and print a staircase.
 * Example:
 * Sample input:
 * 3
 * Sample output:
 *   #
 *  ##
 * ###
 */
class StairwayToHeavenApp: public CppTestApp
{
public:
    /**
     * @brief ConsoleApp: constructor
     * @param readStreamObj: input stream like cin
     * @param outStreamObj: output stream like cout
     */
    explicit StairwayToHeavenApp(istream& readStreamObj, ostream& outStreamObj) :
        CppTestApp(readStreamObj, outStreamObj) {};

    virtual ~StairwayToHeavenApp() {};

public:

    /**
     * @brief App::run run teh stairway_to_heavem application
     */
    virtual int run() override;
};

#endif // STAIRWAYTOHEAVEN_H
