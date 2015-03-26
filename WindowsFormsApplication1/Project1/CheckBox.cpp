#include "CheckBox.h"
#include "Application.h"


namespace WinToolkit
{
	namespace Forms
	{

		CheckBox::CheckBox()
		{
		}


		CheckBox::~CheckBox()
		{
		}

		void CheckBox::ResumeLayout(bool performLayout) {
			hWnd = CreateWindowEx(
				0,
				"Button",
				this->Text,
				WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_CHECKBOX,
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
