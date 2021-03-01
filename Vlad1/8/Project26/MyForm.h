#pragma once

namespace Project26 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;




	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label1;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 73);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(99, 20);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(87, 225);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 31);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Проверка";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(159, 182);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(103, 20);
			this->textBox6->TabIndex = 6;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(183, 73);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(89, 20);
			this->textBox7->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(199, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Это число\?";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int x;
	int n1, n2, n3, n4, n5;
	x = System::Convert::ToDouble(textBox1->Text);

	if (x >= 1 && x <= 5)
	{
		for (int i = 0; i < 5; i++)
		{
			textBox7->Text = System::Convert::ToString("1");

			n1 = System::Convert::ToDouble(textBox1->Text);
			if (n1 == 1)
			{
				textBox6->Text = System::Convert::ToString(x); break;
			}
			textBox7->Text = System::Convert::ToString("2");
			n2 = System::Convert::ToDouble(textBox1->Text);
			if (n2 == 1)
			{
				textBox6->Text = System::Convert::ToString(x); break;
			}
			textBox7->Text = System::Convert::ToString("3");
			n3 = System::Convert::ToDouble(textBox1->Text);
			if (n3 == 1)
			{
				textBox6->Text = System::Convert::ToString(x); break;
			}
			textBox7->Text = System::Convert::ToString("4");
			n4 = System::Convert::ToDouble(textBox1->Text);
			if (n4 == 1)
			{
				textBox6->Text = System::Convert::ToString(x); break;
			}
			textBox7->Text = System::Convert::ToString("5");
			n5 = System::Convert::ToDouble(textBox1->Text);
			if (n5 == 1)
			{
				textBox6->Text = System::Convert::ToString(x); break;
			}
		}
	}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
