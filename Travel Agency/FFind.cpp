#include "FFind.h"
#include "FMainMenu.h"
#include "FReport.h"

System::Void TravelAgency::FFind::âûõîäÈçÏğîãğàììûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (MessageBox::Show("Ïğîäîëæèòü âûõîä?", "Âíèìàíèå!", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::No)
        return;

    Application::Exit();
}

System::Void TravelAgency::FFind::íàçàäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (MessageBox::Show("Ïğîäîëæèòü âûõîä?", "Âíèìàíèå!", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::No)
        return;

    FMainMenu^ form = gcnew FMainMenu();
    form->Show();
    this->Hide();
}

System::Void TravelAgency::FFind::buttonSerachByContry_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBoxCountry->Text == "") {
        MessageBox::Show("Íå âñå ïîëÿ ââåäåíû!", "Âíèìàíèå!");
        return;
    }

    FReport^ form = gcnew FReport();
    form->Show();
    form->Search(1, textBoxCountry->Text);
}

System::Void TravelAgency::FFind::buttonSerachByCity_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBoxCity->Text == "") {
        MessageBox::Show("Íå âñå ïîëÿ ââåäåíû!", "Âíèìàíèå!");
        return;
    }

    FReport^ form = gcnew FReport();
    form->Show();
    form->Search(2, textBoxCity->Text);
}

System::Void TravelAgency::FFind::buttonSerachByTravel_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (comboBoxTravel->SelectedIndex == -1) {
        MessageBox::Show("Íå âñå ïîëÿ ââåäåíû!", "Âíèìàíèå!");
        return;
    }

    FReport^ form = gcnew FReport();
    form->Show();
    form->Search(3, comboBoxTravel->SelectedItem->ToString());
}

System::Void TravelAgency::FFind::buttonSerachByAccommodation_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (comboBoxAccommodation->SelectedIndex == -1) {
        MessageBox::Show("Íå âñå ïîëÿ ââåäåíû!", "Âíèìàíèå!");
        return;
    }

    FReport^ form = gcnew FReport();
    form->Show();
    form->Search(4, comboBoxAccommodation->SelectedItem->ToString());
}

System::Void TravelAgency::FFind::buttonSerachByService_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (comboBoxService->SelectedIndex == -1) {
        MessageBox::Show("Íå âñå ïîëÿ ââåäåíû!", "Âíèìàíèå!");
        return;
    }

    FReport^ form = gcnew FReport();
    form->Show();
    form->Search(5, comboBoxService->SelectedItem->ToString());
}

System::Void TravelAgency::FFind::buttonSerachByCost_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBoxCost->Text == "") {
        MessageBox::Show("Íå âñå ïîëÿ ââåäåíû!", "Âíèìàíèå!");
        return;
    }

    FReport^ form = gcnew FReport();
    form->Show();
    form->Search(Convert::ToSingle(textBoxCost->Text));
}

System::Void TravelAgency::FFind::textBoxCost_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
    if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar))
    {
        e->Handled = true;
        return;
    }
}
