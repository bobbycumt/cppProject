#include <bits/stdc++.h>
using namespace std;

vector<int> a;
int main()
{
    int n, m,c=-1;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        a.push_back(i);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            c++;
            if(c>a.size()-1)
            {
                c=0;
            }
        }
        cout<<*(a.begin()+c)<<' ';
        a.erase(a.begin()+c);
        c--;//刚进循环时直接加1，此时需要回退1
    }
    return 0;
}
