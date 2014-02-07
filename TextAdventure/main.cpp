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

int nonlazy = 0, box;

int main()
{
    string player_name;
    
    cout << "Enter your name: ";
    string username, last_name;
    cin >> username >> last_name;
    
    cout << endl << "Hello, " << username << " " << last_name << ". I am pleased to meet you!\n" << endl << "Get ready for the best text adventure you've \never been on!" << endl;
    
    cin.get();
    cout << "You awake on the floor of a small, very dimly lit room. \nYou don't remeber how you got here. \nThe only light is coming from a single bulb hanging from the ceiling.\nThere is a  door to your left. \n There is a small wooden box lying on the floor to your right. \n" << endl;
    cout << "Do you want to try to open the box?\nPress 1 for YES and 2 for NO" << endl;
    cin >> box;
    while( (box !=1) && (box !=2))
    {
        cout << "That's not a valid answer\nPlease re-enter your answer: ";
        cin >> box;
    }
        switch(box)
        {
    
        case 1:
                cout << "\nYou attempt to open the box, it won't open." << endl << endl;
                nonlazy--;
            break;
        case 2:
                cout << "You sit lazily on your bum " << endl << endl;
        }
    
    cout << "You, " << username << " begin to panic, looking around frantically for a \nway out. You spot a key..." << "\n\nDo you want to pick up the key? \nPress 1 for YES and 2 for NO\n";
    
    int response1 = 2;
    
    while (response1 == 2)
    {
    
    cin >> response1;
        switch(response1)
        {
            case 1:
                cout << "The key is rusty and cold as you pick it up. You...\n\n"; //add something CREATIVE here!!
                    t
                
                break;
            case 2:
            {
                cout << "You sit lazily on your bum\n\n";
                cout << "You hear a clock begin ticking, looks like time might be running out"
                response1 = 2;
            }
        }
    }
    
    cout << "\n";
    
    return 0;
}
