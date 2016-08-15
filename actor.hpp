#include <stdio.h>
#include <string>

#ifndef ACTOR
#define ACTOR

#include "item.hpp"

using namespace std;

class Actor{
	public:
		explicit Actor(string n, int h, int dmg);
	
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
		string name;
		int hp;
		int max_hp;
		int damage;
};

#endif