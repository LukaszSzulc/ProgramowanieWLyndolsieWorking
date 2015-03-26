#include "RadioButton.h"
#include "Application.h"


namespace WinToolkit
{
	namespace Forms
	{

		RadioButton::RadioButton()
		{
		}


		RadioButton::~RadioButton()
		{
		}

		void RadioButton::ResumeLayout(bool performLayout) {
			hWnd = CreateWindowEx(
				0,
				"Button",
				this->Text,
				WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_RADIOBUTTON,
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
