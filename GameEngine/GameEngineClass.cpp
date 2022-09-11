#include "GameEngineClass.h"
#include <iostream>
#include "GameObject.h"
float GameEngineClass::Speed = 0.0;
std::map<int, GameObject*> GameEngineClass::GameObjects ;


void GameEngineClass::createGameObject(int id) {
	
	std::cout << "C++ : Creating a new GameObject ID : " << id << std::endl;
	GameObject * go = new GameObject();
	
	GameEngineClass::GameObjects.insert(std::make_pair( id, go ));
	std::cout << "C++ : GameObject count : " << GameEngineClass::GameObjects.size() << std::endl;

}
void GameEngineClass::setPosition(int id,int x, int y) {

	
	GameEngineClass::GameObjects.find(id)->second->setPosition(x, y);
	std::cout << "C++ : GameObject " << id << " position is {" << x << "," << y << "}" << std::endl;

}
POS GameEngineClass::getPosition(int id) {
	
	
	return  GameEngineClass::GameObjects.find(id)->second->getPosition();
	

}
