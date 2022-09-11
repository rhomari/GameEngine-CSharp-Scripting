#define _CRT_SECURE_NO_WARNINGS
#include "GameEngineClass.h"
#include "Glue.h"
#include <iostream>


extern "C" __declspec(dllexport) void createGameObject(int id) {

	GameEngineClass::createGameObject(id);
	
}
extern "C"  __declspec(dllexport) void setPosition(int id, int x, int y) {
	
	GameEngineClass::setPosition(id, x, y);
}
extern "C"  __declspec(dllexport) POS getPosition(int id) {
	
	return GameEngineClass::getPosition(id);
	
}

