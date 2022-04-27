#include "Game.hpp"
#include "Player.hpp"
namespace coup{

    Game::Game(){this->CurrPlayer=0; this->numPlayers=0;}
    vector<string> Game::players(){return this->names;}
    string Game::turn(){return "test";}//return this->names.at((size_t)this->CurrPlayer);}
    string Game::winner(){return this->names.at(0);}
    void Game::addPlayer(Player* p){this->names.push_back(p->get_name()); this->moves.at(p)=p->get_name();}
}