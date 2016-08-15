#include <stdio.h>
#include <string>
#include <vector>

#ifndef ITEM
#define ITEM

#include "effect.hpp"

using namespace std;

class Item{
	public:
		explicit Item(string n, string t);
	
		string get_type();
		
		string get_name();
		
		void equip(Actor act);
		
		void unequip(Actor act);
	
	protected:
		string name;
		string type;
		vector<Effect*> effects;
};

#endif