#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <iostream>

using namespace std;

class Player
{
    public:
        Player();
        virtual ~Player();

        bool Getplaying() { return playing; }
        void Setplaying(bool val) { playing = val; }
        std::vector<std::string>* Gettracklist() { return pTracklist; }
        void Settracklist(std::vector<std::string>* val) { pTracklist = val; }
        int GetcurrentTrack() { return currentTrack; }
        void SetcurrentTrack(int val) { currentTrack = val; }
//        State Getstate() { return state; }
//        void Setstate(State val) { state = val; }

        void displayTracklist();

    protected:

    private:
        bool playing;
        std::vector<std::string>* pTracklist;
        int currentTrack;
//        State state;
};

#endif // PLAYER_H
