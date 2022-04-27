#pragma once
#include <iostream>
#include <string>
#include "Game.hpp"

using namespace std;

namespace coup{
   // class Game;

    class Player{
        public:
            string name;
            int _coins;
            Game game;
            Player(Game& game,const string& name);
            void income();
            void foreign_aid();
            virtual void coup(Player& p);
            virtual string role();
            int coins() const;
            string get_name()const;
    };

}