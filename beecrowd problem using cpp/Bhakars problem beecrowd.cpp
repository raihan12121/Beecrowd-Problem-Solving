#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
double a,b,c,R1,R2,t;
cin>>a>>b>>c;
if(((b*b)-4*a*c)<0||a==0)
    {
       cout<<"Impossivel calcular"<<endl;

    }
    else{
       t=sqrt((b*b)-4*a*c);
        R1=((-b+t)/(2*a));
        R2=((-b-t)/(2*a));

        cout<<setprecision(4);
        cout<<"R1 = "<<R1<<endl;
        cout<<setprecision(5)<<"R2 = "<<R2<<endl;
    }
  return 0;
}

