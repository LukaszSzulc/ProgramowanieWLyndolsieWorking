#ifndef APPLICATION_H
#define APPLICATION_H

#include "Form.h"
#include <windows.h>

namespace WinToolkit
{
	namespace Forms
	{
		class Application
		{
		private:
			static MSG msg;
		public:
			static HINSTANCE hInstance;
			static int nCmdShow;

		public:
			static void Run(WinToolkit::Forms::Form *form);
			static int GetExitCode();
		};
	}

}

#endif