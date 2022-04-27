#include "Contessa.hpp"

#include <iostream>
#include <string>

using namespace std;
namespace coup{
    Contessa::Contessa(Game& game,const string& name):Player(game,name){}
    string Contessa::role(){return "Contessa";}
    void Contessa::block(Player& p){this->_coins+=p._coins;}
}