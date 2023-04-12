#pragma once

#include <vector>
#include <DirectXMath.h>


namespace Crochet
{

	struct Vertex
	{
		DirectX::XMFLOAT3 pos;
	};

	struct Link
	{
		unsigned int indices[2];
	};

	struct Mesh
	{
		std::vector<Vertex> vertices;
		std::vector<Link> links;
	};
}
