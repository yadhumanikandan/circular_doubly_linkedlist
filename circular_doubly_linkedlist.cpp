#include<iostream>
using namespace std;

struct node{
    node *prev;
    int data;
    node *nest;
};

int count = 0, pos, val;
node *head = NULL, *temp, *ptr;

void insrtBig(){}

void insrtEnd(){}

void insrtReq(){}

void delBeg(){}

void delEnd(){}

void delReq(){}

void display(){}

int main(){

    char choice;

    do{
    cout<<"\n\n\n  *SELECT AN OPERATION*\n  (current length> "<<count<<")\n\n1-> Insert at begining\n2-> Insert at end\n3-> insert at required location\n4-> Delete from begining\n5-> Delete from end\n6-> Delete from required location\n7-> Display the list\n0-> Exit\n\n-> ";
    cin>>choice;

    switch (choice)
    {
    case '1': insrtBig();
        break;

    case '2': insrtEnd();
        break;

    case '3': insrtReq();
        break;

    case '4': delBeg();
        break;

    case '5': delEnd();
        break;

    case '6': delReq();
        break;

    case '7': display();
        break;

    case '0': cout<<"\nExiting program....\n\n";
        break;
    
    default:cout<<"\n\n**Enter a valied choice**";
        break;
    }

    }while (choice!='0');


    return 0;
}