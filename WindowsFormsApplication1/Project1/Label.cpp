#include "Label.h"
#include "Application.h"


namespace WinToolkit
{
	namespace Forms
	{

		Label::Label()
		{
		}


		Label::~Label()
		{
		}

		void Label::ResumeLayout(bool performLayout) {
			hWnd = CreateWindowEx(
				0,
				"Static",
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
