#ifndef STATE_H
#define STATE_H

class Player;

class State
{
    public:
        /** Default constructor */
        State(Player* _player);
        /** Default destructor */
        virtual ~State();

        /** Access player
         * \return The current value of player
         */
        Player* Getplayer() { return player; }
        /** Set player
         * \param val New value to set
         */
        void Setplayer(Player* val) { player = val; }

        virtual void onPlay() = 0;
        virtual void onStop() = 0;
        virtual void onPause() = 0;

    protected:
        Player* player; //!< Member variable "player"

    private:
};

#include "Player.h"

#endif // STATE_H
