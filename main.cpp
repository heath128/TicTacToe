// A simple game of Tic Tac Toe done the hard way with a bit boards!

#include <iostream>
#include <cstdlib>
#include <string>
#include "functions.h"

using namespace std;

int main(int argc, char *argv[])
{
    string gmove;

    unsigned short int p1wins = 0;
    unsigned short int p2wins = 0;
    unsigned short int p1board = 0;
    unsigned short int p2board = 0;

    bool pturn = 0;
    bool gameOver = 1;

    do
    {
        if( gameOver == 1 )
        {
            p1board = 0;
            p2board = 0;
            gameOver = 0;
        }
        PrintWinCount( p1wins, p2wins );
        DrawBoard( p1board, p2board );
        GetMove( gmove, pturn );

        if( gmove != "q")
        {
            CheckMove( p1board, p2board, pturn, gmove );
            PrintWinCount( p1wins, p2wins );
            DrawBoard( p1board, p2board );
            CheckWinner( p1board ,p2board, p1wins, p2wins, gameOver );
        }

    }
    while( gmove != "q" );

    return 0;
}

void GetMove( string &gmove, bool pturn )
{
    string pname;

    if( pturn == 0 )
    {
        pname = "Player 1";
    }
    else
    {
        pname = "Player 2";
    }

    cout << "Player 1 is X and Player 2 is O.\n";
    cout << "Move e.g. b1 or q to quit.\n\n";
    cout << pname << " make your move:";
    getline(cin,gmove);
    return;
}



void Pturn( bool &pturn )
{
    if( pturn == 0 )
    {
        pturn = 1;
    }
    else
    {
        pturn = 0;
    }
    return;
}

void PrintWinCount( unsigned short int p1wins, unsigned short int p2wins )
{
    system("CLS");
    cout << "\n\nPlayer 1 Wins=" << p1wins << endl;
    cout << "Player 2 Wins=" << p2wins << endl;
    return;
}

