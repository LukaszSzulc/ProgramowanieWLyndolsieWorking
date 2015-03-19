#include "ControlCollection.h"

namespace WinToolkit
{
	namespace Forms
	{
		ControlCollection::ControlCollection(Control *owner)
		{
			this->owner = owner;
		}

		void ControlCollection::Add(Control *control)
		{
			control->parent = this->owner;
			this->push_back(control);
		}
	}
}