#include "Object.h"
#include "Bullet.h"

#pragma once
class Player : public Object
{
private:
	Bullet* bullet_=new Bullet[10]();
public:
	Player();
	~Player();


	void Move(char(&keys)[], char(&preKeys)[]);

	void Init();
	void Update(char(&keys)[], char(&preKeys)[]);
	void Draw();
};

