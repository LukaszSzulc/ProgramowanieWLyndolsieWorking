#ifndef CHECKBOX_H
#define CHECKBOX_H

#include "Control.h"

namespace WinToolkit
{
	namespace Forms {

		class CheckBox : public Control
		{
		public:
			CheckBox();
			~CheckBox();
		public:
			void ResumeLayout(bool performLayout);
		};
	}

}

#endif