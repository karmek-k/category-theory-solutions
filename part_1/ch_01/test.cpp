#include "test.h"
#include "functions.h"
#include <cassert>

class AdditionFunctor
{
    int addend;
public:
    explicit AdditionFunctor(int addend)
        : addend(addend)
    {
    }

    int operator()(int x)
    {
        return x + addend;
    }
};

void test_identity()
{
    assert(identity(42) == 42);
    assert(identity(nullptr) == nullptr);
}

void test_composition()
{
    AdditionFunctor add_two(2);
    auto add_three = [](int x) { return x + 3; };

    assert(compose(add_two, add_three, 5) == 10);

    assert(compose(identity<int>, add_two, 1) == add_two(1));
    assert(compose(add_two, identity<int>, 1) == add_two(1));
}
