#pragma once

#include <vector>

#include "MeshStructures.h"

namespace Crochet
{

	class Crocheter
	{
	public:
		Crocheter();
		~Crocheter();
		void MagicRing(int stitches);
		void SingleStitch();
		void DecreaseStitch();
		void IncreaseStitch();

		Mesh mesh;

	private:
		int index;



	};


}