#include "StoppedState.h"
#include "PlayingState.h"

//StoppedState::StoppedState():State()
//{
//    //ctor
//}

StoppedState::~StoppedState()
{
    //dtor
}

void StoppedState::onPlay()
{
    // Currently stopped, 'PLAY' request
    player->Setstate(new PlayingState(player));
    cout << player->startPlayList() << endl;
    delete this;
}

void StoppedState::onStop()
{
    //cout << "Already stopped !" << endl;
    throw "Already stopped !" ;
}

void StoppedState::onPause()
{
    cout << "Already stopped !" << endl;
}
