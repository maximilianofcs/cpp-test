#ifndef CLASSROOM_H
#define CLASSROOM_H

#include <iostream>
#include "../common/CppTestApp.h"
#include "presencelist.h"

using namespace std;

/**
 * @brief The ClassroomApp class
 */
class ClassroomApp: public CppTestApp
{
public:
    /**
     * @brief ConsoleApp: constructor
     * @param readStreamObj: input stream like cin
     * @param outStreamObj: output stream like cout
     */
    explicit ClassroomApp(istream& readStreamObj, ostream& outStreamObj) :
        CppTestApp(readStreamObj, outStreamObj) {}

    virtual ~ClassroomApp() {}

private:
    PresenceList m_presenceList; // our presence list object

public:
    /**
     * @brief App::run run the classroom cpp-test application
     */
    virtual int run() override;

    /**
     * @brief execInsertQuery: Insert student name query execution
     */
    void execInsertQuery();

    /**
     * @brief execConsultQuery: Consult student name query execution
     */
    void execConsultQuery();
};



#endif // CLASSROOM_H
