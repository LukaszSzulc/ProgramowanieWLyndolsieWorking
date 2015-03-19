#ifndef CONTROL_H
#define CONTROL_H

#include <windows.h>
#include "Size.h"
#include "Point.h"

namespace WinToolkit
{
	namespace Forms
	{
		class Control
		{
		public:
			HWND hWnd;
			LPSTR Name;
			LPSTR Text;
			WinToolkit::Drawing::Point *Location;
			WinToolkit::Drawing::Size *Size;
		public:
			Control();
			~Control();
		public:
			virtual void ResumeLayout(bool performLayout);
		public:
			Control *parent;
		};
	}
}

#endif