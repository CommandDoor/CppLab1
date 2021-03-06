//#include <QtCore/QCoreApplication>

#include <string.h>
#include <conio.h>
#include <iostream>
#include <string>
#include <time.h>

#include <stdio.h>
#include <stdlib.h>

#include <cardioid.h>

using namespace std;

///////////////////
// Input operations
///////////////////
istream &input(char *& ptr){
    ptr = new char[1];
    *ptr = '\0';
    int l = 0;
    char buf[80];
    //  cout<< "enter string or EOF, for end programm"<<endl;
    do{
        cin.clear();
        cin.getline(buf,80);
        if(cin.eof()){;break;}
        l+=strlen(buf);
        char * prev = ptr;
        ptr = new char[l+1];
        strcpy(ptr,prev);
        strcat(ptr,buf);
        delete[]prev;
    } while (cin.fail());
    return cin;
}

istream &input (int &a)
{
    while(!(cin>>a))
    {
        if(cin.eof()) break;
        cin.clear();
        cin.ignore();
    };

    cin.ignore();
    return cin;
}

int inputNatural()
{
    int n;
    const char* errorString = "";
    do{
        cout<<errorString;
        errorString="Please, try again.\n";
        input(n);
    }while (n<=0);

    return n;
}
///////////////////
// Menu operations
///////////////////
int Menu ()
{
    int c;
    cout<<"1.Insert radius."<<endl;
    cout<<"2.Insert angle."<<endl;
    cout<<"3.Exit."<<endl;
    input(c);
    while (c <= 0 || c > 3)
    {
        cout<< "Uncorrect! Reenter: ";
        input(c);
    }
    return c;
}

///////////////////
// Main
///////////////////
int main(int argc, char *argv[])
{
    Cardioid* cardioid = new Cardioid();

    bool b = true;
    while (b)
    {
        cout<<endl<<"==============================="<<endl;
        system("cls");

        cout<<"Current results:"<<endl;
        cout<<" radius = "<<cardioid->radius<<endl;
        cout<<" angle  = "<<cardioid->angle<<endl;
        cout<<"3)"<<endl;
        cout<<"4)"<<endl;
        cout<<"5) Radius of curvature ( 8/3 * "<<cardioid->radius<<" * sin("<<cardioid->angle<<"*Pi/360) ) = "<<cardioid->getRadiusOfCurvature()<<endl;
        cout<<"6) Area ( 6 * Pi * "<<cardioid->radius<<"^2 ) = "<<cardioid->getArea()<<" (square units)"<<endl;
        cout<<"7)"<<endl;
        cout<<"---------"<<endl<<endl;

        int c = Menu();

        switch (c) {
        case 1:
            cout<<"Insert radius = ";
            input(cardioid->radius);
            break;
        case 2:
            cout<<"Insert angle = ";
            input(cardioid->angle);
            break;
        case 3: b = false;
            break;
        }


        if (b)
        {
            _getch();
        }
    }

    return 0;
}
