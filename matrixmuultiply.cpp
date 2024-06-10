#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<vector<int>> multiply(vector<vector<int>> &arr1, vector<vector<int>> &arr2, int r1, int c1, int r2, int c2)
{
    // res mat
    vector<vector<int>> res(r1, vector<int>(c2, 0));

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    return res;
}

int main()
{
    int r1, c1, r2, c2;

    cout << "num of rows for mat 1: ";

    cin >> r1;

    cout << "num of cols for mat 1: ";

    cin >> c1;

    vector<vector<int>> arr1(r1, vector<int>(c1));

    cout << " elements of matrix 1: " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "number of rows for matrix 2: ";

    cin >> r2;

    cout << "number of cols for matrix 2: ";

    cin >> c2;

    // checking agar first ka cols == sec ka rows
    if (c1 != r2)
    {
        cout << "not possible" << endl;
        return 0;
    }

    vector<vector<int>> arr2(r2, vector<int>(c2));
    cout << "elements of matrix 2: " << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> arr2[i][j];
        }
    }

    vector<vector<int>> result = multiply(arr1, arr2, r1, c1, r2, c2);

    cout << "res matrix: " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
