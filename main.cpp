#include <iostream>
#include <cmath>
#include "metodi.cpp"
#include <cstring>
#define MAX 30
using namespace std;

int main()
{
    drzava d[MAX];
    tim t[MAX];
    igrac l[MAX];
    int n,i,m,k,s,q,w;
    void setg();
    cout<<"        ***********    STATISTIKA-FUDBAL ********       ";
    cout<<endl;
    cout<<endl;
    cout<<"Vnesi broj na drzavi";
    cout<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        d[i].setg();
    }
    cout<<endl;
    cout<<endl;
    cout<<"Vnesi drzava :";
    cout<<endl;
    for(i=0;i<n;i++)
    {


        cout<<i+1<<". ";
        cin>>d[i];
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<"Vnesi broj na ekipi";
    cout<<endl;
    cin>>m;
     for(i=0;i<m;i++)
    {
        t[i].setg();
    }
    cout<<endl;
    cout<<"Vnesi ekipa :";
    cout<<endl;
    for(int i=0;i<m;i++)
    {


        cout<<i+1<<". ";
        cin>>t[i];
        cout<<endl;
    }
cout<<endl;
cout<<endl;
cout<<"Vnesi broj na igraci";
cout<<endl;
cin>>k;
cout<<endl;
for(i=0;i<k;i++)
{
l[i].setg();
}

cout<<"Vnesi ime,drzava,tim,postignati golovi na ";
cout<<endl;
for(i=0;i<k;i++)
{

    cout<<i+1<<". igrac: ";
    cin>>l[i];
    cout<<endl;
}



cout<<endl;
cout<<endl;

for (i=0;i<n;i++) // dokolku igraco e od taa drzava (se zgolemuva brojo na igraci na taa drzava , i se zgolemuvaat vkupnite golovi od taa drzava)
{
for (int j=0;j<k;j++)
{
if (l[j] == d[i])
{
d[i].returnii();
d[i]+l[j];
}

}
}

for (i=0;i<m;i++) // dokolku igraco e od taj klub (se zgolemuva brojo na igraci na taa drzava , i se zgolemuvaat vkupnite golovi od taj klub)
{
for (int j=0;j<k;j++)
{
if (l[j] == t[i])
{
t[i].returnii();
t[i]+l[j];
}

}
}
cout<<endl;
cout<<endl;
cout<<"************************************************************************";
cout<<endl;
cout<<endl;
for(i=0;i<20;i++)
{


cout<<"Otpecati statistika za "<<endl;
cout<<" drzava<1>"<<endl;
cout<<" tim<2>"<<endl;
cout<<" igrac<3>"<<endl;


int o;
cin>>o;
cout<<endl;
if(o==1)
{
    cout<<"Vnesi cifra od 1 do "<<n<<" , za koja drzava da se ispecati statistika";
    cin>>s;
    cout<<d[s-1];
}
 else if(o==2)
{
    cout<<"Vnesi cifra od 1 do "<<m<<" , za koj tim da se ispecati statistika";
    cin>>q;
    cout<<t[q-1];
}
else if(o==3)
{
    cout<<"Vnesi cifra od 1 do "<<k<<" za koj igrac da se ispecati statistika";
    cin>>w;
    cout<<l[w-1];
}
cout<<endl;
}

return 0;
}
