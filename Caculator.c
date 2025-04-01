#include <iostream>
#include <string>
#include <map>

// A simple function to display information about IPL teams
void showTeams() {
    std::cout << "The IPL teams are:\n";
    std::cout << "1. Mumbai Indians (MI)\n";
    std::cout << "2. Chennai Super Kings (CSK)\n";
    std::cout << "3. Royal Challengers Bangalore (RCB)\n";
    std::cout << "4. Kolkata Knight Riders (KKR)\n";
    std::cout << "5. Delhi Capitals (DC)\n";
    std::cout << "6. Rajasthan Royals (RR)\n";
    std::cout << "7. Sunrisers Hyderabad (SRH)\n";
    std::cout << "8. Punjab Kings (PBKS)\n";
}

// Function to display some famous IPL players
void showPlayers() {
    std::cout << "Some of the famous IPL players are:\n";
    std::cout << "1. Virat Kohli (RCB)\n";
    std::cout << "2. Rohit Sharma (MI)\n";
    std::cout << "3. MS Dhoni (CSK)\n";
    std::cout << "4. David Warner (SRH)\n";
    std::cout << "5. AB de Villiers (RCB)\n";
}

// Function to show the IPL schedule (Example)
void showSchedule() {
    std::cout << "The upcoming IPL match schedule (Sample):\n";
    std::cout << "1. MI vs RCB - April 3, 2025\n";
    std::cout << "2. CSK vs KKR - April 4, 2025\n";
    std::cout << "3. DC vs PBKS - April 5, 2025\n";
}

// Main function for user interaction
int main() {
    std::string user_input;

    std::cout << "Hello! I am your IPL chatbot. Ask me anything about IPL!\n";

    while (true) {
        std::cout << "What would you like to know? (type 'exit' to quit)\n";
        std::getline(std::cin, user_input);

        if (user_input == "exit") {
            std::cout << "Goodbye! Have a great day!\n";
            break;
        }
        else if (user_input == "teams") {
            showTeams();
        }
        else if (user_input == "players") {
            showPlayers();
        }
        else if (user_input == "schedule") {
            showSchedule();
        }
        else {
            std::cout << "Sorry, I don't understand that. Please try again.\n";
        }
    }

    return 0;
}
