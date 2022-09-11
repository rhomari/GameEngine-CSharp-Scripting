#pragma once
#include <iostream>
#include <map>
#include "GameObject.h"
class GameEngineClass
{
private :
	static float Speed;
public :
	static void createGameObject(int);
	static std::map < int, GameObject  *> GameObjects;
	static void setPosition(int , int , int);
	static POS getPosition(int);
};

