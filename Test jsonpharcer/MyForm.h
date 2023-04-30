#pragma once
#include <iostream>
#include <string>
#include "requests.h"
#include <map>
#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>

namespace Testjsonpharcer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace requests;
	using namespace msclr::interop;
	std::map<string, string> payid;
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::String^ st = "";
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Button^ button4;

	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(214, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Location = System::Drawing::Point(197, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Оплата";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->Location = System::Drawing::Point(197, 52);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Проверить оплату";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->Location = System::Drawing::Point(83, 143);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Регистрация";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Location = System::Drawing::Point(70, 65);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->Location = System::Drawing::Point(70, 91);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox3->Location = System::Drawing::Point(70, 117);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			// 
			// radioButton1
			// 
			this->radioButton1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(73, 12);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(61, 17);
			this->radioButton1->TabIndex = 7;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"buisnes";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(70, 42);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(54, 17);
			this->radioButton2->TabIndex = 8;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"gamer";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->Location = System::Drawing::Point(83, 172);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Вход";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:string substr(string str, int f, int s) {
			   string sb = "";
			   for (int i = f; i <= s; i++) {
				   sb += str[i];
			   }
			   return sb;
		   }
	private:map<string, string> JsonParcer(string resp) {
		int arr[4], x = 0;
		map<string, string> Mymap;
		for (int i = 0, j = 0; i < resp.size(); i++) {
			if (resp[i] == '"') {
				arr[j] = i;
				j++;
			}
			if (j >= 4) {
				j = 0;
				Mymap[substr(resp, arr[0] + 1, arr[1] - 1)] = substr(resp, arr[2] + 1, arr[3] - 1);
			}
		}
		return Mymap;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		string resp = Get("https://bosaix.dixer.keenetic.pro/pay/dixer/150").GetText();
		payid = JsonParcer(resp);
		string strt = "start " + payid["payurl"];
		system(strt.c_str());
		
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		string resp = Get("https://bosaix.dixer.keenetic.pro/chekpay/dixer").GetText();
		if(JsonParcer(resp)["paystatus"] == "True")
			this->label1->Text = "true";
		else
			this->label1->Text = "false";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox1->Text != "" && this->textBox2->Text != "" && this->textBox3->Text != "") {
			string resp = Get("https://bosaix.dixer.keenetic.pro/reg/"
				+ marshal_as<std::string>(this->textBox1->Text) + "/"
				+ marshal_as<std::string>(this->textBox2->Text) + "/"
				+ marshal_as<std::string>(this->textBox3->Text) + "/"
				+ ((this->radioButton1->Checked) ? "buisnes" : "gamer")
			).GetText();
			if (JsonParcer(resp)["status"] == "UserAdded")
				this->label1->Text = "UserAdded";
			else
				this->label1->Text = "UserInDataBase";
		}
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox1->Text != "" && this->textBox2->Text != "") {
		string resp = Get("https://bosaix.dixer.keenetic.pro/log/"
			+ marshal_as<std::string>(this->textBox1->Text) + "/"
			+ marshal_as<std::string>(this->textBox2->Text) + "/"
			+ ((this->radioButton1->Checked) ? "buisnes" : "gamer")
		).GetText();
		if (JsonParcer(resp)["status"] == "OK")
			this->label1->Text = "OK";
		else
			this->label1->Text = "Not";
	}
}
};
}
