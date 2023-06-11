#include <bits/stdc++.h>

void help(int i, vector<int> &arr, int n, vector<int> &subset, vector<vector<int>> &powerset)

{

    if (i == n)

    {

        powerset.push_back(subset);
    }

    else

    {

        subset.push_back(arr[i]);

        help(i + 1, arr, n, subset, powerset);

        subset.pop_back();

        while (i + 1 < arr.size() && arr[i] == arr[i + 1])
            i++;

        help(i + 1, arr, n, subset, powerset);
    }
}

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)

{

    sort(arr.begin(), arr.end());

    vector<vector<int>> powerset;

    vector<int> subset;

    help(0, arr, n, subset, powerset);

    sort(powerset.begin(), powerset.end());

    return powerset;
}