#include "Player.hpp"
#include <iostream>
#include <string>

using namespace std;
namespace coup{
    Player::Player(Game& game,const string& name): game(game),name(name){_coins=0;}
    void Player::income(){_coins++;}
    int Player::coins()const{return _coins;}
    void Player::foreign_aid(){_coins+=2;}
    string Player::role(){return "Player";}
    void Player::coup(Player& p){this->_coins+=p._coins;}
    string Player::get_name()const{return this->name;}
}