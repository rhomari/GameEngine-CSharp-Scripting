#include "GameObject.h"
#include <iostream>
void GameObject::setPosition(int x, int y)
{
	POSITION.X = x;
	POSITION.Y = y;
	

}



POS GameObject::getPosition()
{
	return POSITION;
}
