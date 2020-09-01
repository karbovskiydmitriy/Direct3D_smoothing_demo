#ifndef __TYPES_H__
#define __TYPES_H__

#pragma once

#define Pointer void *

#define null ((Pointer)0)

#define CUSTOMFVF_VERTEX (D3DFVF_XYZ | D3DFVF_DIFFUSE)

struct Vertex
{
	float x, y, z;
	DWORD color;
};

struct Triangle
{
	byte vertices[3];
};

#endif // __TYPES_H__