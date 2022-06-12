#include "Cadet.h"

Cadet::Cadet(std::string name):Character(name) {
	this->hp = rand() % 25 + 10;// random number from 10 - 25
}

std::string Cadet::getHair() {
	return this->ht; //return ht
}
void Cadet::setHair(std::string in_ht) {
	this->ht = in_ht;// hair type
}
void Cadet::BeatDown() {
	cout << "\n\nIm new lets play!!\n\n";//fighter talk
	cout << "Just quit.!!!\n\n";
	
}
void Cadet::Beat() {
	cout << "\n\nEnd of Round ";
	
}
