#pragma once

class Scene
{
protected:
	static bool isTransition;
public:
	virtual void Init();
	virtual void Update(char(&keys)[], char(&preKeys)[]);
	virtual void Draw();

	bool GetTransition() { return isTransition; };


	void SetTransition(bool transition) { isTransition = transition; };
};
