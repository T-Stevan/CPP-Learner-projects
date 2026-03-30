#include <iostream>

using namespace std;

int main(){
    // While loop

    int number=1;
    while (number < 11){
        cout<<number<<endl;
        number++;
    }

    // For loop
    char choice;
    cout<<"Enter a choice(y/n): ";
    cin>>choice;
    for(;;){
        if(choice == 'y'){
            cout<<"Good choice";
            break;
        }
        else if(choice == 'n'){
            cout<<"Bad choice";
        }
        else{
            cout<<"Wrong input";
        }

    }

    // Do-while loop
     int number=1;
    do{
        cout<<number<<endl; 
        number++;
    }
    while(number<=10);
    return 0;
}