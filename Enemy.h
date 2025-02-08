#include "Object.h"
#pragma once
class Enemy : public Object
{
public:
	Enemy();
	~Enemy();
	void Init();
	void Update();
	void Draw();
};

