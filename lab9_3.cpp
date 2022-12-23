#include<iostream>
#include<string>
using namespace std;
int main(){
    int age;
    int h;
    long bounty;
    string status;
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 25){
        cout << "Enter your height: ";
        cin >> h;
        if(h < 100){
            status = "Chopper";
        }
        else{
            if(h < 180){
                status = "Usopp";
            }
            else{
                cout << "Enter your bounty: ";
                cin >> bounty;
                if(bounty > 1100000000){
                    status = "Zoro";
                }
                else{
                    status = "Sanji";
                }
            }
        }
    }
    else{
        if(age <= 60){
            cout << "Enter your bounty: ";
            cin >> bounty;
            if (bounty > 500000000){
                status = "Jinbe";
            }
            else{
                status = "Franky";
            }
        }
        else{
            status = "Brook";
        }     
    }
    cout << "Your character = " << status;
}

/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/

//Kong >w<
