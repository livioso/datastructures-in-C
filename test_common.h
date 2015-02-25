#include <stdio.h>

// Prints simply a pretty output
// when running a unit test function
#define runTestCase(testingFunction) printf(" >>> %s \n", #testingFunction); testingFunction(); printf(" <<< Passed :-) \n");
