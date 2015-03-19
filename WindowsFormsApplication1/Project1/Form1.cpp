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
    //this.SuspendLayout();
	// 
	// button1
	// 
	this->button1->Location = new WinToolkit::Drawing::Point(12, 12);
    this->button1->Name = "button1";
	this->button1->Size = new WinToolkit::Drawing::Size(75, 23);
    //this.button1.TabIndex = 0;
    this->button1->Text = "button1";
    //this.button1.UseVisualStyleBackColor = true;

	// 
	// button2
	// 
	this->button2->Location = new WinToolkit::Drawing::Point(12, 42);
    this->button2->Name = "button2";
	this->button2->Size = new WinToolkit::Drawing::Size(75, 23);
    //this.button2.TabIndex = 0;
    this->button2->Text = "button2";
    //this.button2.UseVisualStyleBackColor = true;

    // 
    // Form1
    // 
    //this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
    //this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
    this->ClientSize = new WinToolkit::Drawing::Size(284, 262);
    this->Controls->Add(this->button1);
	this->Controls->Add(this->button2);
    this->Name = "Form1";
    this->Text = "Form1";
    this->ResumeLayout(false);
}