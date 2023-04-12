#pragma once

#include <vector>
#include <DirectXMath.h>

using namespace DirectX;

namespace Crochet
{
	class Section
	{
	public:
		Section(); // Constructor

		void AddVertex(XMFLOAT3 pos, int row); // Add a vertex to the mesh
		void AddTriangle(unsigned int i0, unsigned int i1, unsigned int i2); // Add a triangle to the mesh

	private:
		struct Vertex
		{
			XMFLOAT3 pos; // Vertex position (x, y, z)
			int row; // Row of the vertex in the mesh
		};

		struct Triangle
		{
			unsigned int indices[3]; // Indices of the three vertices that make up the triangle

			Triangle(unsigned int i0, unsigned int i1, unsigned int i2)
			{
				indices[0] = i0;
				indices[1] = i1;
				indices[2] = i2;
			}
		};

		struct Mesh
		{
			std::vector<Vertex> vertices;   // List of vertices
			std::vector<Triangle> triangles; // List of triangles
		} mesh;

		
	};
}
