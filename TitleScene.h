#include "Scene.h"

#pragma once
class TitleScene : public Scene
{
public:
	TitleScene();
	~TitleScene();
	void Init() override;
	void Update(char(&keys)[], char(&preKeys)[]) override;
	void Draw() override;
};

