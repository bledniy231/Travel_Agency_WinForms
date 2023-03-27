#include "FEdit.h"
#include "FMainMenu.h"
#include "ListTravelAgency.h"

ListTravelAgency listTA;

void TravelAgency::FEdit::PrintData()
{
    dataGridView->Rows->Clear();

    Node* p = listTA.GetFirst();
    int q = 0;

    while (p != NULL) {
        dataGridView->Rows->Add(ConvertToString(p->value.name), ConvertToString(p->value.contry), ConvertToString(p->value.city),  
            ConvertToString(p->value.accommodation), ConvertToString(p->value.passage), ConvertToString(p->value.service), p->value.cost.ToString());
        dataGridView->Rows[q++]->HeaderCell->Value = p->value.id.ToString();

        p = p->ptr;
    }
}

void TravelAgency::FEdit::PrintSelectedData()
{
    Node* p = listTA.GetNode(selectedIndexData);
    if (p == NULL)
        return;

    textBoxId->Text = p->value.id.ToString();
    textBoxCity->Text = ConvertToString(p->value.city);
    textBoxCountry->Text = ConvertToString(p->value.contry);
    textBoxName->Text = ConvertToString(p->value.name);
    textBoxCost->Text = p->value.cost.ToString();

    /*
        Отель
        Апартаменты
        Вилла
    */
    if (p->value.accommodation == "Отель") {
        comboBoxAccommodation->SelectedIndex = 0;
    }
    else if (p->value.accommodation == "Апартаменты") {
        comboBoxAccommodation->SelectedIndex = 1;
    }
    else {
        comboBoxAccommodation->SelectedIndex = 2;
    }

    /*
         Самолет
         Поезд
    */
    if (p->value.passage == "Самолет") {
        comboBoxTravel->SelectedIndex = 0;
    }
    else {
        comboBoxTravel->SelectedIndex = 1;
    }

    /*
         BB
         HB
         AI
    */
    if (p->value.service == "BB") {
        comboBoxService->SelectedIndex = 0;
    }
    else if (p->value.service == "HB") {
        comboBoxService->SelectedIndex = 1;
    }
    else {
        comboBoxService->SelectedIndex = 2;
    }
}

System::Void TravelAgency::FEdit::FEdit_Load(System::Object^ sender, System::EventArgs^ e)
{
    dataGridView->TopLeftHeaderCell->Value = "Код";
    selectedIndexData = 0;

    PrintSelectedData();
}

System::Void TravelAgency::FEdit::выходИзПрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (MessageBox::Show("Продолжить выход?", "Внимание!", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::No)
        return;

    Application::Exit();
}

System::Void TravelAgency::FEdit::назадToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (MessageBox::Show("Продолжить выход?", "Внимание!", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::No)
        return;

    FMainMenu^ form = gcnew FMainMenu();
    form->Show();
    this->Hide();
}

System::Void TravelAgency::FEdit::загрузитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    try {
        if (listTA.LoadByJSON()) {
            MessageBox::Show("Данные загружены!", "Внимание!");
            PrintData();
        }
        else MessageBox::Show("Некорректный файл!", "Внимание!");
    }
    catch (char* message) {
        MessageBox::Show("Сообщение: " + ConvertToString(message),"Вызвано исключение!");
    }   
    catch (System::Runtime::InteropServices::SEHException^ ex) {
        MessageBox::Show("Сообщение: " + ex->Message->ToString(), "Вызвано исключение!");
    }
    catch (json::type_error ex) {
        string message = ex.what();
        MessageBox::Show("Сообщение: " + ConvertToString(message), "Вызвано исключение!");
    }
}

System::Void TravelAgency::FEdit::сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    try {
        if (listTA.SaveByJSON()) {
            MessageBox::Show("Данные сохранены!","Внимание!");
        }
    }
    catch (char* message) {
        MessageBox::Show("Сообщение: " + ConvertToString(message), "Вызвано исключение!");
    }
    catch (System::Runtime::InteropServices::SEHException^ ex) {
        MessageBox::Show("Сообщение: " + ex->Message->ToString(), "Вызвано исключение!");
    }
    catch (json::type_error ex) {
        string message = ex.what();
        MessageBox::Show("Сообщение: " + ConvertToString(message), "Вызвано исключение!");
    }
}

System::Void TravelAgency::FEdit::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBoxCity->Text == "" || textBoxName->Text == "" || textBoxCountry->Text == "" || textBoxCost->Text == "" ||
        comboBoxAccommodation->SelectedIndex == -1 || comboBoxService->SelectedIndex == -1 || comboBoxTravel->SelectedIndex == -1) {
        MessageBox::Show("Не все поля введены!","Внимание!");
        return;
    }

    SData d;
    d.accommodation = ConvertToString(comboBoxAccommodation->SelectedItem->ToString());
    d.service = ConvertToString(comboBoxService->SelectedItem->ToString());
    d.passage = ConvertToString(comboBoxTravel->SelectedItem->ToString());
    d.name = ConvertToString(textBoxName->Text);
    d.city = ConvertToString(textBoxCity->Text);
    d.contry = ConvertToString(textBoxCountry->Text);
    d.cost = Convert::ToSingle(textBoxCost->Text);

    listTA.Add(d);
    MessageBox::Show("Данные добавлены!", "Внимание!");
    PrintData();
}

System::Void TravelAgency::FEdit::buttonDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (MessageBox::Show("Продолжить удаление?", "Внимание!", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::Yes) {
        listTA.Delete(selectedIndexData);
        MessageBox::Show("Данные удалены!", "Внимание!");
        PrintData();
    }
}

System::Void TravelAgency::FEdit::buttonEdit_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBoxCity->Text == "" || textBoxName->Text == "" || textBoxCountry->Text == "" || textBoxCost->Text == "" ||
        comboBoxAccommodation->SelectedIndex == -1 || comboBoxService->SelectedIndex == -1 || comboBoxTravel->SelectedIndex == -1) {
        MessageBox::Show("Не все поля введены!", "Внимание!");
        return;
    }

    SData d;
    d.accommodation = ConvertToString(comboBoxAccommodation->SelectedItem->ToString());
    d.service = ConvertToString(comboBoxService->SelectedItem->ToString());
    d.passage = ConvertToString(comboBoxTravel->SelectedItem->ToString());
    d.name = ConvertToString(textBoxName->Text);
    d.city = ConvertToString(textBoxCity->Text);
    d.contry = ConvertToString(textBoxCountry->Text);
    d.cost = Convert::ToSingle(textBoxCost->Text);

    listTA.Edit(selectedIndexData, d);
    MessageBox::Show("Данные изменены!", "Внимание!");
    PrintData();
}

System::Void TravelAgency::FEdit::buttonPrevious_Click(System::Object^ sender, System::EventArgs^ e)
{
    selectedIndexData - 1 < 0 ? selectedIndexData = listTA.Count() - 1 : selectedIndexData--;
    PrintSelectedData();
}

System::Void TravelAgency::FEdit::buttonNext_Click(System::Object^ sender, System::EventArgs^ e)
{
    selectedIndexData + 1 >= listTA.Count() ? selectedIndexData = 0 : selectedIndexData++;
    PrintSelectedData();
}

System::Void TravelAgency::FEdit::textBoxCost_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
    if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar))
    {
        e->Handled = true;
        return;
    }
}
