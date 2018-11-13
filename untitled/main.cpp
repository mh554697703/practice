#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int a[4]={3,1,2,4};

    int len=sizeof (a)/sizeof (a[0]);
    cout<<len<<endl;
    int sum=0;
    vector<int> subArr;
    for(int i=1;i<=len;i++)
    {
        for(int j=0;j<=len-i;j++)
        {
            for(int k=j;k<len-i;k++)
            {
                subArr.push_back(a[k]);
                sort(subArr.begin(),subArr.end());
                sum+=subArr[0];
                subArr.clear();
            }
        }
    }
    cout<<sum;
    return 0;
}
