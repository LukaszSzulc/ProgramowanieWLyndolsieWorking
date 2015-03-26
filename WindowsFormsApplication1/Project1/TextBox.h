#pragma once

#include "Control.h"

namespace WinToolkit
{
	namespace Forms {

		class TextBox : public Control
		{
		public:
			TextBox();
			~TextBox();
			void ResumeLayout(bool performLayout);
		};
	}
}
