#include <iostream>

using namespace std;

int main()
{
    int m,n,i,j,max,a[100][100];
    cin >>m>>n;
    for(i=1 ; i<=m ; i++)
        for(j=1 ; j<=n ; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }
    for(i=1 ; i<=m ; i++)
    {
        max=0;
        for(j=1 ; j<=n ; j++)
            if(a[i][j]>max && a[i][j]<21)
                max=a[i][j];


        if(max==0)
            cout<<"nu exista"<<endl;
        else
            cout<<max<<endl;
    }
    return 0;
}
