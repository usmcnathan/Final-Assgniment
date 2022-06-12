#include "Trainer.h"

Trainer::Trainer(string name) : Character(name) {
	this->hp = rand() % 25 + 10; //random number from 10 - 25
};

std::string Trainer::getHair() {
	return this->ht;//return hair type
}
void Trainer::setHair(string in_ht) {
	this->ht = in_ht;// hair type
}
void Trainer::ThrowKicks() {
	cout << "\n\nIplay smart!!\n\n";//fighter talk
	cout << "You Dont play...\n\n";
}
