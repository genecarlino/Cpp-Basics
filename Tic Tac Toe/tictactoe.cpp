#include<iostream>
using namespace std;

int board[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int row;
int column;
char token = 'x'


void functionOne(){
    

    string n1;
    string n2;
    cout<<"enter the name the first player : \n";
    getline(cin,n1);
    cout<<"Enter the name of the second player : \n";
    getline(cin,n2);
    cout<<n1<< " is player one so they will play first \n";
    cout<<n2<< " is player one so they will play second \n";


    cout<<"tt     |     |     \n";
    cout<<"tt  "<<board[0][0]<<"  | "<<board[0][1]<<"   |  "<<board[0][2]<<" \n";
    cout<<"tt_____|_____|_____\n";
    cout<<"tt     |     |     \n";
    cout<<"tt  "<<board[1][0]<<"  | "<<board[1][1]<<"   |  "<<board[1][2]<<" \n";
    cout<<"tt_____|_____|_____\n";
    cout<<"tt     |     |     \n";
    cout<<"tt  "<<board[2][0]<<"  | "<<board[2][1]<<"   |  "<<board[2][2]<<" \n";
    cout<<"tt     |     |     \n";
}

void functionTwo{

    int digit;

    if(token=='x')
    {
        cout<<n1<<"please enter ";
        cin>>digit;

    }
    if(token=='0')
    {
        cout<<n2<<"please enter ";
        cin>>digit;
    }

    if(digit==1)
    {
        row=0
        column=0
    }
    if(digit==2)
    {
        row=0
        column=1
    }
    if(digit==3)
    {
        row=0
        column=2
    }
    if(digit==4)
    {
        row=1
        column=0
    }
    if(digit==5)
    {
        row=1
        column=1
    }
    if(digit==6)
    {
        row=1
        column=2
    }
    if(digit==7)
    {
        row=2
        column=0
    }
    if(digit==8)
    {
        row=2
        column=1
    }
    if(digit==9)
    {
        row=2
        column=2
    }





}