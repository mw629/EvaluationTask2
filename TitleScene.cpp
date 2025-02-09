#include "Novice.h"
#include "TitleScene.h"

TitleScene::TitleScene()
{
}

TitleScene::~TitleScene()
{
}

void TitleScene::Init()
{
}

void TitleScene::Update( char(&keys)[], char(&preKeys)[])
{
	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE])
	{
		isTransition = true;
	}
}

void TitleScene::Draw()
{
	Novice::DrawBox(0, 0, 1280, 720, 0, 0xFF0000FF, kFillModeSolid);
	Novice::ScreenPrintf(600, 300, "-SPACE-");
}
