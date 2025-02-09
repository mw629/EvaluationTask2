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

	//Getter
	Vector2 GetBulletPos(int i) { return bullet_[i].GetPos(); }
	Vector2 GetBulletSize(int i) { return bullet_[i].GetSize(); }
	bool GetBulletIsActive(int i) { return bullet_[i].GetIsActive(); }
	//Setter
	void SetBulletPos(int i, Vector2 pos) { bullet_[i].SetPos(pos); }
	void SetBulletSize(int i, Vector2 size) { bullet_[i].SetSize(size); }
	void SetBulletVelocity(int i, Vector2 velocity) { bullet_[i].SetVelocity(velocity); }
	void SetBulletIsAlive(int i, bool isAlive) { bullet_[i].SetIsAlive(isAlive); }
	void SetBulletIsActive(int i, bool isActive) { bullet_[i].SetIsActive(isActive); }
};

