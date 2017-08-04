#include "score.h"

void score::DrawScore(Graphics &gfx, int score1)
{
	gfx.DrawRectDim(x, y, width*score1, height,Colors::Blue);
	
}
