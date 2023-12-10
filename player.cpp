#include "person.h"
#include "player.h"
#include <iostream>

using namespace std; 
Player::Player()
{
    cout << "def arg constructor person" << endl; 
}

std::ostream& operator<<(std::ostream& out, const Player& player){
    out << "Player[Full name: " << player.get_full_name() <<
                    ",age: " << player.get_age() << 
                    ",address: " << player.get_address() << "]";
    return out;
}


Player::~Player()
{
}