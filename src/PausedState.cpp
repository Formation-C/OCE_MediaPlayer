#include "PausedState.h"
#include "PlayingState.h"
#include "StoppedState.h"


PausedState::~PausedState()
{
    //dtor
}

void PausedState::onPlay()
{
    // Currently Paused, 'PLAY' request
    player->Setstate(new PlayingState(player));
    cout << player->startPlayList() << endl;
    delete this;
}

void PausedState::onStop()
{
    // Currently Paused, 'PLAY' request
    player->Setstate(new StoppedState(player));
    cout << player->stopPlayList() << endl;
    delete this;
}

void PausedState::onPause()
{
    cout << "Already Paused !" << endl;
}
