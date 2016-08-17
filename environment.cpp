#include <stdio.h>
#include <string>
#include <vector>
#include "environment.hpp"

using namespace std;

class Environment {

public:

	//Vektorer för aktörer och object. 

	explicit Environment(string name, string description) {
		name = name;
		description = description;
	}

	void directions() {

	}

	Environment& neighbor() {

	}
	string get_name() {
		return name;
	}
	string get_description() {
		return description;
	}

	void enter(Actor actor) {
	}

	void leave(Actor actor) {
	}
};
