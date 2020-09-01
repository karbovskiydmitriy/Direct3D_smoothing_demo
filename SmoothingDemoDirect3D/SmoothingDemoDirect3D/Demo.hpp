#ifndef __DEMO_HPP__
#define __DEMO_HPP__

#pragma once

#include <Windows.h>
#include <d3d9.h>
#include <d3dx9.h>
#include <math.h>
#include "Types.h"
#include "Cube.h"

#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "d3dx9.lib")

#define CAPTION "WinAPI program template"
#define MAIN_CLASS_NAME "TemplateClass"

#define BACK_COLOR D3DCOLOR_XRGB(127, 127, 255)

INT WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow);
LRESULT WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
void Init();
void AssignVertexBuffer(Vertex *vertices, int veticesCount);
void Draw();
void Deinit();
void Subdivide();
void GetSmoothPoint(Vertex *v1, Vertex *v2, Vertex *center, Vertex *result);
float GetVerticesDistance(Vertex *v1, Vertex *v2);
void Normalize(Vertex *v);

#endif // __DEMO_HPP__
