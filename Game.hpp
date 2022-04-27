#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

namespace coup{
    class Player;

    class Game{
        private:
            vector<string> names;
            unordered_map<Player*,string>moves;
            int numPlayers;
            int CurrPlayer;
        public:
            Game();
            static string turn();
            vector<string> players();
            string winner();
            void addPlayer(Player* p);
};
}