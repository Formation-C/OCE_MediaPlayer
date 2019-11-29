#ifndef PAUSEDSTATE_H
#define PAUSEDSTATE_H

#include "State.h"

class PausedState:public State
{
    using State::State;
    public:
        /** Default constructor */
        PausedState();
        /** Default destructor */
        virtual ~PausedState();

        void onPlay();
        void onStop();
        void onPause();

    protected:

    private:
};

#endif // PAUSEDSTATE_H
