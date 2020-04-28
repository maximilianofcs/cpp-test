#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include <boost/test/included/unit_test.hpp>
#include <boost/algorithm/string.hpp>

#include "CppTestApp.h"

using namespace std;


/**
 * @brief The Test class helper for tests cases on cpp test challenger
 */
class Test
{
public:
    explicit Test(string inputFileName, string expectedFileName)
    {
        cout << "***** Testing using: " << inputFileName << " and: " << expectedFileName << endl;

        // Open the input1 file
        inputFile.open(inputFileName, ifstream::in);
        BOOST_TEST_REQUIRE( inputFile.is_open() );

        // Open the output1 file
        expectedFile.open(expectedFileName, std::ifstream::in);
        BOOST_TEST_REQUIRE( expectedFile.is_open() );

        char c = expectedFile.get();
        while (expectedFile.good())
        {
            expected << c;
            c = expectedFile.get();
        }

        BOOST_TEST_REQUIRE( expected.str().size() > 0 );
    }

    ~Test() {}

private:
    string testCase;
    ifstream inputFile;
    ifstream expectedFile;
    ostringstream expected;
    ostringstream result;

public:
    /**
     * @brief run: run the test
     * @param testApp app to test
     */
    void run(CppTestApp& testApp)
    {
        testApp.setWithMsgs(false);
        testApp.run();
        inputFile.close();

        BOOST_TEST_REQUIRE( result.str().size() > 0 );

        cout << "** Expected:" << endl << expected.str() << endl;
        cout << "** Result:" << endl << result.str() << endl;

        // Compare each line result == expected
        auto expecteds = testApp.splitWords(result.str(), '\n');
        auto results = testApp.splitWords(result.str(), '\n');
        auto resultIt = results.begin();

        for(string& expectedLine : expecteds)
        {
            BOOST_TEST_REQUIRE( expectedLine == *resultIt );
            resultIt++;
        }
    }

    /**
     * @brief getInputStream
     * @return the input file stream used to test
     */
    ifstream& getInputStream() { return inputFile; }

    /**
     * @brief getResultStream
     * @return the result stream to check
     */
    ostringstream& getResultStream() { return result; }
};

#endif // TEST_H
