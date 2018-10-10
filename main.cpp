#include <iostream>
#include <string>

using namespace std;
string hourtime(string  alltime);

string time;

int main()
{/*
    string ahmed  ;
    string add="    ";
    string ali;
    cin >>ahmed;
    cin >>ali;
    add [0]=ahmed[0];
    add [1]=ahmed[1];
    add [2]=ali[0];
    add [3]='k';
    cout<<add;
*/

    string hours="  ",hidehours ;
    string zero="0";
    string mint ="  ",hidemin;
    string hom="     hours";
    cout <<"enter the time as HH:MM:PM/AM"<<endl;
   for(int i=0;i<1000;i++)
    {
        cout<<"enter the hour first in one or two digits from 1 to 12  "<<endl;
        cin >>hidehours;
        if ( (hidehours=="1" )|| (hidehours=="2")  || (hidehours=="3") || (hours=="4") || (hidehours=="5") || (hidehours=="6")  || (hidehours=="7")  || (hidehours=="8")
             || (hidehours=="9")  || (hidehours=="01")  || (hidehours=="02")  || (hidehours=="03")  || (hidehours=="04")  || (hidehours=="05")  || (hidehours=="06")
            || (hidehours=="07")  || (hidehours=="08")  || (hidehours=="09")  || (hidehours=="10")  || (hidehours=="11") || (hidehours=="12")   )
        {break;}
        else
            cout<<"enter hours correct "<<endl;;


    }
     if ( (hidehours=="1" )|| (hidehours=="2")  || (hidehours=="3") || (hours=="4") || (hidehours=="5") || (hidehours=="6")  || (hidehours=="7")  || (hidehours=="8")
             || (hidehours=="9"))
             {
                 hours[0]=zero[0];
                 hours[1]=hidehours[0];
             }
      else
                hours=hidehours;

     for(int i=0;i<1000;i++)
    {
        cout<<"enter the min from 00 to 60 in two digit as example 01 for min or 10 for 10 min "<<endl;
        cin >>hidemin;
        if ( (hidemin=="00" ) || (hidemin=="01")  || (hidemin=="02")  || (hidemin=="03")  || (hidemin=="04")  || (hidemin=="05")  || (hidemin=="06")
               || (hidemin=="07")  || (hidemin=="08")  || (hidemin=="09")  || (hidemin=="10")
               || (hidemin=="11") || (hidemin=="12")  || (hidemin=="13") || (hidemin=="14") || (hidemin=="15") || (hidemin=="16") || (hidemin=="17")
               || (hidemin=="18") || (hidemin=="19") || (hidemin=="20")||
              (hidemin=="21") || (hidemin=="22")|| (hidemin=="23")|| (hidemin=="24")|| (hidemin=="25")|| (hidemin=="26")|| (hidemin=="27")
              || (hidemin=="28")|| (hidemin=="29")|| (hidemin=="30")
              || (hidemin=="31") || (hidemin=="32") || (hidemin=="33") || (hidemin=="34") || (hidemin=="35")|| (hidemin=="36")|| (hidemin=="37")
              || (hidemin=="38") || (hidemin=="39") || (hidemin=="40")
              || (hidemin=="41")|| (hidemin=="42")|| (hidemin=="43")|| (hidemin=="44")|| (hidemin=="45")|| (hidemin=="46")|| (hidemin=="47")
              || (hidemin=="48")|| (hidemin=="49")|| (hidemin=="50")|| (hidemin=="51")
              || (hidemin=="52")|| (hidemin=="53")|| (hidemin=="54")|| (hidemin=="55")|| (hidemin=="56")|| (hidemin=="57")|| (hidemin=="58")
              || (hidemin=="59")|| (hidemin=="60")  )
              {break;}
        else if ( (hidemin=="0")  ||(hidemin=="1" )|| (hidemin=="2")  || (hidemin=="3") || (hidemin=="4") || (hidemin=="5") || (hidemin=="6")  || (hidemin=="7")  || (hidemin=="8")
             || (hidemin=="9")  )
        {cout <<"enter min in two digits"<<endl ;}
        else
                    cout<<"enter min correct "<<endl;


    }
    for(int i=0;i<1000;i++)
    {
        cout <<"enter the time is AM or PM \na or A for AM and p or P FOR PM"<<endl;
        cin >>time;
        if ((time=="A")|| (time=="a") )
        {   time="AM";
            break;
        }
         if ((time=="P")||(time=="p") )
        {   time="PM";
            break;
        }
        else
            cout <<"enter A for AM and p or P FOR PM correct"<<endl;;
    }

cout <<" the time is   "  ;
cout<<hours<<":"<<hidemin<<" "<<time<<endl;
hom [0]=hours[0];
hom [1]=hours[1];
hom [2]=hidemin[0];
hom [3]=hidemin[1];
cout<<hourtime(hom)<<endl;




    return 0;
}
string hourtime( string  alltime)
{
if (time=="AM")
    if (alltime[0]=='1'&&alltime[1]=='2')
{
    alltime[0]='0';
    alltime[1]='0';
}
if (time=="PM"){
    if (alltime[0]=='0'&&alltime[1]=='1')
{
    alltime[0]='1';
    alltime[1]='3';
}
else if (alltime[0]=='0'&&alltime[1]=='2')
{
    alltime[0]='1';
    alltime[1]='4';
}
else if (alltime[0]=='0'&&alltime[1]=='3')
{
    alltime[0]='1';
    alltime[1]='5';
}
else if (alltime[0]=='0'&&alltime[1]=='4')
{
    alltime[0]='1';
    alltime[1]='6';
}
else if (alltime[0]=='0'&&alltime[1]=='5')
{
    alltime[0]='1';
    alltime[1]='7';
}
else if (alltime[0]=='0'&&alltime[1]=='6')
{
    alltime[0]='1';
    alltime[1]='8';
}
else if (alltime[0]=='0'&&alltime[1]=='7')
{
    alltime[0]='1';
    alltime[1]='9';
}
else if (alltime[0]=='0'&&alltime[1]=='8')
{
    alltime[0]='2';
    alltime[1]='0';
}

else if (alltime[0]=='0'&&alltime[1]=='9')
{
    alltime[0]='2';
    alltime[1]='1';
}
else if (alltime[0]=='1'&&alltime[1]=='0')
{
    alltime[0]='2';
    alltime[1]='2';
}else if (alltime[0]=='1'&&alltime[1]=='1')
{
    alltime[0]='2';
    alltime[1]='3';
}}
return alltime;
}
