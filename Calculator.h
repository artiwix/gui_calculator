

#pragma once



namespace untilted2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
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
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}

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
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Label^ label_result;
	private: System::Windows::Forms::Button^ backspace;
	private: System::Windows::Forms::Button^ btn_C;
	private: System::Windows::Forms::Button^ CE_btn;
	private: System::Windows::Forms::Button^ plusminus;
	private: System::Windows::Forms::Button^ dot;
	private: System::Windows::Forms::Button^ equal;






	private: System::Windows::Forms::Button^ divide;
	private: System::Windows::Forms::Button^ multiply;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ plus;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Calculator::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->label_result = (gcnew System::Windows::Forms::Label());
			this->backspace = (gcnew System::Windows::Forms::Button());
			this->btn_C = (gcnew System::Windows::Forms::Button());
			this->CE_btn = (gcnew System::Windows::Forms::Button());
			this->plusminus = (gcnew System::Windows::Forms::Button());
			this->dot = (gcnew System::Windows::Forms::Button());
			this->equal = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Rubik Black", 25));
			this->button1->ForeColor = System::Drawing::Color::Fuchsia;
			this->button1->Location = System::Drawing::Point(12, 381);
			this->button1->Name = L"button1";
			this->button1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button1->Size = System::Drawing::Size(81, 70);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Rubik Black", 25));
			this->button2->ForeColor = System::Drawing::Color::Fuchsia;
			this->button2->Location = System::Drawing::Point(99, 381);
			this->button2->Name = L"button2";
			this->button2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button2->Size = System::Drawing::Size(81, 70);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Rubik Black", 25));
			this->button3->ForeColor = System::Drawing::Color::Fuchsia;
			this->button3->Location = System::Drawing::Point(186, 381);
			this->button3->Name = L"button3";
			this->button3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button3->Size = System::Drawing::Size(81, 70);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Rubik Black", 25));
			this->button4->ForeColor = System::Drawing::Color::Fuchsia;
			this->button4->Location = System::Drawing::Point(12, 305);
			this->button4->Name = L"button4";
			this->button4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button4->Size = System::Drawing::Size(81, 70);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Rubik Black", 25));
			this->button5->ForeColor = System::Drawing::Color::Fuchsia;
			this->button5->Location = System::Drawing::Point(99, 305);
			this->button5->Name = L"button5";
			this->button5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button5->Size = System::Drawing::Size(81, 70);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Rubik Black", 25));
			this->button6->ForeColor = System::Drawing::Color::Fuchsia;
			this->button6->Location = System::Drawing::Point(186, 305);
			this->button6->Name = L"button6";
			this->button6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button6->Size = System::Drawing::Size(81, 70);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Rubik Black", 25));
			this->button7->ForeColor = System::Drawing::Color::Fuchsia;
			this->button7->Location = System::Drawing::Point(12, 229);
			this->button7->Name = L"button7";
			this->button7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button7->Size = System::Drawing::Size(81, 70);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Rubik Black", 25));
			this->button8->ForeColor = System::Drawing::Color::Fuchsia;
			this->button8->Location = System::Drawing::Point(99, 229);
			this->button8->Name = L"button8";
			this->button8->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button8->Size = System::Drawing::Size(81, 70);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Transparent;
			this->button9->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Rubik Black", 25));
			this->button9->ForeColor = System::Drawing::Color::Fuchsia;
			this->button9->Location = System::Drawing::Point(186, 229);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(81, 70);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::Color::Transparent;
			this->button0->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->button0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button0->Font = (gcnew System::Drawing::Font(L"Rubik Black", 25));
			this->button0->ForeColor = System::Drawing::Color::Fuchsia;
			this->button0->Location = System::Drawing::Point(12, 457);
			this->button0->Name = L"button0";
			this->button0->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button0->Size = System::Drawing::Size(81, 70);
			this->button0->TabIndex = 10;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// label_result
			// 
			this->label_result->AutoSize = true;
			this->label_result->BackColor = System::Drawing::Color::Transparent;
			this->label_result->Cursor = System::Windows::Forms::Cursors::No;
			this->label_result->Font = (gcnew System::Drawing::Font(L"Rubik Black", 30));
			this->label_result->ForeColor = System::Drawing::Color::Fuchsia;
			this->label_result->Location = System::Drawing::Point(12, 9);
			this->label_result->Name = L"label_result";
			this->label_result->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label_result->Size = System::Drawing::Size(56, 62);
			this->label_result->TabIndex = 0;
			this->label_result->Text = L"0";
			// 
			// backspace
			// 
			this->backspace->BackColor = System::Drawing::Color::Transparent;
			this->backspace->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->backspace->Font = (gcnew System::Drawing::Font(L"Rubik Black", 25));
			this->backspace->ForeColor = System::Drawing::Color::Fuchsia;
			this->backspace->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backspace.Image")));
			this->backspace->Location = System::Drawing::Point(12, 153);
			this->backspace->Name = L"backspace";
			this->backspace->Size = System::Drawing::Size(81, 70);
			this->backspace->TabIndex = 11;
			this->backspace->UseVisualStyleBackColor = false;
			// 
			// btn_C
			// 
			this->btn_C->BackColor = System::Drawing::Color::Transparent;
			this->btn_C->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_C->Font = (gcnew System::Drawing::Font(L"Rubik Black", 25));
			this->btn_C->ForeColor = System::Drawing::Color::Fuchsia;
			this->btn_C->Location = System::Drawing::Point(99, 153);
			this->btn_C->Name = L"btn_C";
			this->btn_C->Size = System::Drawing::Size(81, 70);
			this->btn_C->TabIndex = 12;
			this->btn_C->Text = L"&C";
			this->btn_C->UseVisualStyleBackColor = false;
			this->btn_C->Click += gcnew System::EventHandler(this, &Calculator::btn_C_Click);
			// 
			// CE_btn
			// 
			this->CE_btn->BackColor = System::Drawing::Color::Transparent;
			this->CE_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->CE_btn->Font = (gcnew System::Drawing::Font(L"Rubik Black", 25));
			this->CE_btn->ForeColor = System::Drawing::Color::Fuchsia;
			this->CE_btn->Location = System::Drawing::Point(186, 153);
			this->CE_btn->Name = L"CE_btn";
			this->CE_btn->Size = System::Drawing::Size(81, 70);
			this->CE_btn->TabIndex = 13;
			this->CE_btn->Text = L"&CE";
			this->CE_btn->UseVisualStyleBackColor = false;
			this->CE_btn->Click += gcnew System::EventHandler(this, &Calculator::CE_btn_Click);
			// 
			// plusminus
			// 
			this->plusminus->BackColor = System::Drawing::Color::Transparent;
			this->plusminus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->plusminus->Font = (gcnew System::Drawing::Font(L"Rubik Black", 25));
			this->plusminus->ForeColor = System::Drawing::Color::Fuchsia;
			this->plusminus->Location = System::Drawing::Point(99, 457);
			this->plusminus->Name = L"plusminus";
			this->plusminus->Size = System::Drawing::Size(81, 70);
			this->plusminus->TabIndex = 14;
			this->plusminus->Text = L"+-";
			this->plusminus->UseVisualStyleBackColor = false;
			// 
			// dot
			// 
			this->dot->BackColor = System::Drawing::Color::Transparent;
			this->dot->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->dot->Font = (gcnew System::Drawing::Font(L"Rubik Black", 25));
			this->dot->ForeColor = System::Drawing::Color::Fuchsia;
			this->dot->Location = System::Drawing::Point(186, 457);
			this->dot->Name = L"dot";
			this->dot->Size = System::Drawing::Size(81, 70);
			this->dot->TabIndex = 15;
			this->dot->Text = L".";
			this->dot->UseVisualStyleBackColor = false;
			this->dot->Click += gcnew System::EventHandler(this, &Calculator::dot_Click);
			// 
			// equal
			// 
			this->equal->BackColor = System::Drawing::Color::Transparent;
			this->equal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->equal->Font = (gcnew System::Drawing::Font(L"Rubik Black", 25));
			this->equal->ForeColor = System::Drawing::Color::Fuchsia;
			this->equal->Location = System::Drawing::Point(273, 457);
			this->equal->Name = L"equal";
			this->equal->Size = System::Drawing::Size(82, 70);
			this->equal->TabIndex = 16;
			this->equal->Text = L"=";
			this->equal->UseVisualStyleBackColor = false;
			this->equal->Click += gcnew System::EventHandler(this, &Calculator::equal_Click);
			// 
			// divide
			// 
			this->divide->BackColor = System::Drawing::Color::Transparent;
			this->divide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->divide->Font = (gcnew System::Drawing::Font(L"Rubik Black", 25));
			this->divide->ForeColor = System::Drawing::Color::Fuchsia;
			this->divide->Location = System::Drawing::Point(273, 381);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(82, 70);
			this->divide->TabIndex = 17;
			this->divide->Text = L"/";
			this->divide->UseVisualStyleBackColor = false;
			this->divide->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
			// 
			// multiply
			// 
			this->multiply->BackColor = System::Drawing::Color::Transparent;
			this->multiply->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->multiply->Font = (gcnew System::Drawing::Font(L"Rubik Black", 25));
			this->multiply->ForeColor = System::Drawing::Color::Fuchsia;
			this->multiply->Location = System::Drawing::Point(273, 305);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(82, 70);
			this->multiply->TabIndex = 18;
			this->multiply->Text = L"*";
			this->multiply->UseVisualStyleBackColor = false;
			this->multiply->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::Color::Transparent;
			this->minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->minus->Font = (gcnew System::Drawing::Font(L"Rubik Black", 25));
			this->minus->ForeColor = System::Drawing::Color::Fuchsia;
			this->minus->Location = System::Drawing::Point(273, 229);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(82, 70);
			this->minus->TabIndex = 19;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::Transparent;
			this->plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->plus->Font = (gcnew System::Drawing::Font(L"Rubik Black", 25));
			this->plus->ForeColor = System::Drawing::Color::Fuchsia;
			this->plus->Location = System::Drawing::Point(273, 153);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(82, 71);
			this->plus->TabIndex = 20;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(426, 539);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->multiply);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->equal);
			this->Controls->Add(this->dot);
			this->Controls->Add(this->plusminus);
			this->Controls->Add(this->CE_btn);
			this->Controls->Add(this->btn_C);
			this->Controls->Add(this->backspace);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label_result);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double firstDigit, secondDigit, result;
		String^ operators;

		/*std::vector<std::string> split(const std::string& input, const std::string& regex) {
			// passing -1 as the submatch index parameter performs splitting
			std::regex re(regex);
			std::sregex_token_iterator
				first{ input.begin(), input.end(), re, -1 },
				last;
			return { first, last };
		}
		*/
		//Platform::String^ convertFromString(const std::string& input)
		//{
		//	std::wstring w_str = std::wstring(input.begin(), input.end());
		//	const wchar_t* w_chars = w_str.c_str();
		//
		//	return (ref new Platform::String(w_chars));
		//}

