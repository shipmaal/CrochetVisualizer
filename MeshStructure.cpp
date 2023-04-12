#include "pch.h"
#include "MeshStructure.h"

using namespace Crochet;

Section::Section()
{
}

void Section::AddVertex(DirectX::XMFLOAT3 pos, int row)
{
	Vertex vertex = { pos, row };
	mesh.vertices.push_back(vertex);
}

void Section::AddTriangle(unsigned int i0, unsigned int i1, unsigned int i2)
{
	Triangle triangle(i0, i1, i2);
	mesh.triangles.push_back(triangle);
}

