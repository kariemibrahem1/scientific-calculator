#pragma once
#include<cmath>
#include<math.h>
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include <string>

namespace OurCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	
	//// Sum Function
	string findSum(string str1, string str2)
	{
		// Before proceeding further, make sure length
		// of str2 is larger.
		if (str1.length() > str2.length())
			swap(str1, str2);

		// Take an empty string for storing result
		string str = "";

		// Calculate length of both string
		int n1 = str1.length(), n2 = str2.length();

		// Reverse both of strings
		reverse(str1.begin(), str1.end());
		reverse(str2.begin(), str2.end());

		int carry = 0;
		for (int i = 0; i < n1; i++)
		{
			// Do school mathematics, compute sum of
			// current digits and carry
			int sum = ((str1[i] - '0') + (str2[i] - '0') + carry);
			str.push_back(sum % 10 + '0');

			// Calculate carry for next step
			carry = sum / 10;
		}

		// Add remaining digits of larger number
		for (int i = n1; i < n2; i++)
		{
			int sum = ((str2[i] - '0') + carry);
			str.push_back(sum % 10 + '0');
			carry = sum / 10;
		}

		// Add remaining carry
		if (carry)
			str.push_back(carry + '0');

		// reverse resultant string
		reverse(str.begin(), str.end());

		return str;
	}
	//////////////////////////////////

	// Returns true if str1 is smaller than str2.
	bool isSmaller(string str1, string str2)
	{
		// Calculate lengths of both string
		int n1 = str1.length(), n2 = str2.length();

		if (n1 < n2)
			return true;
		if (n2 < n1)
			return false;

		for (int i = 0; i < n1; i++)
			if (str1[i] < str2[i])
				return true;
			else if (str1[i] > str2[i])
				return false;

		return false;
	}

	// Function for find difference of larger numbers
	string findDiff(string str1, string str2)
	{
		// Before proceeding further, make sure str1
		// is not smaller
		if (isSmaller(str1, str2))
			swap(str1, str2);

		// Take an empty string for storing result
		string str = "";

		// Calculate length of both string
		int n1 = str1.length(), n2 = str2.length();

		// Reverse both of strings
		reverse(str1.begin(), str1.end());
		reverse(str2.begin(), str2.end());

		int carry = 0;

		// Run loop till small string length
		// and subtract digit of str1 to str2
		for (int i = 0; i < n2; i++) {
			// Do school mathematics, compute difference of
			// current digits

			int sub
				= ((str1[i] - '0') - (str2[i] - '0') - carry);

			// If subtraction is less then zero
			// we add then we add 10 into sub and
			// take carry as 1 for calculating next step
			if (sub < 0) {
				sub = sub + 10;
				carry = 1;
			}
			else
				carry = 0;

			str.push_back(sub + '0');
		}

		// subtract remaining digits of larger number
		for (int i = n2; i < n1; i++) {
			int sub = ((str1[i] - '0') - carry);

			// if the sub value is -ve, then make it positive
			if (sub < 0) {
				sub = sub + 10;
				carry = 1;
			}
			else
				carry = 0;

			str.push_back(sub + '0');
		}

		// reverse resultant string
		reverse(str.begin(), str.end());

		return str;
	}



	public ref class MyForm : public System::Windows::Forms::Form
	{

		double number1, number2, result;
		System::String^ num1;////////////////////////////////////
		System::String^ num2;
		char op;
		bool x = false;

	private: System::Windows::Forms::Button^ button27;

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
	private: System::Windows::Forms::TextBox^ txt;
	protected:

	protected:






	private: System::Windows::Forms::Button^ button1;
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

	private: System::Windows::Forms::Button^ button21;


	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;



	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button26;








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->txt = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txt
			// 
			this->txt->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txt->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt->ForeColor = System::Drawing::Color::DarkTurquoise;
			this->txt->Location = System::Drawing::Point(12, 7);
			this->txt->Multiline = true;
			this->txt->Name = L"txt";
			this->txt->Size = System::Drawing::Size(804, 108);
			this->txt->TabIndex = 1;
			this->txt->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->txt->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt_KeyPress);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button1->Font = (gcnew System::Drawing::Font(L"Wingdings", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->button1->ForeColor = System::Drawing::Color::Aqua;
			this->button1->Location = System::Drawing::Point(10, 125);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(162, 72);
			this->button1->TabIndex = 2;
			this->button1->Text = L"";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Aqua;
			this->button2->Location = System::Drawing::Point(178, 125);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 72);
			this->button2->TabIndex = 3;
			this->button2->Text = L"C";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button3->Font = (gcnew System::Drawing::Font(L"Verdana", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Aqua;
			this->button3->Location = System::Drawing::Point(10, 203);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(77, 72);
			this->button3->TabIndex = 4;
			this->button3->Text = L"7";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button4->Font = (gcnew System::Drawing::Font(L"Verdana", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Aqua;
			this->button4->Location = System::Drawing::Point(93, 203);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(77, 72);
			this->button4->TabIndex = 5;
			this->button4->Text = L"8";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button5->Font = (gcnew System::Drawing::Font(L"Verdana", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Aqua;
			this->button5->Location = System::Drawing::Point(344, 123);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(322, 72);
			this->button5->TabIndex = 7;
			this->button5->Text = L"+";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button6->Font = (gcnew System::Drawing::Font(L"Verdana", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Aqua;
			this->button6->Location = System::Drawing::Point(178, 203);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(77, 72);
			this->button6->TabIndex = 6;
			this->button6->Text = L"9";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button7->Font = (gcnew System::Drawing::Font(L"Verdana", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Aqua;
			this->button7->Location = System::Drawing::Point(344, 203);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(322, 72);
			this->button7->TabIndex = 11;
			this->button7->Text = L"-";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button8->Font = (gcnew System::Drawing::Font(L"Verdana", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Aqua;
			this->button8->Location = System::Drawing::Point(178, 281);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(77, 72);
			this->button8->TabIndex = 10;
			this->button8->Text = L"6";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button9->Font = (gcnew System::Drawing::Font(L"Verdana", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Aqua;
			this->button9->Location = System::Drawing::Point(93, 281);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(77, 72);
			this->button9->TabIndex = 9;
			this->button9->Text = L"5";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button10->Font = (gcnew System::Drawing::Font(L"Verdana", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Aqua;
			this->button10->Location = System::Drawing::Point(10, 281);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(77, 72);
			this->button10->TabIndex = 8;
			this->button10->Text = L"4";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Tahoma", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::Aqua;
			this->button11->Location = System::Drawing::Point(344, 437);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(322, 72);
			this->button11->TabIndex = 19;
			this->button11->Text = L"=";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button12->Font = (gcnew System::Drawing::Font(L"Verdana", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::Aqua;
			this->button12->Location = System::Drawing::Point(344, 355);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(322, 72);
			this->button12->TabIndex = 18;
			this->button12->Text = L"÷";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button13->Font = (gcnew System::Drawing::Font(L"Verdana", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::Aqua;
			this->button13->Location = System::Drawing::Point(93, 433);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(77, 72);
			this->button13->TabIndex = 17;
			this->button13->Text = L".";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button14->Font = (gcnew System::Drawing::Font(L"Verdana", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::Aqua;
			this->button14->Location = System::Drawing::Point(10, 433);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(77, 72);
			this->button14->TabIndex = 16;
			this->button14->Text = L"0";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button15->Font = (gcnew System::Drawing::Font(L"Verdana", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::Aqua;
			this->button15->Location = System::Drawing::Point(261, 433);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(77, 72);
			this->button15->TabIndex = 15;
			this->button15->Text = L"*";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button16->Font = (gcnew System::Drawing::Font(L"Verdana", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::Aqua;
			this->button16->Location = System::Drawing::Point(178, 355);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(77, 72);
			this->button16->TabIndex = 14;
			this->button16->Text = L"3";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button17->Font = (gcnew System::Drawing::Font(L"Verdana", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::Aqua;
			this->button17->Location = System::Drawing::Point(93, 355);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(77, 72);
			this->button17->TabIndex = 13;
			this->button17->Text = L"2";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button18->Font = (gcnew System::Drawing::Font(L"Verdana", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::Aqua;
			this->button18->Location = System::Drawing::Point(10, 355);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(77, 72);
			this->button18->TabIndex = 12;
			this->button18->Text = L"1";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button19->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::Aqua;
			this->button19->Location = System::Drawing::Point(261, 282);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(77, 72);
			this->button19->TabIndex = 20;
			this->button19->Text = L"%";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button21->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->ForeColor = System::Drawing::Color::Aqua;
			this->button21->Location = System::Drawing::Point(261, 204);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(77, 72);
			this->button21->TabIndex = 22;
			this->button21->Text = L"𝝅";
			this->button21->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button24->Font = (gcnew System::Drawing::Font(L"Verdana", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->ForeColor = System::Drawing::Color::Aqua;
			this->button24->Location = System::Drawing::Point(261, 355);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(77, 72);
			this->button24->TabIndex = 25;
			this->button24->Text = L"√";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button25->Font = (gcnew System::Drawing::Font(L"Verdana", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->ForeColor = System::Drawing::Color::Aqua;
			this->button25->Location = System::Drawing::Point(178, 433);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(77, 72);
			this->button25->TabIndex = 26;
			this->button25->Text = L"n!";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::LightGray;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(684, 142);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(132, 308);
			this->textBox2->TabIndex = 30;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(709, 115);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 24);
			this->label1->TabIndex = 31;
			this->label1->Text = L"History";
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button26->Font = (gcnew System::Drawing::Font(L"Verdana", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->ForeColor = System::Drawing::Color::Aqua;
			this->button26->Location = System::Drawing::Point(344, 282);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(322, 72);
			this->button26->TabIndex = 32;
			this->button26->Text = L"^";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::Aqua;
			this->button27->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->button27->Location = System::Drawing::Point(684, 457);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(132, 46);
			this->button27->TabIndex = 33;
			this->button27->Text = L"Clear";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(820, 515);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt);
			this->ForeColor = System::Drawing::Color::Fuchsia;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		if (x == false)
			txt->Text += "7";

		else {
			txt->Clear();
			txt->Text += "7";
		}
		x = false;

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {


		if (x == false)
			txt->Text += "8";

		else {
			txt->Clear();
			txt->Text += "8";
		}
		x = false;

	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

		if (x == false)
			txt->Text += "9";

		else {
			txt->Clear();
			txt->Text += "9";
		}
		x = false;

	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

		if (x == false)
			txt->Text += "4";

		else {
			txt->Clear();
			txt->Text += "4";
		}
		x = false;

	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

		if (x == false)
			txt->Text += "5";

		else {
			txt->Clear();
			txt->Text += "5";
		}
		x = false;

	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

		if (x == false)
			txt->Text += "6";

		else {
			txt->Clear();
			txt->Text += "6";
		}
		x = false;

	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {

		if (x == false)
			txt->Text += "3";

		else {
			txt->Clear();
			txt->Text += "3";
		}
		x = false;
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {

		if (x == false)
			txt->Text += "2";

		else {
			txt->Clear();
			txt->Text += "2";
		}
		x = false;

	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {


		if (x == false)
			txt->Text += "1";

		else {
			txt->Clear();
			txt->Text += "1";
		}
		x = false;

	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {

		if (x == false)
			txt->Text += "0";

		else {
			txt->Clear();
			txt->Text += "0";
		}
		x = false;

	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!txt->Text->Contains("."))
			txt->Text = txt->Text + ".";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		if (txt->Text == "")
			bool e = true;
		else {
			num1 = txt->Text;
			op = '+';
			txt->Clear();
			this->txt->Focus();
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

		if (txt->Text == "")
			bool e = true;
		else {
			number1 = Convert::ToDouble(txt->Text);
			op = '-';
			txt->Clear();
			this->txt->Focus();
		}
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		num1 = txt->Text;
		if (txt->Text == "")
			bool e = true;
		else {
			number1 = System::Convert::ToDouble(txt->Text);
			op = '*';
			txt->Clear();
			this->txt->Focus();
		}
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txt->Text == "")
			bool e = true;
		else {
			number1 = System::Convert::ToDouble(txt->Text);
			op = '/';
			txt->Clear();
			this->txt->Focus();
		}
	}
	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txt->Text == "")
			bool e = true;
		else {
			number1 = Convert::ToDouble(txt->Text);
			op = '^';
			txt->Clear();
			this->txt->Focus();
		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		txt->Clear();
		this->txt->Focus();
		number1 = 0;
		number2 = 0;
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txt->Text == "")
			bool e = true;
		else {
			number1 = System::Convert::ToDouble(txt->Text);
			result = Convert::ToDouble(txt->Text) / Convert::ToDouble(100);
			txt->Text = number1 + "% =" + Convert::ToString(result);
			this->txt->Focus();
			textBox2->Text = txt->Text;
		}
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		number2 = Convert::ToDouble(txt->Text);
		
		switch (op)
		{
		case'-':
			result = number1 - number2;
			break;
		case'*':
			result = number1 * number2;
			break;
		case'/':
			result = number1 / number2;
			break;
		case'^':
			result = pow(number1, number2);
			break;
		}
		if (op == '+')
		{
			num2 = txt->Text;
			msclr::interop::marshal_context context;
			std::string N1 = context.marshal_as<std::string>(num1);
			std::string N2 = context.marshal_as<std::string>(num2);
	
				std::string ans = findSum(N1, N2);
				txt->Text = gcnew String(ans.c_str());
				textBox2->Text = textBox2->Text + num1 + System::Convert::ToChar(op) + num2 + "=" + (txt->Text);
				textBox2->Text += "\r\n";
				x = true;
				this->txt->Focus();
				number1 = 0;
				number2 = 0;

			
		}
		else
		{
			txt->Text = Convert::ToString(result);
			textBox2->Text = textBox2->Text + number1 + System::Convert::ToChar(op) + number2 + "=" + result;
			textBox2->Text += "\r\n";
			x = true;
			this->txt->Focus();
			number1 = 0;
			number2 = 0;
		}
		////////////////////////////////////////////////////////////
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (System::Convert::ToDouble(txt->Text->Length > 0)) {
			txt->Text = txt->Text->Remove(txt->Text->Length - 1, 1);
			this->txt->Focus();
		}
	}
	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txt->Text == "")
			bool e = true;
		else {
			number1 = Double::Parse(txt->Text);
			result = Math::Sqrt(number1);
			txt->Text = System::Convert::ToString(result);
			textBox2->Text = "sqr= " + result;

			this->txt->Focus();
		}
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		txt->Text = (" 3.14159265358979323846");
		this->txt->Focus();
	}
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txt->Text == "")
			bool e = true;
		else {
			number1 = Convert::ToDouble(txt->Text);
			int fact = 1;
			for (int i = 1; i <= number1; i++)
			{
				fact = fact * i;
			}
			result = fact;
			txt->Clear();
			txt->Text = txt->Text + number1 + "! =" + System::Convert::ToString(result);
			textBox2->Text = txt->Text;
			this->txt->Focus();
		}
	}
	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox2->Clear();
		this->txt->Focus();
	}
	private: System::Void txt_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (x == false)
		{
			if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
			{
				e->Handled = true;

			}
		}
		else
		{
			txt->Clear();
			x = false;
			if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
			{
				e->Handled = true;

			}

		}




	}
	};
}
