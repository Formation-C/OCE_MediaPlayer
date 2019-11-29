#ifndef STOPPEDSTATE_H
#define STOPPEDSTATE_H

#include "State.h"

class StoppedState : public State
{
    using State::State;
    public:
        /** Default constructor */
        StoppedState();
        /** Default destructor */
        virtual ~StoppedState();

        void onPlay();
        void onStop();
        void onPause();

    protected:

    private:
};


#endif // STOPPEDSTATE_H
