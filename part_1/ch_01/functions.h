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
 * Returns `f(g(arg))`.
 */
template <typename F, typename G, typename T>
T compose(F& f, G& g, const T& arg)
{
    return f(g(arg));
}
