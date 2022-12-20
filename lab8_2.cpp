//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name,Movie,Day,Say;
    int gear;
    //char a1,a2;
    cout <<"Fahsai: Sawadee ka...Can you tell me your name?" << endl << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! "<< name << " is a really cool name." << endl;
    name = name+": ";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl << name;
    cin >> gear;
    cin.ignore();
    gear = (gear/10000000) -12;
    cout << "Fahsai: I think you may be GEAR " << gear<<". I have a free movie ticket for you." << endl << "Fahsai: Let's go to the cinema together!!!" << endl << "Fahsai: What movie do you want to watch?" << endl << name;
    getline(cin,Movie);
    cout << "Fahsai: So....which day are you free to go with me?" << endl<<name;
    getline(cin,Day);
    cout << "Fahsai: " << Day <<"....that is OK!!! I'm looking forward to watching " << Movie <<" with you." << endl << name;
    getline (cin,Say);
    cout << "Fahsai: 555+ see you "<< Day <<". Bye Bye \\(^ ^)/";




    




    // a1 = gear[0];
    // a2 = gear[1];
    // cout << a1 << " " << a2 << endl;
    // gear1 += a1;
    // gear1 += a2;
    // resultgear = int (gear1);

    // cout << resultgear;






    

}