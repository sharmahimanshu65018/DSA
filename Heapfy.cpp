#include <bits/stdc++.h>
using namespace std;

void fast_as_fuck()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void heapify(vector<int> &v, int i)
{
    int n = v.size();
    int j = i * 2;
    if ((j + 1) < n && v[j] < v[j + 1])
    {
        j++;
    }
    if ((j<n)&&(v[i] < v[j]))
    {
        swap(v[i], v[j]);
        heapify(v, j);
    }
}

int main()
{
    fast_as_fuck();
    vector<int> v = {0, 5, 20, 10, 30, 40, 50};
    int n=v.size()-1;
    for(int i=n/2;i>0;i--)
    {
        heapify(v,i);
    }
    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}
