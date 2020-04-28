#include "classroom.h"

int ClassroomApp::run()
{
    string askMsg = "Type the of queries to read";
    string failMsg = "Not valid number. Try again";

    // Get number of queries
    int numberOfQueries = readNumOfLines(askMsg, failMsg);

    // Get each query
    askMsg = "Type:\n"
             "1 - Insert student in the presence list\n"
             "2 - Consult student in the presence list in the given position\n"
             "And number of queries.";
    failMsg = "Not valid two numbers. Try again.";
    while (numberOfQueries > 0)
    {
        // read values
        auto values = readInts(2, askMsg, failMsg);
        int typeOfQuery = values[0];
        int executionTimes = values[1];

        // exec
        while (executionTimes > 0)
        {
            switch (typeOfQuery)
            {
                case 1:
                    execInsertQuery();
                    break;
                case 2:
                    execConsultQuery();
                    break;
            }
            executionTimes--;
        }
        numberOfQueries--;
    }
	return 0;
}


void ClassroomApp::execInsertQuery()
{
    string studentName;
    getline(readStream, studentName);

    // Insert in the list
    m_presenceList.insertStudentName(studentName);
}

void ClassroomApp::execConsultQuery()
{
    int index = readInt();
    outStream << m_presenceList.getStudentName(index) << endl;
}
