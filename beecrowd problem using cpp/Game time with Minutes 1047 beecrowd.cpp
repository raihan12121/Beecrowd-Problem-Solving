#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,x,y,time,time1,time2;
    cin>>a>>b>>c>>d;

    time1=((a*60)+b);
    time2=((c*60)+d);
    time=time2-time1;
    if(time<=0) time+=24*60;
    {
        x=time/60;
        y=time%60;
         cout<<"O JOGO DUROU "<<x<<" HORA(S) E "<<y<<" MINUTO(S)"<<endl;
    }

   /* if(a<c &&b<d)
    {
        x=c-a;
        y=d-b;
        cout<<"O JOGO DUROU "<<x<<" HORA(S) E "<<y<<" MINUTO(S)"<<endl;
    }
else if(a>c &&b>d)
{
    x=24-(a-c);
    y=60-(b-d);
     cout<<"O JOGO DUROU "<<x<<" HORA(S) E "<<y<<" MINUTO(S)"<<endl;
}
else if(a==c&&b==d)
{
    x=24;
    y=60;
     cout<<"O JOGO DUROU "<<x<<" HORA(S) E "<<y<<" MINUTO(S)"<<endl;
}
*/

    return 0;

}

