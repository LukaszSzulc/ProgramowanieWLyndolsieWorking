#ifndef BUTTON_H
#define BUTTON_H

#include "Control.h"

namespace WinToolkit
{
	namespace Forms {

		class Button : public Control
		{
		public:
			Button();
			~Button();
		public:
			void ResumeLayout(bool performLayout);
		};
	}

}

#endif