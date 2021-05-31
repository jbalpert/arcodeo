/*
 * DecodeXORArray.cpp
 * Arcodeo Solution
 * LeetCode Problem 1720
 */

#include "DecodeXORArray.h"
using namespace std;

vector<int> decode(vector<int> &encoded, int first)
{
    // 1 XOR 0 | 0 XOR 2 | 2 XOR 1||
    //   001   |   000   |   010   |
    //   000   |   010   |   001   |
    // --------------------------- |
    //   001   |   010   |   011   |
    // --------------------------- |
    //    1    |    2    |    3    |

    // 1 XOR 1 | 0 XOR 2 | 2 XOR 3||
    //   001   |   000   |   010   |
    //   001   |   010   |   011   |
    // --------------------------- |
    //   000   |   010   |   011   |
    // --------------------------- |
    //    0    |    2    |    1    |

    vector<int> res(encoded.size() + 1);
    res[0] = first;
    for (size_t i = 0; i < encoded.size(); ++i)
    {
        res[i + 1] = encoded[i] ^ res[i];
    }
    return res;
}
