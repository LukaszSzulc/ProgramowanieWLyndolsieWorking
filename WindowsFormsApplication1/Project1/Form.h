#ifndef FORM_H
#define FORM_H

#include <windows.h>
#include "Size.h"
#include "ControlCollection.h"
#include "Control.h"

namespace WinToolkit
{
	namespace Forms
	{

		class Form : public Control
		{
		public:			
			WinToolkit::Drawing::Size *ClientSize;
		public:
			Form();
			~Form();
		public:
			WinToolkit::Forms::ControlCollection *Controls;
			void ResumeLayout(bool performLayout);
		};

	}

}

#endif