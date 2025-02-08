#include "Structure.h"
#pragma once
class Object
{
protected:
	Vector2 pos_;
	Vector2 size_;
	Vector2 velocity_;

	bool isAlive_;
	bool isActive_;
public:


	//セッター
	void SetPos(Vector2 pos) { pos_ = pos; }
	void SetSize(Vector2 size) { size_ = size; }
	void SetVelocity(Vector2 velocity) { velocity_ = velocity; }
	void SetIsAlive(bool isAlive) { isAlive_ = isAlive; }
	void SetIsActive(bool isActive) { isActive_ = isActive; }


	//ゲッター
	Vector2 GetPos() { return pos_; }
	Vector2 GetSize() { return size_; }
	Vector2 GetVelocity() { return velocity_; }
	bool GetIsAlive() { return isAlive_; }
	bool GetIsActive() { return isActive_; }
};
