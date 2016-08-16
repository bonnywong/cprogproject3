#include <iostream> 
#include <string>
#include <vector>
#include <fstream>

#include "json.hpp"
using nlohmann::json;

class world {

public:
    world();
    ~world();

    void load_resources();
    void introduction();
    void player_creation();
    void parse_command(std::string command);
    void command_loop();

private:
    //std::vector<Actor> actors;
    //std::vector<Environment> environments;
};

world::world() {
    load_resources();
    introduction();
    player_creation();
    command_loop();
}

world::~world()
{
    //Deallokera allt.
}

//Ladda aktörerna och miljöerna som är definierade i JSON filerna.
void world::load_resources() {
    //Remember to set the path right.
    std::ifstream env_file("data/environments.json");
    std::ifstream actor_file("data/npcs.json");

    json env_json;
    json actor_json;

    env_json << env_file;
    actor_json << actor_file;

    std::cout << env_json.dump() << std::endl;
    std::cout << "WHAT IS GOING ON!";
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
