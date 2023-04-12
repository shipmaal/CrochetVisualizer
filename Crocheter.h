#pragma once

#include <vector>


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

		struct CrochetMesh
		{
			int index;
			int* connected;

		};

	private:
		int index;



	};


}