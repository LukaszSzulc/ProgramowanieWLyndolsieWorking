#ifndef RADIOBOX_H
#define RADIOBOX_H

#include "Control.h"

namespace WinToolkit
{
	namespace Forms {

		class RadioButton : public Control
		{
		public:
			RadioButton();
			~RadioButton();
		public:
			void ResumeLayout(bool performLayout);
		};
	}

}

#endif