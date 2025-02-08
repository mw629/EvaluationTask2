#include "Scene.h"
#include "Novice.h"

void Scene::Init()
{
}

void Scene::Update(char(&keys)[], char(&preKeys)[])
{
	if(keys[DIK_RETURN] && !preKeys[DIK_RETURN])
	{
		isTransition = true;
	}
}

void Scene::Draw()
{
	
}
