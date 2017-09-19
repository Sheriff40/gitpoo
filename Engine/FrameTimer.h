#pragma once
#include <chrono>

class FrameTime
{
private:
	std::chrono::steady_clock::time_point last;
public:
	FrameTime()
	{
		 last = std::chrono::steady_clock::now();
	}
	float Mark();
};