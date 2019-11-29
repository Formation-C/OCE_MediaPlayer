#include <algorithm>
#include "Player.h"

Player::Player()
{
    //ctor
    pTracklist = new vector<string>;
//    for (int ii=0; ii < 12; ii++)
//    {
//        pTracklist->push_back("track #" + to_string(ii));
//    }
    int ii = 0;
    pTracklist->push_back("Track #" + to_string(++ii) + ": Banks - Beggin For Thread");
    pTracklist->push_back("Track #" + to_string(++ii) + ": Toni Braxton - Un-Break My Heart");
    pTracklist->push_back("Track #" + to_string(++ii) + ": Avicii - You Make Me");
    pTracklist->push_back("Track #" + to_string(++ii) + ": Thomston - Burning out");
    pTracklist->push_back("Track #" + to_string(++ii) + ": Alt-J - Every Other Freckle");
    pTracklist->push_back("Track #" + to_string(++ii) + ": Massive Attack - Teardrop");
    pTracklist->push_back("Track #" + to_string(++ii) + ": The Killers - Goodnight, Travel well");
    pTracklist->push_back("Track #" + to_string(++ii) + ": Evermore - Between the Lines");
    pTracklist->push_back("Track #" + to_string(++ii) + ": Softengine - Something Better");
    pTracklist->push_back("Track #" + to_string(++ii) + ": Cats On Trees - Tikiboy");
    pTracklist->push_back("Track #" + to_string(++ii) + ": Band of Horses - The Funeral");
    pTracklist->push_back("Track #" + to_string(++ii) + ": Jimmy Eat World - Firestarter");

    Setstate(new StoppedState(this));
    Setplaying(false);
    SetcurrentTrack(0);
}

Player::~Player()
{
    //dtor
    delete pTracklist;
}

void Player::displayTracklist(void)
{
    cout << "Display tracklist:" << endl;
    for_each (pTracklist->begin(), pTracklist->end(),
              [](string trackname) {cout << "   " << trackname << endl;});
    cout << endl;
}

void Player::displayCurrentTrack()
{
    cout << "Current track is : " + pTracklist->at(currentTrack) << endl;
}

string Player::nextTrack()
{
    currentTrack++;
    currentTrack %= pTracklist->size(); // Retourne à zéro quand size est atteint
    //cout << "Current track is : " << (*pTracklist)[currentTrack] << endl;
    //displayCurrentTrack();
    return "Current track is : " + pTracklist->at(currentTrack);
}

string Player::prevTrack()
{
    if(currentTrack > 0)
        currentTrack--;
    else
        currentTrack = pTracklist->size()-1; // R
    //cout << "Current track is : " << (*pTracklist)[currentTrack] << endl;
    return "Current track is : " + pTracklist->at(currentTrack);
}

string Player::pausePlayList()
{
    return "Pause at " + pTracklist->at(currentTrack);
}

string Player::stopPlayList()
{
    currentTrack = 0;
    return "-- Stopped --";
}

string Player::startPlayList()
{
    return "Start at " + pTracklist->at(currentTrack);
}
