#pragma once
#include "Character.h"
#include <string>
using namespace std;
class Trainer : // new class that inherits from class (Character) public data - shows intent to over write the inhereted virtual data 
    public Character
{
public:// new constructor
    Trainer(string name);
    string getHair();
    void setHair(string in_ht);
    void ThrowKicks();
};

