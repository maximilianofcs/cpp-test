#ifndef PRESENCELIST_H
#define PRESENCELIST_H

#include <string>
#include <map>

using namespace std;

/**
 * @brief The PresenceList class
 */
class PresenceList
{
public:
    PresenceList() {}

    ~PresenceList() {}

private:
    map<string, int> m_alphMap; // alphabetically sorted list

public:
    /**
     * @brief insert a student name in the list
     * @param studentName: name of the student to insert
     */
    void insertStudentName(string studentName);

    /**
     * @brief getStudentName
     * @param index position in the list
     * @return the student name at position
     */
    string getStudentName(int index);
};

#endif // PRESENCELIST_H
