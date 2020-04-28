#define BOOST_TEST_MODULE csv_tests
#include <boost/test/included/unit_test.hpp>

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "../csv.h"
#include "../../common/test.h"

using namespace std;


BOOST_AUTO_TEST_SUITE( csv_tests )

    BOOST_AUTO_TEST_CASE( test_input1 )
    {
        Test test("input1.txt", "output1.txt");
        CsvApp testApp(test.getInputStream(), test.getResultStream());
        test.run(testApp);
    }

BOOST_AUTO_TEST_SUITE_END()
