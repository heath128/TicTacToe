#include <iostream>
using namespace std;


void DrawBoard( unsigned short int &p1board , unsigned short int &p2board )
{
    cout << "\n\n";
    cout << "  A B C" << endl;

    cout << "1 ";

    // Draw A1
    if( (p1board & 0x100)!=0 )
    {
        cout << "X|";
    }
    else if( (p2board & 0x100) !=0 )
    {
        cout << "O|";
    }
    else
    {
        cout << " |";
    }

    // Draw B1
    if( (p1board & 0x80) !=0 )
    {
        cout << "X|";
    }
    else if( (p2board & 0x80) !=0 )
    {
        cout << "O|";
    }
    else
    {
        cout << " |";
    }

    //Draw C1
    if( (p1board & 0x40)!=0 )
    {
        cout << "X";
    }
    else if( (p2board & 0x40)!=0 )
    {
        cout << "O";
    }
    else
    {
        cout << " ";
    }



    cout << endl; //next line
    cout << "  -----" << endl;
    cout << "2 ";

    //Draw A2
    if( (p1board & 0x20)!= 0 )
    {
        cout << "X|";
    }
    else if( (p2board & 0x20)!= 0 )
    {
        cout << "O|";
    }
    else
    {
        cout << " |";
    }




    //Draw B2
    if( (p1board & 0x10)!= 0 )
    {
        cout << "X|";
    }
    else if( (p2board & 0x10)!= 0 )
    {
        cout << "O|";
    }
    else
    {
        cout << " |";
    }



    //Draw C2
    if( (p1board & 0x8)!= 0 )
    {
        cout << "X";
    }
    else if( (p2board & 0x8)!= 0 )
    {
        cout << "O";
    }
    else
    {
        cout << " ";
    }


    cout << endl; // next line
    cout << "  -----" << endl;
    cout << "3 ";

    //Draw A3
    if( (p1board & 0x4)!= 0 )
    {
        cout << "X|";
    }
    else if( (p2board & 0x4)!= 0 )
    {
        cout << "O|";
    }
    else
    {
        cout << " |";
    }

    //Draw B3
    if( (p1board & 0x2)!= 0 )
    {
        cout << "X|";
    }
    else if( (p2board & 0x2)!= 0 )
    {
        cout << "O|";
    }
    else
    {
        cout << " |";
    }

    //Draw C3
    if( (p1board & 0x1)!= 0 )
    {
        cout << "X";
    }
    else if( (p2board & 0x1)!= 0 )
    {
        cout << "O";
    }
    else
    {
        cout << " ";
    }
    cout << endl << endl;

}
