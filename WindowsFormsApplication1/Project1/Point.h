#ifndef POINT_H
#define POINT_H

namespace WinToolkit {

	namespace Drawing {

		typedef struct Point
		{
			int X;
			int Y;
			Point(int x, int y): X(x), Y(y) {}
		};
	}
}

#endif