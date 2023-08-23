#include<bits/stdc++.h>

using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(a<(b+c)&&b<(a+c)&&c<(a+b))
    {
        cout<<fixed;

       cout<<setprecision(1)<<"Perimetro = "<<a+b+c<<endl;
    }

    else
    {
        double A=0.5*(a+b)*c;
        cout<<fixed;
        cout<<setprecision(1)<<"Area = "<<A<<endl;
    }
    return 0;
}
