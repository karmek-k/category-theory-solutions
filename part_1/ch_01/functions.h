#pragma once

/**
 * Returns its argument without changes.
 */
template <typename T>
T identity(const T& x)
{
    return x;
}

/**
 * Returns the composition of `f` and `g`.
 */
template <typename T, typename F, typename G>
auto compose(F f, G g)
{
    return [f, g](const T& x) { return f(g(x)); };
}
