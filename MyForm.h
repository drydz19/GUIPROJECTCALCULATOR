#pragma once
#include "Homescreen.h"

namespace GUIPROJECTCALCULATOR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ backspace;
	protected:


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->backspace = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 35));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(51, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(218, 53);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Calculator";
			// 
			// backspace
			// 
			this->backspace->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backspace->Location = System::Drawing::Point(43, 203);
			this->backspace->Name = L"backspace";
			this->backspace->Size = System::Drawing::Size(48, 56);
			this->backspace->TabIndex = 2;
			this->backspace->Text = L"<=";
			this->backspace->UseVisualStyleBackColor = true;
			this->backspace->Click += gcnew System::EventHandler(this, &MyForm::backspace_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->button2->Location = System::Drawing::Point(97, 203);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(59, 56);
			this->button2->TabIndex = 3;
			this->button2->Text = L"CE";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->button3->Location = System::Drawing::Point(219, 203);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(58, 56);
			this->button3->TabIndex = 5;
			this->button3->Text = L"+/-";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->button4->Location = System::Drawing::Point(162, 203);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(51, 56);
			this->button4->TabIndex = 4;
			this->button4->Text = L"C";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->button5->Location = System::Drawing::Point(219, 265);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(58, 56);
			this->button5->TabIndex = 9;
			this->button5->Text = L"+";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->button6->Location = System::Drawing::Point(163, 265);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 56);
			this->button6->TabIndex = 8;
			this->button6->Text = L"7";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->button7->Location = System::Drawing::Point(97, 265);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 56);
			this->button7->TabIndex = 7;
			this->button7->Text = L"8";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->button8->Location = System::Drawing::Point(43, 265);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(48, 56);
			this->button8->TabIndex = 6;
			this->button8->Text = L"9";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->button9->Location = System::Drawing::Point(219, 327);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(58, 56);
			this->button9->TabIndex = 13;
			this->button9->Text = L"-";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->button10->Location = System::Drawing::Point(163, 327);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(50, 56);
			this->button10->TabIndex = 12;
			this->button10->Text = L"4";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->button11->Location = System::Drawing::Point(97, 327);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(60, 56);
			this->button11->TabIndex = 11;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->button12->Location = System::Drawing::Point(43, 327);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(48, 56);
			this->button12->TabIndex = 10;
			this->button12->Text = L"6";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->button13->Location = System::Drawing::Point(219, 389);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(58, 56);
			this->button13->TabIndex = 17;
			this->button13->Text = L"/";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->button14->Location = System::Drawing::Point(163, 389);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(50, 56);
			this->button14->TabIndex = 16;
			this->button14->Text = L"1";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->button15->Location = System::Drawing::Point(97, 389);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(60, 56);
			this->button15->TabIndex = 15;
			this->button15->Text = L"2";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->button16->Location = System::Drawing::Point(43, 389);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(48, 56);
			this->button16->TabIndex = 14;
			this->button16->Text = L"3";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->button17->Location = System::Drawing::Point(219, 451);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(58, 56);
			this->button17->TabIndex = 21;
			this->button17->Text = L"*";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->button18->Location = System::Drawing::Point(163, 451);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(50, 56);
			this->button18->TabIndex = 20;
			this->button18->Text = L"=";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->button19->Location = System::Drawing::Point(97, 451);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(60, 56);
			this->button19->TabIndex = 19;
			this->button19->Text = L"0";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->button20->Location = System::Drawing::Point(43, 451);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(48, 56);
			this->button20->TabIndex = 18;
			this->button20->Text = L".";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(67, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(69, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 23;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->textBox1->Location = System::Drawing::Point(43, 130);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(234, 55);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13));
			this->label4->Location = System::Drawing::Point(67, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 20);
			this->label4->TabIndex = 24;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->Location = System::Drawing::Point(132, 513);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 42);
			this->button1->TabIndex = 25;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(318, 587);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->backspace);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double iFirstnum;
		double iSecondnum;
		double iResult;
		String^ iOperator;

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//button C
		textBox1->Text = "0";
		label3->Text = "";

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//button CE

		textBox1->Text = "0";
}
private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {


		Button^ Numbers = safe_cast<Button^>(sender);

		if (textBox1->Text == "0")
		{
			textBox1->Text = Numbers->Text;
		}
		else
		{
			textBox1->Text = textBox1->Text + Numbers->Text;

		}

}
private: System::Void Arithmetic(System::Object^ sender, System::EventArgs^ e) {

		Button ^ oper = safe_cast<Button^>(sender);
		iFirstnum = Double::Parse(textBox1->Text);
		textBox1->Text = "";
		iOperator = oper->Text;
		label3->Text = System::Convert::ToString(iFirstnum) + " " + iOperator;
}		
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {

	label3->Text = "";
	iSecondnum = Double::Parse(textBox1->Text);

	if (iOperator == "+")
	{
		iResult = iFirstnum + iSecondnum;
		textBox1->Text = System::Convert::ToString(iResult);
	}
	else if (iOperator == "-")
	{
		iResult = iFirstnum - iSecondnum;
		textBox1->Text = System::Convert::ToString(iResult);
	}
	else if (iOperator == "*")
	{
		iResult = iFirstnum * iSecondnum;
		textBox1->Text = System::Convert::ToString(iResult);
	}
	else if (iOperator == "/")
	{
		iResult = iFirstnum / iSecondnum;
		textBox1->Text = System::Convert::ToString(iResult);
	}

}
private: System::Void backspace_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Length > 0)
	{
		textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length-1, 1);
	}
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "")
	{
		textBox1->Text = "0";
	}
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!textBox1->Text->Contains("."))
	{
		textBox1->Text = textBox1->Text + ".";
	}

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Contains("-"))
	{
		textBox1->Text = textBox1->Text->Remove(0, 1);
	}
	else
	{
		textBox1->Text = "-" + textBox1->Text;
	}


}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide();
	Homescreen^ f8 = gcnew Homescreen;
	f8->ShowDialog();
	

}
};
}
