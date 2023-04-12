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

	private:
		struct Vertex
		{
			XMFLOAT3 pos; // Vertex position (x, y, z)
			int row;
		};

		struct Triangle
		{
			unsigned int indices[3]; // Indices of the three vertices that make up the triangle
		};

		struct Mesh
		{
			std::vector<Vertex> vertices;   // List of vertices
			std::vector<Triangle> triangles; // List of triangles
		} mesh;

		void AddVertex(XMFLOAT3 pos, int row); // Add a vertex to the mesh
		void AddTriangle(unsigned int i0, unsigned int i1, unsigned int i2); // Add a triangle to the mesh
	};
}
