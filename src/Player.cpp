#include <algorithm>
#include "Player.h"

Player::Player()
{
    //ctor
    Setplaying(false);
    pTracklist = new vector<string>;
//    for (int ii=0; ii < 12; ii++)
//    {
//        pTracklist->push_back("track #" + to_string(ii));
//    }
    pTracklist->push_back("Track #01: Banks - Beggin For Thread");
    pTracklist->push_back("Track #02: Toni Braxton - Un-Break My Heart");
    pTracklist->push_back("Track #03: Avicii - You Make Me");
    pTracklist->push_back("Track #04: Thomston - Burning out");
    pTracklist->push_back("Track #05: Alt-J - Every Other Freckle");
    pTracklist->push_back("Track #06: Massive Attack - Teardrop");
    pTracklist->push_back("Track #07: The Killers - Goodnight, Travel well");
    pTracklist->push_back("Track #08: Evermore - Between the Lines");
    pTracklist->push_back("Track #09: Softengine - Something Better");
    pTracklist->push_back("Track #10: Cats On Trees - Tikiboy");
    pTracklist->push_back("Track #11: Band of Horses - The Funeral");
    pTracklist->push_back("Track #12: Jimmy Eat World - Firestarter");
}

Player::~Player()
{
    //dtor
}

void Player::displayTracklist(void)
{
    for_each (pTracklist->begin(), pTracklist->end(), [](string trackname) {cout << trackname << endl;});
}
