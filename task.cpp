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
int main()
{

vector<int> v;
    for(int i=1;i<11;i++)
    v.push_back(i);
    cout<<getSum(v)<<endl;
}