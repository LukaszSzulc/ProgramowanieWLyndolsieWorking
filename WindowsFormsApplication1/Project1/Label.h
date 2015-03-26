#ifndef LABEL_H
#define LABEL_H

#include "Control.h"

namespace WinToolkit
{
	namespace Forms {

		class Label : public Control
		{
		public:
			Label();
			~Label();
		public:
			void ResumeLayout(bool performLayout);
		};
	}

}

#endif