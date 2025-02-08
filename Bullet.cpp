#include "Bullet.h"
#include "Novice.h"

Bullet::Bullet()
{

}

Bullet::~Bullet()
{
}

void Bullet::Init(Vector2 pos)
{
	pos_ = pos;
	size_ = { 10.0f, 10.0f };
	isActive_ = false;
}

void Bullet::Update(Vector2 pos)
{
	if (!isActive_)
	{
		Init(pos);
	}
	if (isActive_)
	{
		pos_.y -= 10;
		if (pos_.y < 0)
		{
			isActive_ = false;
		}
	}
}

void Bullet::Draw()
{
	if (isActive_)
	{
		Novice::DrawEllipse(static_cast<int>(pos_.x), static_cast<int>(pos_.y),
			static_cast<int>(size_.x), static_cast<int>(size_.y), 0, BLACK, kFillModeSolid);
	}
}
