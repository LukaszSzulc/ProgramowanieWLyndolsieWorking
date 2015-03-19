#include <windows.h>
#include "Program.h"
#include "Application.h"
#include "Form1.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, 
				   LPSTR lpCmdLine, int nCmdShow)
{
	WinToolkit::Forms::Application::hInstance = hInstance;
	WinToolkit::Forms::Application::nCmdShow = nCmdShow;
	Program::Main();
	return WinToolkit::Forms::Application::GetExitCode();
}

void Program::Main()
{
	WinToolkit::Forms::Application::Run(new Form1());
}