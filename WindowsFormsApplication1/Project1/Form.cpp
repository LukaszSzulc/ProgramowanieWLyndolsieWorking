#include "Form.h"
#include "Application.h"

LRESULT CALLBACK WndProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
	return DefWindowProc(hWnd, Msg, wParam, lParam);
}

namespace WinToolkit
{
	namespace Forms
	{

		Form::Form()
		{
			Controls = new WinToolkit::Forms::ControlCollection(this);
		}

		Form::~Form()
		{
		}

		void Form::ResumeLayout(bool performLayout)
		{
			hWnd = NULL;

			WNDCLASSEX wce;

			wce.cbSize = sizeof(WNDCLASSEX);
			wce.style = 0;
			wce.lpfnWndProc = ::WndProc;
			wce.cbClsExtra = 0;
			wce.cbWndExtra = 0;
			wce.hInstance = Application::hInstance;
			wce.hIcon = LoadIcon(NULL, IDI_APPLICATION);
			wce.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
			wce.hCursor = LoadCursor(NULL, IDC_ARROW);
			wce.hbrBackground = (HBRUSH)COLOR_WINDOW;
			wce.lpszClassName = this->Name;
			wce.lpszMenuName = NULL;
	
			if(!RegisterClassEx(&wce))
			{
				return;
			}

			this->hWnd = CreateWindowEx(
				WS_EX_CLIENTEDGE,
				this->Name,
				this->Text,
				WS_OVERLAPPEDWINDOW,
				CW_USEDEFAULT,
				CW_USEDEFAULT,
				320,
				240,
				NULL,
				NULL,
				Application::hInstance,
				NULL
				);

			if(hWnd == NULL)
			{
				return;
			}

			std::list<Control*>::iterator i;
			for(i = this->Controls->begin(); i != this->Controls->end(); ++i)
			{
				(*i)->ResumeLayout(false);
			}

			ShowWindow(hWnd, Application::nCmdShow);
			UpdateWindow(hWnd);
		}

	}
}