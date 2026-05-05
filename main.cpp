#include <iostream>

using namespace std;

int main()
{
    int choice;
    cout<<"Enter \n 1 to check balance \n 2 For deposit \n 3 for withdraw amount \n 4 for exit\n";
    cin>>choice;

    switch(choice){

    case 1:{
        cout<<"You want to check your balance\n";
        break;
    }
    case 2:{
        cout<<"you want to deposit money\n";
        break;
    }
    case 3:{
        cout<<"you want to withdraw\n";
        break;
    }
    case 4:{
        cout<<"you want to exit\n";
        break;

    }
    default:{
        cout<<"Select correct option";
        break;
    }





    }

        return 0;
}
