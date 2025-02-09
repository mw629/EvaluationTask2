#include "Novice.h"
#include "GameScene.h"
#include "TitleScene.h"
#include "MyMsth.h"
#include "math.h"

GameScene::GameScene()
{
	Init();
}

GameScene::~GameScene()
{
	delete player_;
	delete enemy_;
}


void GameScene::Collision()
{
	if(player_->GetIsAlive()&&enemy_->GetIsAlive())
	if (Distance(player_->GetPos(), enemy_->GetPos())
		<= player_->GetSize().x + enemy_->GetSize().x){
		player_->SetIsAlive(false);
	}
	for (int i = 0; i < 10; i++) {
		if(player_->GetBulletIsActive(i)&&enemy_->GetIsAlive())
		if (Distance(player_->GetBulletPos(i), enemy_->GetPos())
			<= player_->GetBulletSize(i).x+enemy_->GetSize().x) {
			player_->SetBulletIsActive(i,false);
			enemy_->SetIsAlive(false);
		}
	}
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
	Collision();

	if (keys[DIK_R] && !preKeys[DIK_R])
	{
		isTransition = true;
	}
	
}

void GameScene::Draw()
{
	Novice::DrawBox(0, 0, 1280, 720, 0, 0x00AAAAFF, kFillModeSolid);
	Novice::ScreenPrintf(0, 0, "WASD:Move　R:ReStart　SPACE:Shot");
	player_->Draw();
	enemy_->Draw();
}
