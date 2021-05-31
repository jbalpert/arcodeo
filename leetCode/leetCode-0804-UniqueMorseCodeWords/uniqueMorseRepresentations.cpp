/*
 * uniqueMorseRepresentations.cpp
 * Arcodeo Solution
 * LeetCode Problem 804
 */

#include "uniqueMorseRepresentations.h"
#include <unordered_set>
using namespace std;

int uniqueMorseRepresentations(vector<string> &words)
{
    // Either unordered_set / set works
    unordered_set<string> morseWords;
    int count = 0;
    string alphaToMorse[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    for (string &word : words)
    {
        string morseWord = "";
        for (char character : word)
            morseWord += alphaToMorse[character - 'a'];
        morseWords.insert(morseWord);
    }
    return morseWords.size();
}
