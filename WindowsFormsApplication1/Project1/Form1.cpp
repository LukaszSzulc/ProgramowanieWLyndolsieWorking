#include "Form1.h"

#include "Size.h"
#include "Point.h"

Form1::Form1()
{
	InitializeComponent();
}

Form1::~Form1()
{
}

void Form1::InitializeComponent()
{
	this->button1 = new WinToolkit::Forms::Button();
	this->button2 = new WinToolkit::Forms::Button();
	this->textbox = new WinToolkit::Forms::TextBox();
	this->label = new WinToolkit::Forms::Label();
	this->checkbox = new WinToolkit::Forms::CheckBox();
	this->radiobutton = new WinToolkit::Forms::RadioButton();

	#pragma region button1
	this->button1->Location = new WinToolkit::Drawing::Point(12, 12);
    this->button1->Name = "button1";
	this->button1->Size = new WinToolkit::Drawing::Size(75, 23);
    //this.button1.TabIndex = 0;
    this->button1->Text = "button1";
    //this.button1.UseVisualStyleBackColor = true;
	#pragma endregion

	#pragma region button2
	this->button2->Location = new WinToolkit::Drawing::Point(12, 42);
    this->button2->Name = "button2";
	this->button2->Size = new WinToolkit::Drawing::Size(75, 23);
    //this.button2.TabIndex = 0;
    this->button2->Text = "button2";
    //this.button2.UseVisualStyleBackColor = true;
	#pragma endregion

	#pragma region textbox
	// textbox
	this->textbox->Location = new WinToolkit::Drawing::Point(12, 72);
	this->textbox->Name = "textbox";
	this->textbox->Size = new WinToolkit::Drawing::Size(175, 23);
	this->textbox->Text = "Some text input";
	#pragma endregion

	#pragma region label
	// label
	this->label->Location = new WinToolkit::Drawing::Point(12, 102);
	this->label->Name = "label";
	this->label->Size = new WinToolkit::Drawing::Size(175, 23);
	this->label->Text = "Label";
	#pragma endregion

	#pragma region checkbox
	// checkbox
	this->checkbox->Location = new WinToolkit::Drawing::Point(12, 132);
	this->checkbox->Name = "checkbox";
	this->checkbox->Size = new WinToolkit::Drawing::Size(175, 23);
	this->checkbox->Text = "Checkbox";
	#pragma endregion

	#pragma region radiobutton
	this->radiobutton->Location = new WinToolkit::Drawing::Point(12, 162);
	this->radiobutton->Name = "radiobutton";
	this->radiobutton->Size = new WinToolkit::Drawing::Size(175, 23);
	this->radiobutton->Text = "Radio button";
	#pragma endregion

    // Form1
    //this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
    //this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
    this->ClientSize = new WinToolkit::Drawing::Size(284, 262);
    this->Controls->Add(this->button1);
	this->Controls->Add(this->button2);
	this->Controls->Add(this->textbox);
	this->Controls->Add(this->label);
	this->Controls->Add(this->checkbox);
	this->Controls->Add(this->radiobutton);

    this->Name = "Form1";
    this->Text = "Form1";
    this->ResumeLayout(false);
}