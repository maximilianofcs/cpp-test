#ifndef ANAGRAM_H
#define ANAGRAM_H

#include "../common/CppTestApp.h"

using namespace std;


class AnagramApp: public CppTestApp
{
public:
    /**
     * @brief AnagramApp: constructor
     * @param readStreamObj: input stream like cin
     * @param outStreamObj: output stream like cout
     */
    explicit AnagramApp(istream& readStreamObj, ostream& outStreamObj) :
        CppTestApp(readStreamObj, outStreamObj) {}

    virtual ~AnagramApp() {}

public:
    /**
     * @brief App::run run teh stairway_to_heavem application
     */
    virtual int run() override;

protected:
    /**
     * @brief isAnAnagram
     * @param firstWord
     * @param secondWord
     * @return true if the two words are an anagram
     */
    bool isAnAnagram(string firstWord, string secondWord);
};




#endif // ANAGRAM_H
