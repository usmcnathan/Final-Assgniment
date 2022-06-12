#include "Character.h"
#include <iostream>
using namespace std;
Character::Character(std::string name) {
	this->name = name; //instance of Character assigns health and hitpoints
	this->health = 100; // gives health when name is assigned
	this->hp = hp;
} //defining Character(std::string name) from .h
// instatiation period?? when object becomes instance of class (Character)

void Character::loseHealth(int hit) {//takes in int and reduces health by x amount 
	this->health -= hit;
	if (this->health < 0)
	{
		this->health = 0;// protects health from going negative
	}
	
}
void Character::main() {//main entry into  combat Game
	cout << "\n\n!!!!!Welcome to the Training Simulation!!\n";
	system("pause");
	cout << "\n\nThis is is going to be fun\n"
		"\nYou should do ok you do have basic training,\n"
		"\ncorrect.!!!\n";
	system("pause");
}

void Character::Dead() {//dead character health from Tai or Jitsu
	cout << "\n\n You have died!!!\n";
	this->health = 0;
	cout << "\n\nHealth = " << health << "!";
	return main();
}
void Character::EndGame() {//Choice to leave before gameplay
	bool play;
	cout << "\n\nWould you like to continue?\n";
	cout << "\nEnter 1 for yes, 0 for no"<<endl;
	cin >> play;
	if (play == true) {
		cout << "\nGet Ready Start Simulation.....";
	}
	else if (play == false) {//anything but a 1
		cout << "\n\nOk Bye!!";
		return Dead();
	}
	

}

int Character::getHealth() {
	return this->health;//show health
}

int Character::attack() {
	return this->hp;//show hit points
}
