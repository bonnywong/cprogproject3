//
// Created by swebo_000 on 2016-08-15.
//

#ifndef CPROGPROJECT3_WORLD_H
#define CPROGPROJECT3_WORLD_H
#include <string>

class world {

public:
    world();
    ~world();
    void introduction();
    void player_creation();
    void parse_command(std::string);
    void command_loop();

};


#endif //CPROGPROJECT3_WORLD_H
