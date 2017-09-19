#include "FrameTimer.h"
float FrameTime::Mark()
{
	std::chrono::steady_clock::time_point old = last;
	last = std::chrono::steady_clock::now();
	std::chrono::duration <float> runtime = last - old;
	return runtime.count();
}
