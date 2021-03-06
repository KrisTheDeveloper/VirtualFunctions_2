// VirtualFunctions_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
	string sRoar = "Moo";
	string sType = "Animal";

public:
	virtual void Roar()
	{
		cout << this->sRoar << " " << this->sType << endl;
	}
};

class Horse : public Animal
{
protected:
	string sRoar = "Nay";

public:
	void Roar()
	{
		cout << this->sRoar << " " << this->sType << endl;
	}
};

class Pig : public Animal
{
protected:
	string sRoar = "Oink";

public:
	void Roar()
	{
		cout << this->sRoar << " " << this->sType << endl;
	}
};

int main()
{
	Animal *animal = new Animal;
	Animal *horse = new Horse;
	Animal *pig = new Pig;
	animal->Roar();
	horse->Roar();
	pig->Roar();
}