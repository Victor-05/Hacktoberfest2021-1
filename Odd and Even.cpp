#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,v[1001],odd[1001],even[1001],o,e,i;
    cout<<"Number of elements:";
    cin>>n;
    cout<<endl<<"Elements:";

    o=0;
    e=0;

    for(i=1;i<=n;i++)
    {
        cin>>v[i];

        if(v[i]%2==0)
            {
                even[e]=v[i];
                e++;
            }

        if(v[i]%2==1)
        {
            odd[o]=v[i];
            o++;
        }
    }
    cout<<endl<<"Odd numbers:";
    for(i=0;i<o;i++)
        cout<<odd[i]<<" ";
    cout<<endl<<"Even numbers:";
    for(i=0;i<e;i++)
        cout<<even[i]<<" ";
    return 0;
}
