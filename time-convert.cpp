#include <iostream>

using namespace std;
int main(){
    string unit;
    double reading, initial;
    double sec, min, hrs;
    cout<<"Choose a unit to use(seconds/hours/minutes)\n";
    cin>> unit;
    
    cout<<"Enter a value: ";
    cin>>initial;
    
    if(unit == "seconds"){
        min = initial / 60;
        hrs = initial / 3600;

        cout<<initial<<" seconds is: "<<hrs<<" hours"<<endl;
        cout<<initial<<" seconds is: "<<min<<" minutes"<<endl;
    }
    else if(unit == "minutes"){
        sec = initial * 60;
        hrs = initial / 60;

        cout<<initial<<" minutes is: "<<hrs<<" hours"<<endl;
        cout<<initial<<" minutes is: "<<sec<<" seconds"<<endl;
    }
    else if(unit == "hours"){
        min = initial * 60;
        sec = initial * 3600;

        cout<<initial<<" hours is: "<<sec<<" seconds"<<endl;
        cout<<initial<<" hours is: "<<min<<" minutes"<<endl;
    }
    else{
        cout<<"Wrong unit used";
    }

    return 0;
}