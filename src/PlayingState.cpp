#include "PlayingState.h"
#include "PausedState.h"

PlayingState::~PlayingState()
{
    //dtor
}

void PlayingState::onPlay()
{
    cout << "Already Playing !" << endl;

}

void PlayingState::onStop()
{
    // Currently Playing, 'PLAY' request
    player->Setstate(new StoppedState(player));
    cout << player->stopPlayList() << endl;
    delete this;
}

void PlayingState::onPause()
{
    // Currently Playing, 'PLAY' request
    player->Setstate(new PausedState(player));
    cout << player->pausePlayList() << endl;
    delete this;
}
