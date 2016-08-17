#include <stdio.h>
#include <string>

#include "actor.hpp"

using namespace std;

Actor::Actor(string n, string d, int h, int dmg){
	name = n;
	description = d;
	hp = max_hp = h;
	damage = dmg;
	items = ItemSlots();
}

void type(){
}
	
string get_name(){
	return name;
}

void action(){
	
}

void go(){
	
}

void fight(Actor act){
	
}
	
void pick_up(Item item){
	item.equip(this);
}

void drop(Item item){
	item.unequip(this);
}

void talk_to(Actor act){
	
}

void change_hp(int h){
	hp += h;
	max_hp += h;
	if(h < 0){
		if(hp <= 0){
			hp = 1;
		}
		if(max_hp <= 0){
			max_hp = 1;
		}
	}
}
	
void change_damage(int dmg){
	damage += dmg;
}
