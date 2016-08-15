#include <stdio.h>
#include <string>

#ifndef EFFECT
#define EFFECT

class Actor;

#include "actor.hpp"

using namespace std;

class Effect{
	public:
		explicit Effect();
	
		string type();
		
		string get_name();
		
		virtual void apply(Actor act) = 0;
		
		virtual void remove(Actor act) = 0;
};

#endif