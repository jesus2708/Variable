#include "stdafx.h"  //________________________________________ Variables.cpp
#include "Variables.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Variables app;
	return app.BeginDialog(IDI_Variables, hInstance);
}

void Variables::Window_Open(Win::Event& e)
{
	int temperatura = 24;
	int peso = 60;
	wstring texto;
	peso /= (int)10.5;

	Sys::Format(texto, L"(%i, %i)->(%i, %i)", temperatura / 2, 5 + temperatura, peso * 2, peso - 1);
	this->MessageBox(texto, L"Resultado", MB_OK);
}

