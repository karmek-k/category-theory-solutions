#include <iostream>
#include "test.h"

int main()
{
    std::cout << "Running test_identity...\n";
    test_identity();

    std::cout << "Running test_composition...\n";
    test_composition();

    std::cout << "All tests pass\n";
}
