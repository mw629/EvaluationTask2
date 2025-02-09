#include <Novice.h>
#include "Structure.h"
#include "math.h"

#pragma once

float Distance(Vector2 pos1, Vector2 pos2)
{
	float distance = static_cast<float>(sqrt((pos1.x - pos2.x) * (pos1.x - pos2.x) + (pos1.y - pos2.y) * (pos1.y - pos2.y)));
	return distance;
}
