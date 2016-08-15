#include <stdio.h>
#include <string>

class Effect;

#include "effect.hpp"

using namespace std;

class ChangeHPEffect : public Effect{
	public:
		explicit ChangeHPEffect(int h){
			hp = h;
		}
		
		void apply(Actor act){
			act.change_hp(hp);
		}
		
		void remove(Actor act){
			act.change_hp(-hp);
		}
		
	protected:
		int hp;
};
