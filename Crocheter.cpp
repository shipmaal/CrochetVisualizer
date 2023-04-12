#include "pch.h"
#include "Crocheter.h"


using namespace Crochet;

Crocheter::Crocheter()
{
}

Crocheter::~Crocheter()
{
}

void Crocheter::MagicRing(int stitches)
{
	section.AddVertex(XMFLOAT3(0.0f, 0.0f, 0.0f), 0);
	for (int i = 0; i < stitches; i++)
	{
		section.AddVertex(XMFLOAT3(cosf(XM_2PI * i / (stitches-1)), sinf(XM_2PI * i / (stitches - 1)), 0.0f), 1);
	}
	section.AddTriangle(0, 1, 2);
}


void Crocheter::SingleStitch()
{
}

void Crocheter::DecreaseStitch()
{
}

void Crocheter::IncreaseStitch()
{
}
