#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

int main()
{
    Player player;
    player.displayTracklist();
    player.displayCurrentTrack();
    player.prevTrack();

    string input;
    while(input != "exit")
    {
        cout << "Input command: 'play', 'pause' or 'stop'" << endl;
        cin >> input;

        try
        {
            if(input == "play"){
                player.Getstate()->onPlay();
            }else if(input == "pause") {
                player.Getstate()->onPause();
            }else if(input == "stop") {
                player.Getstate()->onStop();
            }else if(input == "next"){
                player.nextTrack();
            }else if(input == "prev"){
                player.prevTrack();
            }
            else{
                cout << "Try 'play', 'pause' or 'stop'" << endl;
            }
        }

        catch(char const* errMsg)
        {
            cerr << "ERROR: " << errMsg << endl;
        }
    }

    player.startPlayList();
    player.pausePlayList();
    player.startPlayList();
    player.stopPlayList();
    return 0;
}
