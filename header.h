#include <iostream>
#include <cmath>
using namespace std;


class igrac;
class tim;
class drzava;
class igrac{
string name,country, club;
int goals;

public:

friend istream& operator>>(istream& input, igrac& l);
friend ostream& operator<<(ostream&,igrac);
friend bool operator==(igrac I,tim t);
friend bool operator==(igrac I,drzava d);
friend int operator+(drzava&,igrac&);
friend int operator+(tim&,igrac&);
virtual void setg();


string getcountry();
string getclub();
int gols();

};


class drzava{

    string drz;
    int gollovi,brr_igraci;


public:

friend istream& operator>>(istream& input, drzava& d);
friend ostream& operator<<(ostream&,drzava);
string getdrz();
virtual void setg();
friend bool operator==(igrac I,drzava d);
friend int operator+(drzava&,igrac&);

virtual int returnii();
virtual int returng();
virtual int returni();
};






class tim{

    string klub;
    int golovvi,br_igraci;

public:

friend istream& operator>>(istream& input, tim& d);
friend ostream& operator<<(ostream&,tim);
string gettim();
virtual void setg();
friend bool operator==(igrac I,tim t);
friend int operator+(tim&, igrac&);

virtual int returng();
virtual int returni();
virtual int returnii();

};








