#include "Novice.h"
#include "Enemy.h"

Enemy::Enemy()
{
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
	pos_.x += velocity_.x;
	if (pos_.x < 0+size_.x || pos_.x > 1280-size_.x)
	{
		velocity_.x *= -1;
	}
}

void Enemy::Draw()
{
	Novice::DrawEllipse(static_cast<int>(pos_.x), static_cast<int>(pos_.y), 
		static_cast<int>(size_.x), static_cast<int>(size_.y),0.0f,RED,kFillModeSolid);
}
