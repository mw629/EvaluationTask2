#include "Player.h"
#include "math.h"
#include "Novice.h"

Player::Player()
{
	Init();
}
Player::~Player()
{
	delete[] bullet_;
}

void Player::Init()
{
	pos_.x = 640;
	pos_.y = 360;
	size_.x = 50;
	size_.y = 50;
	isAlive_ = true;
	for (int i = 0; i < 10; i++)
	{
		bullet_[i].Init(pos_);
	}
}

void Player::Move(char(&keys)[], char(&preKeys)[])
{
	if (keys[DIK_W])
	{
		pos_.y -= 10;
	}
	if (keys[DIK_S])
	{
		pos_.y += 10;
	}
	if (keys[DIK_A])
	{
		pos_.x -= 10;
	}
	if (keys[DIK_D])
	{
		pos_.x += 10;
	}
	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE])
	{
		for (int i = 0; i < 10; i++)
		{
			if (!bullet_[i].GetIsActive())
			{
				bullet_[i].SetIsActive(true);
				break;
			}
		}
	}
}


void Player::Update(char(&keys)[], char(&preKeys)[])
{
	if (isAlive_)
	{
		Move(keys, preKeys);
	}
	for (int i = 0; i < 10; i++)
	{
		bullet_[i].Update(pos_);
	}
}

void Player::Draw()
{
	for (int i = 0; i < 10; i++) {
		if (bullet_[i].GetIsActive()) {
			bullet_[i].Draw();
		}
	}
	if (isAlive_) {
		Novice::DrawBox(static_cast<int>(pos_.x - size_.x / 2.0f), static_cast<int>(pos_.y - size_.y / 2.0f),
			static_cast<int>(size_.x), static_cast<int>(size_.y),
			0.0f, GREEN, kFillModeSolid);
	}

}
