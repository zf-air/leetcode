#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> vvi;
bool ok(vector<int> vi, int k, int j)
{
    for (int i = 0; i < vi.size(); i++)
    {
        if (vi[i] == j || i == k || abs(vi[i] - j) == abs(k - i))
            return false;
    }
    return true;
}
void find(vector<int> vi, int k, int n)
{
    if (k == n)
    {
        vvi.push_back(vi);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (ok(vi, k, i))
        {
            vi[k] = i;
            find(vi, k + 1, n);
            vi[k] = -1;
        }
    }
    return;
}
int main()
{
    int n=4;
    vector<string> vs;
    vector<int> vi(n);
    fill(begin(vi), end(vi), -1);
    vector<vector<string>> vvs;
    find(vi, 0, n);
    // for (int i = 0; i < vvi.size(); i++)
    // {
    //     for (int j = 0; j < vvi[i].size(); j++)
    //     {

    //         string s;
    //         for (int k = 0; k < n; k++)
    //         {
    //             if (k != vvi[i][j])
    //                 s += ".";
    //             else
    //                 s += "Q";
    //         }
    //         vs.push_back(s);
    //     }
    //     vvs.push_back(vs);
    //     vs.clear();
    // }
}