#define BOOST_TEST_MODULE StairwayToHeaven_tests
#include <boost/test/included/unit_test.hpp>

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "../StairwayToHeavenApp.h"
#include "../../common/test.h"

using namespace std;


BOOST_AUTO_TEST_SUITE( StairwayToHeaven_tests )

    BOOST_AUTO_TEST_CASE( test_input1 )
    {
        Test test("input1.txt", "output1.txt");
        StairwayToHeavenApp testApp(test.getInputStream(), test.getResultStream());
        test.run(testApp);
    }

    BOOST_AUTO_TEST_CASE( test_input2 )
    {
        Test test("input2.txt", "output2.txt");
        StairwayToHeavenApp testApp(test.getInputStream(), test.getResultStream());
        test.run(testApp);
    }

    BOOST_AUTO_TEST_CASE( test_input3 )
    {
        Test test("input3.txt", "output3.txt");
        StairwayToHeavenApp testApp(test.getInputStream(), test.getResultStream());
        test.run(testApp);
    }

    BOOST_AUTO_TEST_CASE( test_input4 )
    {
        Test test("input4.txt", "output4.txt");
        StairwayToHeavenApp testApp(test.getInputStream(), test.getResultStream());
        test.run(testApp);
    }

    BOOST_AUTO_TEST_CASE( test_input5 )
    {
        Test test("input5.txt", "output5.txt");
        StairwayToHeavenApp testApp(test.getInputStream(), test.getResultStream());
        test.run(testApp);
    }

    BOOST_AUTO_TEST_CASE( test_input6 )
    {
        Test test("input6.txt", "output6.txt");
        StairwayToHeavenApp testApp(test.getInputStream(), test.getResultStream());
        test.run(testApp);
    }

BOOST_AUTO_TEST_SUITE_END()
