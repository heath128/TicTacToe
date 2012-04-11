#include <iostream>
#include <cstdlib>
#include "functions.h"
using namespace std;

void CheckMove( unsigned short int &p1board, unsigned short int &p2board , bool &pturn, string gmove )
{
    if( (gmove == "A1" || gmove == "a1") && ((p1board & 0x100) == 0 && (p2board & 0x100) == 0) )
    {
        if( pturn == 0 )
        {

            p1board = p1board | 0x100;
            Pturn( pturn );
        }
        else
        {
            cout << "\nA1 = TRUE PTURN 0 = FALSE\n";
            p2board = p2board | 0x100;
            Pturn( pturn );
        }
    }

    else if( (gmove == "A2" || gmove == "a2") && ((p1board & 0x20) == 0 && (p2board & 0x20) == 0) )
    {
        if( pturn == 0 )
        {

            p1board = p1board | 0x20;
            Pturn( pturn );
        }
        else
        {

            p2board = p2board | 0x20;
            Pturn( pturn );
        }
    }

    else if( (gmove == "A3" || gmove == "a3") && ((p1board & 0x4) == 0 && (p2board & 0x4) == 0) )
    {
        if( pturn == 0 )
        {

            p1board = p1board | 0x4;
            Pturn( pturn );
        }
        else
        {

            p2board = p2board | 0x4;
            Pturn( pturn );
        }
    }

    else if( (gmove == "B1" || gmove == "b1") && ((p1board & 0x80) == 0 && (p2board & 0x80) == 0) )
    {
        if( pturn == 0 )
        {

            p1board = p1board | 0x80;
            Pturn( pturn );
        }
        else
        {

            p2board = p2board | 0x80;
            Pturn( pturn );
        }
    }

    else if( (gmove == "B2" || gmove == "b2") && ((p1board & 0x10) == 0 && (p2board & 0x10) == 0) )
    {
        if( pturn == 0 )
        {

            p1board = p1board | 0x10;
            Pturn( pturn );
        }
        else
        {

            p2board = p2board | 0x10;
            Pturn( pturn );
        }
    }

    else if( (gmove == "B3" || gmove == "b3") && ((p1board & 0x2) == 0 && (p2board & 0x2) == 0) )
    {
        if( pturn == 0 )
        {

            p1board = p1board | 0x2;
            Pturn( pturn );
        }
        else
        {

            p2board = p2board | 0x2;
            Pturn( pturn );
        }
    }

    else if( (gmove == "C1" || gmove == "c1") && ((p1board & 0x40) == 0 && (p2board & 0x40) == 0) )
    {
        if( pturn == 0 )
        {

            p1board = p1board | 0x40;
            Pturn( pturn );
        }
        else
        {

            p2board = p2board | 0x40;
            Pturn( pturn );
        }
    }
    else if( (gmove == "C2" || gmove == "c2") && ((p1board & 0x8) == 0 && (p2board & 0x8) == 0) )
    {
        if( pturn == 0 )
        {

            p1board = p1board | 0x8;
            Pturn( pturn );
        }
        else
        {

            p2board = p2board | 0x8;
            Pturn( pturn );
        }
    }
    else if( (gmove == "C3" || gmove == "c3") && ((p1board & 0x1) == 0 && (p2board & 0x1) == 0) )
    {
        if( pturn == 0 )
        {

            p1board = p1board | 0x1;
            Pturn( pturn );
        }
        else
        {

            p2board = p2board | 0x1;
            Pturn( pturn );
        }
    }
    else if( gmove == "q" )
    {
        return;
    }
    else
    {
        cout << "\n\nBad Input try again!\n";
        system("PAUSE");
    }
    return;
}
