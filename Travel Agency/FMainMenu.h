#pragma once

namespace TravelAgency {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ FMainMenu
	/// </summary>
	public ref class FMainMenu : public System::Windows::Forms::Form
	{
	public:
		FMainMenu(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~FMainMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonEditorForm;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ bottonFindForm;

	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FMainMenu::typeid));
			this->buttonEditorForm = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bottonFindForm = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonEditorForm
			// 
			this->buttonEditorForm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonEditorForm->Location = System::Drawing::Point(168, 443);
			this->buttonEditorForm->Name = L"buttonEditorForm";
			this->buttonEditorForm->Size = System::Drawing::Size(172, 48);
			this->buttonEditorForm->TabIndex = 7;
			this->buttonEditorForm->Text = L"ќткрыть редактор";
			this->buttonEditorForm->UseVisualStyleBackColor = true;
			this->buttonEditorForm->Click += gcnew System::EventHandler(this, &FMainMenu::buttonEditorForm_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(13, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(482, 55);
			this->label1->TabIndex = 6;
			this->label1->Text = L"—правочник туриста";
			// 
			// bottonFindForm
			// 
			this->bottonFindForm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bottonFindForm->Location = System::Drawing::Point(168, 372);
			this->bottonFindForm->Margin = System::Windows::Forms::Padding(4);
			this->bottonFindForm->Name = L"bottonFindForm";
			this->bottonFindForm->Size = System::Drawing::Size(172, 48);
			this->bottonFindForm->TabIndex = 5;
			this->bottonFindForm->Text = L"ќткрыть поиск";
			this->bottonFindForm->UseVisualStyleBackColor = true;
			this->bottonFindForm->Click += gcnew System::EventHandler(this, &FMainMenu::bottonFindForm_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(52, 83);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(393, 262);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// FMainMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(499, 501);
			this->Controls->Add(this->buttonEditorForm);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bottonFindForm);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"FMainMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"√лавное меню";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bottonFindForm_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonEditorForm_Click(System::Object^ sender, System::EventArgs^ e);
};
}
