//
// Created by nitzan on 16/03/2021.
//

#ifndef MESSAGEBOARD_BOARD_H
#define MESSAGEBOARD_BOARD_H
#include <string>
#include "../Direction.hpp"
#include <map>

using namespace std;
struct char_text{
    char c='_'; // this is the default value of each character types in our board
};
namespace ariel {
    class Board {
        map<unsigned int,map<unsigned int,char_text>> msgs;
        unsigned int max_column, max_row;
    public:
        Board(){
            max_column = 0; max_row = 0;
        }
        ~Board(){};
        void post(unsigned int row, unsigned int column, Direction direction, string text);
        string read(unsigned int row, unsigned int column, Direction direction, unsigned int amount);
        void show();
    };
}

#endif //MESSAGEBOARD_BOARD_H
