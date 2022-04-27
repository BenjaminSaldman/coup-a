#include "Assassin.hpp"

#include <iostream>
#include <string>

using namespace std;
namespace coup{
    Assassin::Assassin(Game& game,const string& name):Player(game,name){}
    string Assassin::role(){return "Assassin";}
    void Assassin::coup(Player& p){this->_coins-=3;}
}
