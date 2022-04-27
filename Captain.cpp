#include "Captain.hpp"

#include <iostream>
#include <string>

using namespace std;
namespace coup{
    Captain::Captain(Game& game,const string& name):Player(game,name){}
    string Captain::role(){return "Captain";}
    void Captain::block(Player& p){this->_coins+=p._coins;}
    void Captain::steal(Player& p){this->_coins+=2;p._coins-=2;}
}