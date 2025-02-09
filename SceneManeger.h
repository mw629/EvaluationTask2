
#include "Scene.h"
#include "GameScene.h"
#include "TitleScene.h"

#pragma once
class SceneManeger
{
private:
	Scene* scene;
	int nowScene;//0:TitleScene 1:GameScene
public:
	SceneManeger();
	~SceneManeger();

	void Update(char(&keys)[], char(&preKeys)[]);
	void Draw();
};

