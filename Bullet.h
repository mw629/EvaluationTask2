#include "Object.h"
#include "Structure.h"

#pragma once
class Bullet : public Object
{
public:
	Bullet();
	~Bullet();

	void Init(Vector2 pos);
	void Update(Vector2 pos);
	void Draw();
};

