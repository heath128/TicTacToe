using namespace std;

void StartGame();
void PlayGame();
void DrawBoard( unsigned short int &rp1board, unsigned short int &rp2board );
void GetMove( string &rgmove, bool pturn );
void CheckMove( unsigned short int &rp1board, unsigned short int &rp2board , bool &rpturn , string gmove );
void CheckWinner( unsigned short int p1board ,unsigned short int p2board, unsigned short int &rp1wins, unsigned short int &rp2wins, bool &rgameover );
void Pturn( bool &rpturn );
void PrintWinCount( unsigned short int p1wins, unsigned short int p2wins );
void test(void);
