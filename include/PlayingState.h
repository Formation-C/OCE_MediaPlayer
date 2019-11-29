#ifndef PLAYINGSTATE_H
#define PLAYINGSTATE_H

#include <State.h>


class PlayingState : public State
{
    using State::State;
    public:
        /** Default destructor */
        virtual ~PlayingState();

        void onPlay();
        void onStop();
        void onPause();

    protected:

    private:
};

#endif // PLAYINGSTATE_H
