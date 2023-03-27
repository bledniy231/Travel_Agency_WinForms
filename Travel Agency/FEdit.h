#pragma once

namespace TravelAgency {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FEdit
	/// </summary>
	public ref class FEdit : public System::Windows::Forms::Form
	{
	public:
		FEdit(void)
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
		~FEdit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ действияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ загрузитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходИзПрограммыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ назадToolStripMenuItem;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::DataGridView^ dataGridView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::ComboBox^ comboBoxTravel;
	private: System::Windows::Forms::ComboBox^ comboBoxAccommodation;
	private: System::Windows::Forms::ComboBox^ comboBoxService;



	private: System::Windows::Forms::Button^ buttonNext;

	private: System::Windows::Forms::Button^ buttonPrevious;

	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::Button^ buttonEdit;
	private: System::Windows::Forms::TextBox^ textBoxName;




	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBoxCost;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxCity;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxCountry;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxId;
	private: System::Windows::Forms::Label^ label7;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->действияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->загрузитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходИзПрограммыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->назадToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBoxId = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBoxTravel = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxAccommodation = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxService = (gcnew System::Windows::Forms::ComboBox());
			this->buttonNext = (gcnew System::Windows::Forms::Button());
			this->buttonPrevious = (gcnew System::Windows::Forms::Button());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->buttonEdit = (gcnew System::Windows::Forms::Button());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxCost = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxCity = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxCountry = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->действияToolStripMenuItem,
					this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(980, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// действияToolStripMenuItem
			// 
			this->действияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->загрузитьToolStripMenuItem,
					this->сохранитьToolStripMenuItem
			});
			this->действияToolStripMenuItem->Name = L"действияToolStripMenuItem";
			this->действияToolStripMenuItem->Size = System::Drawing::Size(88, 24);
			this->действияToolStripMenuItem->Text = L"Действия";
			// 
			// загрузитьToolStripMenuItem
			// 
			this->загрузитьToolStripMenuItem->Name = L"загрузитьToolStripMenuItem";
			this->загрузитьToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->загрузитьToolStripMenuItem->Text = L"Загрузить";
			this->загрузитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &FEdit::загрузитьToolStripMenuItem_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &FEdit::сохранитьToolStripMenuItem_Click);
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
			this->выходИзПрограммыToolStripMenuItem->Click += gcnew System::EventHandler(this, &FEdit::выходИзПрограммыToolStripMenuItem_Click);
			// 
			// назадToolStripMenuItem
			// 
			this->назадToolStripMenuItem->Name = L"назадToolStripMenuItem";
			this->назадToolStripMenuItem->Size = System::Drawing::Size(243, 26);
			this->назадToolStripMenuItem->Text = L"Назад";
			this->назадToolStripMenuItem->Click += gcnew System::EventHandler(this, &FEdit::назадToolStripMenuItem_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 28);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(980, 550);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(972, 521);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Просмотр";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dataGridView
			// 
			this->dataGridView->AllowUserToAddRows = false;
			this->dataGridView->AllowUserToDeleteRows = false;
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView->Location = System::Drawing::Point(3, 3);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->ReadOnly = true;
			this->dataGridView->RowHeadersWidth = 51;
			this->dataGridView->RowTemplate->Height = 24;
			this->dataGridView->Size = System::Drawing::Size(966, 515);
			this->dataGridView->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Название";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Страна";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Город";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Условие проживания";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Условие проезда";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Сервис принимающей стороны";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Стоимость путевки";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 125;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBoxId);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->comboBoxTravel);
			this->tabPage2->Controls->Add(this->comboBoxAccommodation);
			this->tabPage2->Controls->Add(this->comboBoxService);
			this->tabPage2->Controls->Add(this->buttonNext);
			this->tabPage2->Controls->Add(this->buttonPrevious);
			this->tabPage2->Controls->Add(this->buttonAdd);
			this->tabPage2->Controls->Add(this->buttonDelete);
			this->tabPage2->Controls->Add(this->buttonEdit);
			this->tabPage2->Controls->Add(this->textBoxName);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->textBoxCost);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->textBoxCity);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->textBoxCountry);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(972, 521);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Редактирование";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBoxId
			// 
			this->textBoxId->Location = System::Drawing::Point(13, 33);
			this->textBoxId->Margin = System::Windows::Forms::Padding(4);
			this->textBoxId->Name = L"textBoxId";
			this->textBoxId->ReadOnly = true;
			this->textBoxId->Size = System::Drawing::Size(160, 22);
			this->textBoxId->TabIndex = 80;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(9, 13);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 17);
			this->label7->TabIndex = 79;
			this->label7->Text = L"Код";
			// 
			// comboBoxTravel
			// 
			this->comboBoxTravel->FormattingEnabled = true;
			this->comboBoxTravel->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Самолет", L"Поезд" });
			this->comboBoxTravel->Location = System::Drawing::Point(10, 250);
			this->comboBoxTravel->Name = L"comboBoxTravel";
			this->comboBoxTravel->Size = System::Drawing::Size(160, 24);
			this->comboBoxTravel->TabIndex = 78;
			// 
			// comboBoxAccommodation
			// 
			this->comboBoxAccommodation->FormattingEnabled = true;
			this->comboBoxAccommodation->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Отель", L"Апартаменты", L"Вилла" });
			this->comboBoxAccommodation->Location = System::Drawing::Point(9, 300);
			this->comboBoxAccommodation->Name = L"comboBoxAccommodation";
			this->comboBoxAccommodation->Size = System::Drawing::Size(160, 24);
			this->comboBoxAccommodation->TabIndex = 77;
			// 
			// comboBoxService
			// 
			this->comboBoxService->FormattingEnabled = true;
			this->comboBoxService->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"BB", L"HB", L"AI" });
			this->comboBoxService->Location = System::Drawing::Point(10, 356);
			this->comboBoxService->Name = L"comboBoxService";
			this->comboBoxService->Size = System::Drawing::Size(159, 24);
			this->comboBoxService->TabIndex = 76;
			// 
			// buttonNext
			// 
			this->buttonNext->Location = System::Drawing::Point(382, 350);
			this->buttonNext->Name = L"buttonNext";
			this->buttonNext->Size = System::Drawing::Size(103, 37);
			this->buttonNext->TabIndex = 75;
			this->buttonNext->Text = L"Следующая";
			this->buttonNext->UseVisualStyleBackColor = true;
			this->buttonNext->Click += gcnew System::EventHandler(this, &FEdit::buttonNext_Click);
			// 
			// buttonPrevious
			// 
			this->buttonPrevious->Location = System::Drawing::Point(273, 350);
			this->buttonPrevious->Name = L"buttonPrevious";
			this->buttonPrevious->Size = System::Drawing::Size(103, 37);
			this->buttonPrevious->TabIndex = 74;
			this->buttonPrevious->Text = L"Предыдущая";
			this->buttonPrevious->UseVisualStyleBackColor = true;
			this->buttonPrevious->Click += gcnew System::EventHandler(this, &FEdit::buttonPrevious_Click);
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(314, 126);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(124, 52);
			this->buttonAdd->TabIndex = 70;
			this->buttonAdd->Text = L"Добавить запись";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &FEdit::buttonAdd_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Location = System::Drawing::Point(314, 197);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(124, 52);
			this->buttonDelete->TabIndex = 69;
			this->buttonDelete->Text = L"Удалить запись";
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &FEdit::buttonDelete_Click);
			// 
			// buttonEdit
			// 
			this->buttonEdit->Location = System::Drawing::Point(314, 272);
			this->buttonEdit->Name = L"buttonEdit";
			this->buttonEdit->Size = System::Drawing::Size(124, 52);
			this->buttonEdit->TabIndex = 68;
			this->buttonEdit->Text = L"Изменить запись";
			this->buttonEdit->UseVisualStyleBackColor = true;
			this->buttonEdit->Click += gcnew System::EventHandler(this, &FEdit::buttonEdit_Click);
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(10, 85);
			this->textBoxName->Margin = System::Windows::Forms::Padding(4);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(160, 22);
			this->textBoxName->TabIndex = 67;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 65);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(90, 17);
			this->label8->TabIndex = 66;
			this->label8->Text = L"Турагенство";
			// 
			// textBoxCost
			// 
			this->textBoxCost->Location = System::Drawing::Point(9, 411);
			this->textBoxCost->Margin = System::Windows::Forms::Padding(4);
			this->textBoxCost->Name = L"textBoxCost";
			this->textBoxCost->Size = System::Drawing::Size(160, 22);
			this->textBoxCost->TabIndex = 65;
			this->textBoxCost->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FEdit::textBoxCost_KeyPress);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(5, 391);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 17);
			this->label6->TabIndex = 64;
			this->label6->Text = L"Стоимость";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 336);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 17);
			this->label5->TabIndex = 63;
			this->label5->Text = L"Сервис";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 281);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 17);
			this->label4->TabIndex = 62;
			this->label4->Text = L"Проживание";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 230);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 17);
			this->label3->TabIndex = 61;
			this->label3->Text = L"Проезд";
			// 
			// textBoxCity
			// 
			this->textBoxCity->Location = System::Drawing::Point(10, 197);
			this->textBoxCity->Margin = System::Windows::Forms::Padding(4);
			this->textBoxCity->Name = L"textBoxCity";
			this->textBoxCity->Size = System::Drawing::Size(160, 22);
			this->textBoxCity->TabIndex = 60;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 177);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 17);
			this->label2->TabIndex = 59;
			this->label2->Text = L"Город";
			// 
			// textBoxCountry
			// 
			this->textBoxCountry->Location = System::Drawing::Point(10, 141);
			this->textBoxCountry->Margin = System::Windows::Forms::Padding(4);
			this->textBoxCountry->Name = L"textBoxCountry";
			this->textBoxCountry->Size = System::Drawing::Size(160, 22);
			this->textBoxCountry->TabIndex = 58;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 120);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 17);
			this->label1->TabIndex = 57;
			this->label1->Text = L"Страна";
			// 
			// FEdit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(980, 578);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"FEdit";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Редактор";
			this->Load += gcnew System::EventHandler(this, &FEdit::FEdit_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Поля формы
	private: int selectedIndexData;

		// Методы формы
	private: void PrintData();
	private: void PrintSelectedData();

		// События формы
	private: System::Void FEdit_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void выходИзПрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void назадToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void загрузитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonEdit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonPrevious_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonNext_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBoxCost_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);

};
}
