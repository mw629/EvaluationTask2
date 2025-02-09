#include "Object.h"
#pragma once
class Enemy : public Object
{
private:
	int reSpawnTime_;
public:
	Enemy();
	~Enemy();
	void Init();
	void Update();
	void Draw();
};

