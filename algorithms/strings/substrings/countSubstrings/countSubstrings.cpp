/*
 * countSubstrings.cpp
 * Arcodeo Algorithm
 */

#include <string>
#include <vector>
using namespace std;

int countSubstrings(string word, string substring)
{
    size_t start = 0, count = 0;
    while ((start = word.find(substring, start)) != string::npos)
        ++count, ++start;
    return count;
}
