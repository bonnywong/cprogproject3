#include <stdio.h>
#include <string>

#ifndef ACTOR
#define ACTOR

#include "item.hpp"
#include "environment.hpp"

using namespace std;

class Actor{
	public:
		Actor();
		explicit Actor(string n, string d, int h, int dmg);
	
		void type();
		
		string get_name();
		
		void action();
		void go();
		
		void fight(Actor act);
		void talk_to(Actor act);
		
		void pick_up(Item item);
		void drop(Item item);
		
		void change_hp(int h);
		void change_damage(int dmg);
		
	protected:
		vector<Item> player_items;
		Environment current_location;
		string name;
		string description;
		int hp;
		int max_hp;
		int damage;
};

#endif
