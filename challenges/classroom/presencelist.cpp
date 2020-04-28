#include "presencelist.h"

void PresenceList::insertStudentName(string studentName)
{
    int newIndex = static_cast<int>(m_alphMap.size()) + 1;
    m_alphMap[studentName] = newIndex;
}

string PresenceList::getStudentName(int index)
{
    int limit = static_cast<int>(m_alphMap.size());
    if ( (index > limit) || (index < 1) )
        return "";

    // interact in the map index times
    auto indexIt = m_alphMap.begin();
    while ( (index > 1) && (indexIt != m_alphMap.end()) )
    {
        indexIt++;
        index--;
    }
    if(indexIt != m_alphMap.end())
        return indexIt->first;

    return "";
}
