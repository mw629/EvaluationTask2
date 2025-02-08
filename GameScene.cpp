#include "Novice.h"
#include "GameScene.h"
#include "TitleScene.h"

GameScene::GameScene()
{
	Init();
}

GameScene::~GameScene()
{
	delete player_;
	delete enemy_;
}

void GameScene::Init()
{
	player_->Init();
	enemy_->Init();
}

void GameScene::Update(char(&keys)[], char(&preKeys)[])
{
	player_->Update(keys, preKeys);
	enemy_->Update();
	if (keys[DIK_R] && !preKeys[DIK_R])
	{
		isTransition = true;
	}
	
}

void GameScene::Draw()
{
	Novice::DrawBox(0, 0, 1280, 720, 0, 0x00AAAAFF, kFillModeSolid);

	player_->Draw();
	enemy_->Draw();
}