private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);

	if (label_result->Text == "0") 
		label_result->Text = Numbers->Text;

	
	else 
		label_result->Text = label_result->Text + Numbers->Text;

	
}
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {

	Button^ Operators = safe_cast<Button^>(sender);

	firstDigit = Double::Parse(label_result->Text);

	this->label_result->Text = "0";
	operators = Operators->Text;
}
private: System::Void dot_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!this->label_result->Text->Contains(".")) {
		this->label_result->Text += ".";
	}
}
private: System::Void equal_Click(System::Object^ sender, System::EventArgs^ e) {
	secondDigit = Double::Parse(label_result->Text);

	if (operators == "+") {
		result = firstDigit + secondDigit;
		label_result->Text = System::Convert::ToString(result);
	}
	else if (operators == "-") {
		result = firstDigit - secondDigit;
		label_result->Text = System::Convert::ToString(result);
	}
	else if (operators == "*") {
		result = firstDigit * secondDigit;
		label_result->Text = System::Convert::ToString(result);
	}

	else if (operators == "/") {
		if (secondDigit != 0) {
			result = firstDigit / secondDigit;
			label_result->Text = System::Convert::ToString(result);
		}
		else
			label_result->Text = "Error";
		
	}


}
private: System::Void btn_C_Click(System::Object^ sender, System::EventArgs^ e) {
	label_result->Text = "0";
	firstDigit = 0;
	secondDigit = 0;
}
private: System::Void CE_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	label_result->Text = "0";
	firstDigit = 0;
	secondDigit = 0;
}
};
}
