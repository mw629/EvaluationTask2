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
	Novice::DrawBox(0, 0, 1280, 720, 0, 0x00FF00FF, kFillModeSolid);
}
