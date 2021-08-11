/*
 * isValidSudoku.cpp
 * Arcodeo Solution
 * LeetCode Problem 36
 */

#include "isValidSudoku.h"
using namespace std;

bool isValidSudoku(vector<vector<char>> &board)
{
    vector<vector<int>> rows(9, vector<int>(9));
    vector<vector<int>> cols(9, vector<int>(9));
    vector<vector<vector<int>>> squares(3, vector<vector<int>>(3, vector<int>(9)));
    for (int i = 0; i < board.size(); ++i)
    {
        for (int j = 0; j < board.size(); ++j)
        {
            if (board[i][j] == '.')
                continue;
            int number = board[i][j] - '1';
            if (rows[i][number]++)
                return false;
            if (cols[j][number]++)
                return false;
            if (squares[i / 3][j / 3][number]++)
                return false;
        }
    }
    return true;
}

// FIRST ATTEMPT :,)

// bool checkHorizontal(const vector<vector<char>> &board)
// {
//     for (const auto &row : board)
//     {
//         vector<int> nums(9);
//         for (auto val : row)
//         {
//             if (val == '.')
//                 continue;
//             nums[val - '1']++;
//         }
//         for (auto val : nums)
//             if (val > 1)
//                 return false;
//     }
//     cout << "checkHoriz done\n";
//     return true;
// }

// bool checkVertical(const vector<vector<char>> &board)
// {
//     for (size_t i = 0; i < board.size(); ++i)
//     {
//         vector<int> nums(9);
//         for (size_t j = 0; j < board.size(); ++j)
//         {
//             if (board[j][i] == '.')
//                 continue;
//             nums[board[j][i] - '1']++;
//         }
//         for (auto val : nums)
//             if (val > 1)
//                 return false;
//     }
//     cout << "checkVert done\n";
//     return true;
// }

// bool checkSquares(const vector<vector<char>> &board)
// {
//     for (size_t i = 0; i < 9; i += 3)
//     { // horiz start 0,3,6
//         for (size_t j = 0; j < 9; j += 3)
//         { // vert start 0,3,6
//             vector<int> nums(9);
//             for (int k = i; k < i + 3; ++k)
//             { // horiz start -> start + 3
//                 for (int l = j; l < j + 3; ++l)
//                 {
//                     if (board[k][l] == '.')
//                         continue;
//                     nums[board[k][l] - '1']++;
//                 }
//             }
//             for (auto val : nums)
//                 if (val > 1)
//                     return false;
//         }
//     }
//     cout << "checkSquares done\n";
//     return true;
// }

// bool isValidSudoku(vector<vector<char>> &board)
// {
//     return checkVertical(board) && checkHorizontal(board) && checkSquares(board);
// }