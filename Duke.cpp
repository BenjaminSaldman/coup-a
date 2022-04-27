#include "Duke.hpp"

#include <iostream>
#include <string>

using namespace std;
namespace coup{
    Duke::Duke(Game& game,const string& name):Player(game,name){}
    string Duke::role(){return "Duke";}
    void Duke::tax(){this->_coins+=3;}
    void Duke::block(Player& p){this->_coins+=p._coins;}
}
