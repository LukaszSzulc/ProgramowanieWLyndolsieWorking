#include "Application.h"

namespace WinToolkit
{
	namespace Forms
	{
		MSG Application::msg;
		HINSTANCE Application::hInstance = NULL;
		int Application::nCmdShow = 0;

		void Application::Run(WinToolkit::Forms::Form *form)
		{
			if(form->hWnd == NULL)
			{
				msg.wParam = -1;
				return;
			}

			while(GetMessage(&msg, NULL, 0, 0))
			{
				TranslateMessage(&msg);
				DispatchMessage(&msg);
			}
		}

		int Application::GetExitCode()
		{
			return msg.wParam;
		}
	}
}