#ifndef FORM1_H
#define FORM1_H

#include "Form.h"
#include "Button.h"
#include "TextBox.h"
#include "Label.h"
#include "CheckBox.h"
#include "RadioButton.h"


class Form1 : public WinToolkit::Forms::Form
{
public:
	Form1();
	~Form1();
private:
	void InitializeComponent();
private:
	WinToolkit::Forms::Button *button1;
	WinToolkit::Forms::Button *button2;
	WinToolkit::Forms::TextBox *textbox;
	WinToolkit::Forms::Label *label;
	WinToolkit::Forms::CheckBox *checkbox;
	WinToolkit::Forms::RadioButton *radiobutton;
};

#endif