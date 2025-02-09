#include "Novice.h"
#include "Enemy.h"

Enemy::Enemy()
{
	reSpawnTime_ = 0;
}

Enemy::~Enemy()
{
}

void Enemy::Init()
{
	pos_ = { 100,100 };
	size_ = { 50,50 };
	velocity_ = { -10,0 };
}

void Enemy::Update()
{
	if (!isAlive_){
		Init();
		reSpawnTime_++;
		if (reSpawnTime_ == 120){
			isAlive_ = true;
			reSpawnTime_ = 0;
		}
	}
	if (isAlive_){
		pos_.x += velocity_.x;
		if (pos_.x < 0 + size_.x || pos_.x > 1280 - size_.x)
		{
			velocity_.x *= -1;
		}
	}
}

void Enemy::Draw()
{
	if (isAlive_) {
		Novice::DrawEllipse(static_cast<int>(pos_.x), static_cast<int>(pos_.y),
			static_cast<int>(size_.x), static_cast<int>(size_.y), 0.0f, RED, kFillModeSolid);
	}
}
