#include<iostream>
#include<vector>
using namespace std;
int getSum(vector<int> &v)
{
    int sum=0;
    for(int i=0;i<v.size();i++)
    sum+=v[i];
    return sum;
}
int getMin(vector<int> &v)
{
    int minvLAUE=100000000;
    for(int i=0;i<v.size();i++)
    {
        minvLAUE = min(v[i], minvLAUE);
    }
    return minvLAUE;
}
int main()
{

vector<int> v;
    for(int i=1;i<11;i++)
    v.push_back(i);
    cout<<getSum(v)<<endl;
    cout<<getMin(v)<<endl;
}