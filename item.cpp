#include <stdio.h>
#include <string>

#include "item.hpp"

using namespace std;

explicit Item::Item(string n, string t){
	name = n;
	type = t;
}

string Item::get_type(){
	return type;
}

string Item::get_name(){
	return name;
}
		
void Item::equip(Actor act){
	iterator start = *effects.begin();
	for(start; start != *effects.end(); ++start){
		Effect eff = *start;
		eff.apply(act);
	}
}
		
void Item::unequip(Actor act){
	iterator start = *effects.begin();
	for(start; start != *effects.end(); ++start){
		Effect eff = *start;
		eff.remove(act);
	}
}

#endif