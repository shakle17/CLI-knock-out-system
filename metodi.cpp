#include <iostream>
#include <cmath>
#include "header.h"
#include <cstring>

using namespace std;

istream& operator>>(istream& input, drzava& d){
 input>>d.drz;
 return input;
 }

 ostream& operator<<(ostream& os,drzava d){
 cout<<endl;
 cout<<" Ime na drzavata: "<<d.drz<<endl;
 cout<<" Broj na igraci od ovaa drzava "<<d.returni()<<endl;
 cout<<" Vkupno postignati golovi na igracite od ovaa drzava "<<d.returng()<<endl;
 }


istream& operator>>(istream& input, tim& t){
 input>>t.klub;
 return input;
 }

 ostream& operator<<(ostream& os,tim t){
  cout<<endl;
 cout<<" Ime na klubot: "<<t.klub;
 cout<<endl;
 cout<<" Broj na igraci od ovoj klub: "<<t.returni()<<endl;
 cout<<" Vkupno postignati golovi na igracite od ovoj klub: "<<t.golovvi<<endl;
 }

 istream& operator>>(istream& input, igrac& l){
 input>>l.name>>l.country>>l.club>>l.goals;
 return input;
 }

 ostream& operator<<(ostream& os,igrac l){
 cout<<endl;
 cout<<" Ime na igracot: "<<l.name;
 cout<<endl;
 cout<<" Drzava za koja nastapuva: "<<l.country;
 cout<<endl;
 cout<<" Klub za koj nastapuva: "<<l.club;
 cout<<endl;
 cout<<" Vkupno postignati golovi: "<<l.goals<<endl;
 }

  int drzava::returng(){return gollovi;}
  int drzava::returni(){return brr_igraci;}
  string drzava::getdrz(){return drz;}

  int tim::returng(){return golovvi;}
  int tim::returni(){return br_igraci;}
  string tim::gettim(){return klub;}

string igrac::getcountry(){return country;}
string igrac::getclub(){return club;}
int igrac::gols(){return goals;}

 bool operator==(igrac I,tim t)
{
    if (I.club == t.klub)
        return true;
    else
        return false;
}
bool operator==(igrac I,drzava d)
{
    if (I.country == d.drz)
    return true;
    else
        return false;
}

 int operator+(drzava& d,igrac& I)
 {
     d.gollovi=d.gollovi+I.goals;

 }
 int operator+( tim& t, igrac& I)
 {

t.golovvi=t.golovvi+I.goals;
}

 int drzava::returnii()
 {
     brr_igraci++;
 }

 int tim::returnii()
 {
     br_igraci++;
 }

void drzava::setg()
{
    gollovi=0;
    brr_igraci=0;
}

void tim::setg()
{
    golovvi=0;
    br_igraci=0;
}

void igrac::setg()
{
    goals=0;

}

