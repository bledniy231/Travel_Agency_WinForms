#include "FMainMenu.h"
#include "FEdit.h"
#include "FFind.h"

using namespace System;
using namespace System::Windows::Forms;

[System::Runtime::InteropServices::DllImport("user32.dll")]
bool SetProcessDPIAware();

[STAThreadAttribute]
void main() {
	if (Environment::OSVersion->Version->Major >= 6)
		SetProcessDPIAware();

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(true);

	TravelAgency::FMainMenu form;
	Application::Run(% form);
}

System::Void TravelAgency::FMainMenu::bottonFindForm_Click(System::Object^ sender, System::EventArgs^ e)
{
	FFind^ form = gcnew FFind();
	form->Show();
	this->Hide();
}

System::Void TravelAgency::FMainMenu::buttonEditorForm_Click(System::Object^ sender, System::EventArgs^ e)
{
	FEdit^ form = gcnew FEdit();
	form->Show();
	this->Hide();
}
