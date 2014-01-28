
/*
 +    string a, b;
 +    char response1;
 +    
 +    a="You picked up the key!";
 +    b="That's too bad";
 +
 +    cout << "You're in a room. Pick up key?\n";
 +    cin >> response1;
 +    if (response1=='y')
 +        cout << a;
 +    if (response1=='n')
 +        cout << b;
 +    
 +*/
 

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Enter your name: ";
    string username, last_name;
    cin >> username >> last_name;
    
    cout << "Hello, " << username << " " << last_name << ". I am pleased to meet you! \nGet ready for the best text adventure you've \never been on!" << endl << endl;
    
    cin.get();
    int door, nonlazy = 0;
    cout << "You awake on the floor of a small, very dimly lit room. \nYou don't remeber how you got here. \nThe only light is coming from a single bulb hanging from the ceiling.\nThere is a  door to your left." << endl;
    cout << "Do you want to try to open the door?\nPress 1 for YES and 2 for NO" << endl;
    cin >> door;
    if (nonlazy == 0)
    {
        switch(door)
        {
    
        case 1:
                cout << "You attempt to open the door, it won't open." << endl << endl;
                nonlazy--;
            break;
        case 2:
                cout << "You sit lazily on your bum " << endl << endl;
        }
    }
    if(nonlazy == 1)
    {
         cout << "Well, the door won't open, and your stuck in a dark room...\n";
    }else;
    
    cout << "You, " << username << " begin to panic, looking around frantically for a \nway out. You spot a key..." << "Do you want to pick up the key? \nPress 1 for YES and 2 for NO";
    int response1;
    if (response1 == '1')
        {
            cout << "You pick up the key";
        };
    
    cout << "\n";
    
    return 0;
}
