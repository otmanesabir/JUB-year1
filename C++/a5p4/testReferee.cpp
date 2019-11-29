#include <iostream>
#include "TournamentMember.h"



int main(){
    Referee ref;
    Player *players[50];
    int num_players;
    cout << "Enter number of players you want to enter" << endl;
    std::cin >> num_players;
    for(int i = 0; i < num_players; i++){
        int number, goals;
        char FirstName[38];
        char LastName[36];
        char Date[17];
        string location, position;
        double weight, height;
        char foot;
        cout << "Enter data (number/position/goals/foot/FirstName/LastName/Date/ location/weight/height)";
        // this reads all the data to enter to the player
        cin >> number >> position >> goals >> foot >> FirstName >> LastName >> Date >> location >> weight >> height;
        players[i] = new Player(number, goals, foot, position, FirstName, LastName, Date, location, weight, height);
    }
    while(true){
        cout << "Type index of player you want";
        int i; // index of the player
        cin >> i;
        cout << "Enter 'RED' to add player to red card list" << endl;
        cout << "Enter 'YELLOW' to add player to yellow card list" << endl;
        cout << "Enter 'exit' to exit" << endl;
        string choice;
            cin >> choice;
            if(choice == "RED"){
                ref.addToRedCardList(players[i]);
            } else if ( choice == "YELLOW" ){
                ref.addToYellowCardList(players[i]);
            } else if ( choice == "exit") {
                break;
            }
    }
    return 0;
}

