#include "SceneManeger.h"

SceneManeger::SceneManeger()
{
	scene = new TitleScene;
	nowScene = 0;
}
SceneManeger::~SceneManeger()
{
	delete scene;
}
void SceneManeger::Update(char(&keys)[], char(&preKeys)[])
{
	if (scene->GetTransition()) {
		delete scene;
		if (nowScene == 0) {
			scene = new GameScene;
			nowScene = 1;
		}
		else {
			scene = new TitleScene;
			nowScene = 0;
		}
		scene->SetTransition(false);
	}
	scene->Update(keys, preKeys);
}

void SceneManeger::Draw()
{
	scene->Draw();
}
