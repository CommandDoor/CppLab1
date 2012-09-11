//#include <QtCore/QCoreApplication>

#include <string.h>
#include <conio.h>
#include <iostream>
#include <string>
#include <time.h>

#include <stdio.h>
#include <stdlib.h>

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
    cout<<"1.Add new leaf."<<endl;
    cout<<"2.Delete node."<<endl;
    cout<<"3.Search node."<<endl;
    cout<<"4.Import tree."<<endl;
    cout<<"5.Print tree."<<endl;
    cout<<"6.Clear tree."<<endl;
    cout<<"7.Exit."<<endl;
    input(c);
    while (c <= 0 || c > 7)
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
    Cardioid1 card = new Cardiod1();


    bool b = true;
    while (b)
    {
        system ("cls");
        int c = Menu();

        switch (c) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7: b = false;
            break;
        }

        if (b)
        {
            _getch();
        }
    }

    return 0;
}
