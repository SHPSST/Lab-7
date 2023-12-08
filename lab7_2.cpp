#include <iostream>
#include <string>
using namespace std;

int main(){
    string name,id,y,z0,z1,movie,day,tense;
    int i=0,w;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    cin >> id;
    while(i<2){
        if(i==0){
            z0= id[i]; 
        }
        if(i==1){
            z1= id[i]; 
        }
        i++;
    }
    y=z0+z1;
    cin.ignore();
    w = stoi(y);
    cout << "Fahsai: I think you may be GEAR " << w-12 << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name <<": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name <<": ";
    getline(cin,day);
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n";
    cout << name << ": ";
    cin >> tense;
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/";
    return 0;
}
