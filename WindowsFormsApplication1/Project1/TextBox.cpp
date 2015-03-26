#include "TextBox.h"
#include "Application.h"


namespace WinToolkit
{
	namespace Forms
	{

		TextBox::TextBox()
		{
		}


		TextBox::~TextBox()
		{
		}

		void TextBox::ResumeLayout(bool performLayout) {
			hWnd = CreateWindowEx(
				0,
				"Edit",
				this->Text,
				WS_TABSTOP | WS_VISIBLE | WS_CHILD | WS_BORDER,
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
