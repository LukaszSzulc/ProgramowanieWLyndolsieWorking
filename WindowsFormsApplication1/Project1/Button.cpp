#include "Button.h"
#include "Application.h"

namespace WinToolkit
{
	namespace Forms
	{

		Button::Button()
		{
		}

		Button::~Button()
		{
		}

		void Button::ResumeLayout(bool performLayout)
		{
			hWnd = CreateWindowEx(
				0,
				"Button",
				this->Text,
				WS_TABSTOP | WS_VISIBLE | WS_CHILD,
				this->Location->X,
				this->Location->Y,
				this->Size->Width,
				this->Size->Height,
				parent->hWnd,
				NULL,
				Application::hInstance,
				NULL
				);
		}

	}
}