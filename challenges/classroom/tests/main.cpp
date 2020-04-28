#define BOOST_TEST_MODULE classroom_tests
#include <boost/test/included/unit_test.hpp>

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "../classroom.h"
#include "../../common/test.h"

using namespace std;


BOOST_AUTO_TEST_SUITE( classroom_tests )

    BOOST_AUTO_TEST_CASE( test_input1 )
    {
        Test test("input1.txt", "output1.txt");
        ClassroomApp testApp(test.getInputStream(), test.getResultStream());
        test.run(testApp);
    }

    BOOST_AUTO_TEST_CASE( test_input2 )
    {
        Test test("input2.txt", "output2.txt");
        ClassroomApp testApp(test.getInputStream(), test.getResultStream());
        test.run(testApp);
    }

    BOOST_AUTO_TEST_CASE( test_input3 )
    {
        Test test("input3.txt", "output3.txt");
        ClassroomApp testApp(test.getInputStream(), test.getResultStream());
        test.run(testApp);
    }

BOOST_AUTO_TEST_SUITE_END()
