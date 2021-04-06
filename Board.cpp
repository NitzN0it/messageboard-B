//
// Created by nitzan on 16/03/2021.
//

#include "Board.hpp"
#include <string>
#include <iostream>
using namespace std;
using namespace ariel;
    void Board::post(unsigned int row, unsigned int column, Direction direction, string text)
    {
        if(direction == Direction::Horizontal)
        {
            for(unsigned int i=0; i<text.length(); i++)
            {
                msgs[row][column].c = text.at(i);
                column++;
            }
            if (column > max_column)
            {
                max_column = column;
            }
        }
        else
        {
            for(unsigned int i=0; i<text.length(); i++)
            {
                msgs[row][column].c = text.at(i);
                row++;
            }
            if (row > max_row)
            {
                max_row = row;
            }
        }
    }

    string Board::read(unsigned int row, unsigned int column, Direction direction, unsigned int amount)
    {
        string msg = "";
        for(unsigned int i=0; i<amount; i++)
        {
            msg+=msgs[row][column].c;
            if(direction == Direction::Horizontal)
            {
                column++;
            }
            else
            {
                row++;
            }
        }
        return msg;
    }

    void Board::show()
    {
        for(unsigned int i=0; i<max_row; i++)
        {
            for (unsigned j = 0; j < max_column; j++)
            {
                cout << msgs[i][j].c;
            }
            cout << "\n";
        }
    }