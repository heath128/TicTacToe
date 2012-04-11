#include <iostream>
#include <cstdlib>

using namespace std;

void CheckWinner( unsigned short int p1board ,unsigned short int p2board, unsigned short int &p1wins, unsigned short int &p2wins, bool &gameOver )
{
    //Check Horizontal for Player 1
    if( (p1board & 0x1C0) == 0x1C0 )
    {
        cout << "PLAYER 1 WINS!\n\n";
        system("PAUSE");
        p1wins++;
        gameOver = 1;

    }
    else if( (p1board & 0x38) == 0x38 )
    {
        cout << "PLAYER 1 WINS!\n\n";
        system("PAUSE");
        p1wins++;
        gameOver = 1;

    }
    else if( (p1board & 0x7) == 0x7 )
    {
        cout << "PLAYER 1 WINS!\n\n";
        system("PAUSE");
        p1wins++;
        gameOver = 1;

    }

    //Check Horizontal for Player 2
    else if( (p2board & 0x1C0) == 0x1C0 )
    {
        cout << "PLAYER 2 WINS!\n\n";
        system("PAUSE");
        p2wins++;
        gameOver = 1;

    }
    else if( (p2board & 0x38) == 0x38 )
    {
        cout << "PLAYER 2 WINS!\n\n";
        system("PAUSE");
        p2wins++;
        gameOver = 1;

    }
    else if( (p2board & 0x7) == 0x7 )
    {
        cout << "PLAYER 2 WINS!\n\n";
        system("PAUSE");
        p2wins++;
        gameOver = 1;

    }

    //Check Vertical for Player 1
    else if( (p1board & 0x124) == 0x124 )
    {
        cout << "PLAYER 1 WINS!\n\n";
        system("PAUSE");
        p1wins++;
        gameOver = 1;

    }
    else if( (p1board & 0x92) == 0x92 )
    {
        cout << "PLAYER 1 WINS!\n\n";
        system("PAUSE");
        p1wins++;
        gameOver = 1;

    }
    else if( (p1board & 0x49) == 0x49 )
    {
        cout << "PLAYER 1 WINS!\n\n";
        system("PAUSE");
        p1wins++;
        gameOver = 1;

    }

    //Check Vertical for Player 2
    else if( (p2board & 0x124) == 0x124 )
    {
        cout << "PLAYER 2 WINS!\n\n";
        system("PAUSE");
        p2wins++;
        gameOver = 1;

    }
    else if( (p2board & 0x92) == 0x92 )
    {
        cout << "PLAYER 2 WINS!\n\n";
        system("PAUSE");
        p2wins++;
        gameOver = 1;

    }
    else if( (p2board & 0x49) == 0x49 )
    {
        cout << "PLAYER 2 WINS!\n\n";
        system("PAUSE");
        p2wins++;
        gameOver = 1;

    }

    //Check Cross's for Player 1
    else if( (p1board & 0x111) == 0x111 )
    {
        cout << "PLAYER 1 WINS!\n\n";
        system("PAUSE");
        p1wins++;
        gameOver = 1;

    }
    else if( (p1board & 0x54) == 0x54 )
    {
        cout << "PLAYER 1 WINS!\n\n";
        system("PAUSE");
        p1wins++;
        gameOver = 1;

    }

    //Check Cross's for Player 2
    else if( (p2board & 0x111) == 0x111 )
    {
        cout << "PLAYER 2 WINS!\n\n";
        system("PAUSE");
        p2wins++;
        gameOver = 1;

    }
    else if( (p2board & 0x54) == 0x54 )
    {
        cout << "PLAYER 2 WINS!\n\n";
        system("PAUSE");
        p2wins++;
        gameOver = 1;

    }
    else
    {
        if( ((p1board & 0x1FF) | (p2board & 0x1FF)) == 0x1FF )
        {
            cout << "NOBODY WINS!\n\n";
            system("PAUSE");
            gameOver = 1;
        }
    }
    return;
}


