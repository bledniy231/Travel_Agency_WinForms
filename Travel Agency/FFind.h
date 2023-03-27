#pragma once

namespace TravelAgency {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FFind
	/// </summary>
	public ref class FFind : public System::Windows::Forms::Form
	{
	public:
		FFind(void)
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
		~FFind()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonSerachByCost;
	protected:

	private: System::Windows::Forms::Button^ buttonSerachByAccommodation;
	protected:

	private: System::Windows::Forms::Button^ buttonSerachByTravel;

	private: System::Windows::Forms::Button^ buttonSerachByCity;

	private: System::Windows::Forms::Button^ buttonSerachByContry;


	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::ComboBox^ comboBoxService;

	private: System::Windows::Forms::Button^ buttonSerachByService;

	private: System::Windows::Forms::TextBox^ textBoxCost;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBoxAccommodation;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBoxTravel;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxCity;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxCountry;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходИзПрограммыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ назадToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->buttonSerachByCost = (gcnew System::Windows::Forms::Button());
			this->buttonSerachByAccommodation = (gcnew System::Windows::Forms::Button());
			this->buttonSerachByTravel = (gcnew System::Windows::Forms::Button());
			this->buttonSerachByCity = (gcnew System::Windows::Forms::Button());
			this->buttonSerachByContry = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->comboBoxService = (gcnew System::Windows::Forms::ComboBox());
			this->buttonSerachByService = (gcnew System::Windows::Forms::Button());
			this->textBoxCost = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBoxAccommodation = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBoxTravel = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxCity = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxCountry = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходИзПрограммыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->назадToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonSerachByCost
			// 
			this->buttonSerachByCost->Location = System::Drawing::Point(330, 407);
			this->buttonSerachByCost->Name = L"buttonSerachByCost";
			this->buttonSerachByCost->Size = System::Drawing::Size(172, 47);
			this->buttonSerachByCost->TabIndex = 35;
			this->buttonSerachByCost->Text = L"Найти по цене";
			this->buttonSerachByCost->UseVisualStyleBackColor = true;
			this->buttonSerachByCost->Click += gcnew System::EventHandler(this, &FFind::buttonSerachByCost_Click);
			// 
			// buttonSerachByAccommodation
			// 
			this->buttonSerachByAccommodation->Location = System::Drawing::Point(330, 261);
			this->buttonSerachByAccommodation->Name = L"buttonSerachByAccommodation";
			this->buttonSerachByAccommodation->Size = System::Drawing::Size(172, 47);
			this->buttonSerachByAccommodation->TabIndex = 33;
			this->buttonSerachByAccommodation->Text = L"Найти по условию проживания";
			this->buttonSerachByAccommodation->UseVisualStyleBackColor = true;
			this->buttonSerachByAccommodation->Click += gcnew System::EventHandler(this, &FFind::buttonSerachByAccommodation_Click);
			// 
			// buttonSerachByTravel
			// 
			this->buttonSerachByTravel->Location = System::Drawing::Point(330, 191);
			this->buttonSerachByTravel->Name = L"buttonSerachByTravel";
			this->buttonSerachByTravel->Size = System::Drawing::Size(172, 49);
			this->buttonSerachByTravel->TabIndex = 32;
			this->buttonSerachByTravel->Text = L"Найти по условию проезда";
			this->buttonSerachByTravel->UseVisualStyleBackColor = true;
			this->buttonSerachByTravel->Click += gcnew System::EventHandler(this, &FFind::buttonSerachByTravel_Click);
			// 
			// buttonSerachByCity
			// 
			this->buttonSerachByCity->Location = System::Drawing::Point(330, 115);
			this->buttonSerachByCity->Name = L"buttonSerachByCity";
			this->buttonSerachByCity->Size = System::Drawing::Size(172, 49);
			this->buttonSerachByCity->TabIndex = 31;
			this->buttonSerachByCity->Text = L"Найти по городу";
			this->buttonSerachByCity->UseVisualStyleBackColor = true;
			this->buttonSerachByCity->Click += gcnew System::EventHandler(this, &FFind::buttonSerachByCity_Click);
			// 
			// buttonSerachByContry
			// 
			this->buttonSerachByContry->Location = System::Drawing::Point(330, 40);
			this->buttonSerachByContry->Name = L"buttonSerachByContry";
			this->buttonSerachByContry->Size = System::Drawing::Size(172, 45);
			this->buttonSerachByContry->TabIndex = 30;
			this->buttonSerachByContry->Text = L"Найти по стране";
			this->buttonSerachByContry->UseVisualStyleBackColor = true;
			this->buttonSerachByContry->Click += gcnew System::EventHandler(this, &FFind::buttonSerachByContry_Click);
			// 
			// toolTip1
			// 
			this->toolTip1->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->toolTip1->ToolTipTitle = L"Подсказка";
			// 
			// comboBoxService
			// 
			this->comboBoxService->FormattingEnabled = true;
			this->comboBoxService->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"BB", L"HB", L"AI" });
			this->comboBoxService->Location = System::Drawing::Point(19, 355);
			this->comboBoxService->Margin = System::Windows::Forms::Padding(4);
			this->comboBoxService->Name = L"comboBoxService";
			this->comboBoxService->Size = System::Drawing::Size(160, 24);
			this->comboBoxService->TabIndex = 27;
			this->toolTip1->SetToolTip(this->comboBoxService, L"BB - завтрак\r\nHB - завтрак, ужин\r\nAI - все включено");
			// 
			// buttonSerachByService
			// 
			this->buttonSerachByService->Location = System::Drawing::Point(330, 336);
			this->buttonSerachByService->Name = L"buttonSerachByService";
			this->buttonSerachByService->Size = System::Drawing::Size(172, 47);
			this->buttonSerachByService->TabIndex = 34;
			this->buttonSerachByService->Text = L"Найти по сервису";
			this->buttonSerachByService->UseVisualStyleBackColor = true;
			this->buttonSerachByService->Click += gcnew System::EventHandler(this, &FFind::buttonSerachByService_Click);
			// 
			// textBoxCost
			// 
			this->textBoxCost->Location = System::Drawing::Point(19, 427);
			this->textBoxCost->Margin = System::Windows::Forms::Padding(4);
			this->textBoxCost->Name = L"textBoxCost";
			this->textBoxCost->Size = System::Drawing::Size(160, 22);
			this->textBoxCost->TabIndex = 29;
			this->textBoxCost->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FFind::textBoxCost_KeyPress);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 407);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 17);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Стоимость до:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 336);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 17);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Сервис";
			// 
			// comboBoxAccommodation
			// 
			this->comboBoxAccommodation->FormattingEnabled = true;
			this->comboBoxAccommodation->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Отель", L"Апартаменты", L"Вилла" });
			this->comboBoxAccommodation->Location = System::Drawing::Point(19, 280);
			this->comboBoxAccommodation->Margin = System::Windows::Forms::Padding(4);
			this->comboBoxAccommodation->Name = L"comboBoxAccommodation";
			this->comboBoxAccommodation->Size = System::Drawing::Size(160, 24);
			this->comboBoxAccommodation->TabIndex = 25;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 261);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 17);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Проживание";
			// 
			// comboBoxTravel
			// 
			this->comboBoxTravel->FormattingEnabled = true;
			this->comboBoxTravel->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Самолет", L"Поезд" });
			this->comboBoxTravel->Location = System::Drawing::Point(19, 210);
			this->comboBoxTravel->Margin = System::Windows::Forms::Padding(4);
			this->comboBoxTravel->Name = L"comboBoxTravel";
			this->comboBoxTravel->Size = System::Drawing::Size(160, 24);
			this->comboBoxTravel->TabIndex = 23;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 191);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 17);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Проезд";
			// 
			// textBoxCity
			// 
			this->textBoxCity->Location = System::Drawing::Point(19, 135);
			this->textBoxCity->Margin = System::Windows::Forms::Padding(4);
			this->textBoxCity->Name = L"textBoxCity";
			this->textBoxCity->Size = System::Drawing::Size(160, 22);
			this->textBoxCity->TabIndex = 21;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 115);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 17);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Город";
			// 
			// textBoxCountry
			// 
			this->textBoxCountry->Location = System::Drawing::Point(19, 60);
			this->textBoxCountry->Margin = System::Windows::Forms::Padding(4);
			this->textBoxCountry->Name = L"textBoxCountry";
			this->textBoxCountry->Size = System::Drawing::Size(160, 22);
			this->textBoxCountry->TabIndex = 19;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 40);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 17);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Страна";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->выходToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(525, 28);
			this->menuStrip1->TabIndex = 36;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->выходИзПрограммыToolStripMenuItem,
					this->назадToolStripMenuItem
			});
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->выходToolStripMenuItem->Text = L"Выход";
			// 
			// выходИзПрограммыToolStripMenuItem
			// 
			this->выходИзПрограммыToolStripMenuItem->Name = L"выходИзПрограммыToolStripMenuItem";
			this->выходИзПрограммыToolStripMenuItem->Size = System::Drawing::Size(243, 26);
			this->выходИзПрограммыToolStripMenuItem->Text = L"Выход из программы";
			this->выходИзПрограммыToolStripMenuItem->Click += gcnew System::EventHandler(this, &FFind::выходИзПрограммыToolStripMenuItem_Click);
			// 
			// назадToolStripMenuItem
			// 
			this->назадToolStripMenuItem->Name = L"назадToolStripMenuItem";
			this->назадToolStripMenuItem->Size = System::Drawing::Size(243, 26);
			this->назадToolStripMenuItem->Text = L"Назад";
			this->назадToolStripMenuItem->Click += gcnew System::EventHandler(this, &FFind::назадToolStripMenuItem_Click);
			// 
			// FFind
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(525, 469);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->buttonSerachByCost);
			this->Controls->Add(this->buttonSerachByAccommodation);
			this->Controls->Add(this->buttonSerachByTravel);
			this->Controls->Add(this->buttonSerachByCity);
			this->Controls->Add(this->buttonSerachByContry);
			this->Controls->Add(this->buttonSerachByService);
			this->Controls->Add(this->textBoxCost);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBoxService);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBoxAccommodation);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBoxTravel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxCity);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxCountry);
			this->Controls->Add(this->label1);
			this->Name = L"FFind";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Поиск";
			this->Load += gcnew System::EventHandler(this, &FFind::FFind_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void выходИзПрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void назадToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSerachByContry_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSerachByCity_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSerachByTravel_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSerachByAccommodation_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSerachByService_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSerachByCost_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void FFind_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxCost_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);

};
}
