#include <iostream> 
#include <string>
#include <vector>

class world {

public:
    world();
    ~world();

    void introduction();
    void player_creation();
    void parse_command(std::string command);
    void command_loop();

private:
    //std::vector<Actor> actors;
    //std::vector<Environment> environments;
};

world::world() {
    introduction();
    player_creation();
    command_loop();
}

world::~world()
{
    //Deallokera allt.
}

void world::introduction() {
    std::cout << "Welcome to Help RTZ ruin DC!" << std::endl;
}

//För att hantera skapandet av en aktör
void world::player_creation() {
    std::string playerName;
    std::cout << "This is the main input loop. Enter your name." << std::endl;
    std::cin >> playerName;
    //eventuellt andra attributer som vi använder för att skapa en spelare.
    std::cout << "Your name is: " << playerName << ". " << std::endl;
}

//Hantering av kommando. 
void world::parse_command(std::string command) {
    std::cout << "parsed command: " << command << std::endl;
}

void world::command_loop() {

    std::string command;

    while (1) {
        std::cout << "This will now echo everything written to the terminal." << std::endl;
        std::cin >> command;
        std::cout << "Command: " << command << std::endl;
    }
}
