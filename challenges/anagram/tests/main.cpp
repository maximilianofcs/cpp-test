#define BOOST_TEST_MODULE palindrome_tests
#include <boost/test/included/unit_test.hpp>

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "../anagram.h"
#include "../../common/test.h"

using namespace std;


BOOST_AUTO_TEST_SUITE( palindrome_tests )

    BOOST_AUTO_TEST_CASE( test_input1 )
    {
        Test test("input1.txt", "output1.txt");
        AnagramApp testApp(test.getInputStream(), test.getResultStream());
        test.run(testApp);
    }

    BOOST_AUTO_TEST_CASE( test_input2 )
    {
        Test test("input2.txt", "output2.txt");
        AnagramApp testApp(test.getInputStream(), test.getResultStream());
        test.run(testApp);
    }
BOOST_AUTO_TEST_SUITE_END()
