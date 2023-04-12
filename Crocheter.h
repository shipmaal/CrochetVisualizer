#pragma once

#include <vector>

#include "MeshStructure.h"


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


	private:
		int index;
		Section section;



	};


}