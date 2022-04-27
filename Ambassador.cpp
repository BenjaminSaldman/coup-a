#include "Ambassador.hpp"

#include <iostream>
#include <string>

using namespace std;
namespace coup{
    Ambassador::Ambassador(Game& game,const string& name):Player(game,name){}
    string Ambassador::role(){return "Ambassador";}
    void Ambassador::block(Player& p){this->_coins+=p._coins;}
    void Ambassador::transfer(Player& src, Player& dest){src._coins--;src._coins++;}
}