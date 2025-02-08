#include "Scene.h"
#include "Player.h"
#include "Enemy.h"
#include "Bullet.h"

#pragma once
class GameScene : public Scene
{
private:
	Player* player_ = new Player();
	Enemy* enemy_ = new Enemy();
public:
	GameScene();
	~GameScene();
	void Init() override;
	void Update(char(&keys)[], char(&preKeys)[]) override;
	void Draw() override;
};

