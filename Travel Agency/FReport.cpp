#include "FReport.h"
#include "ListTravelAgency.h"

ListTravelAgency listBySearch;

System::Void TravelAgency::FReport::FReport_Load(System::Object^ sender, System::EventArgs^ e)
{
    dataGridView->TopLeftHeaderCell->Value = "���";
    listBySearch.LoadByJSON();

    if (listBySearch.IsEmpty()) {
        MessageBox::Show("������ �����!","��������!");
        this->Hide();
    }
}

// mode = 1 - ����� �� ������
// mode = 2 - ����� �� ������
// mode = 3 - ����� �� �������
// mode = 4 - ����� �� ����������
// mode = 5 - ����� �� �������
void TravelAgency::FReport::Search(int mode, String^ str)
{
    std::string search = ConvertToString(str);
    bool found = false;

    Node* p = listBySearch.GetFirst();
    int q = 0;

    switch (mode)
    {
    case 1:
        while (p != NULL) {
            if (p->value.contry == search) {
                found = true;

                dataGridView->Rows->Add(ConvertToString(p->value.name), ConvertToString(p->value.contry), ConvertToString(p->value.city),
                    ConvertToString(p->value.accommodation), ConvertToString(p->value.passage), ConvertToString(p->value.service), p->value.cost.ToString());
                dataGridView->Rows[q++]->HeaderCell->Value = p->value.id.ToString();
            }

            p = p->ptr;
        }
        break;

    case 2:
        while (p != NULL) {
            if (p->value.city == search) {
                found = true;

                dataGridView->Rows->Add(ConvertToString(p->value.name), ConvertToString(p->value.contry), ConvertToString(p->value.city),
                    ConvertToString(p->value.accommodation), ConvertToString(p->value.passage), ConvertToString(p->value.service), p->value.cost.ToString());
                dataGridView->Rows[q++]->HeaderCell->Value = p->value.id.ToString();
            }

            p = p->ptr;
        }
        break;

    case 3:
        while (p != NULL) {
            if (p->value.passage == search) {
                found = true;

                dataGridView->Rows->Add(ConvertToString(p->value.name), ConvertToString(p->value.contry), ConvertToString(p->value.city),
                    ConvertToString(p->value.accommodation), ConvertToString(p->value.passage), ConvertToString(p->value.service), p->value.cost.ToString());
                dataGridView->Rows[q++]->HeaderCell->Value = p->value.id.ToString();
            }

            p = p->ptr;
        }
        break;

    case 4:
        while (p != NULL) {
            if (p->value.accommodation == search) {
                found = true;

                dataGridView->Rows->Add(ConvertToString(p->value.name), ConvertToString(p->value.contry), ConvertToString(p->value.city),
                    ConvertToString(p->value.accommodation), ConvertToString(p->value.passage), ConvertToString(p->value.service), p->value.cost.ToString());
                dataGridView->Rows[q++]->HeaderCell->Value = p->value.id.ToString();
            }

            p = p->ptr;
        }
        break;

    case 5:
        while (p != NULL) {
            if (p->value.service == search) {
                found = true;

                dataGridView->Rows->Add(ConvertToString(p->value.name), ConvertToString(p->value.contry), ConvertToString(p->value.city),
                    ConvertToString(p->value.accommodation), ConvertToString(p->value.passage), ConvertToString(p->value.service), p->value.cost.ToString());
                dataGridView->Rows[q++]->HeaderCell->Value = p->value.id.ToString();
            }

            p = p->ptr;
        }
        break;

    default:
        break;
    }

    if (!found) {
        MessageBox::Show("���������� �� �������!","��������!");
        this->Hide();
    }
}

void TravelAgency::FReport::Search(float cost)  //����� �� ����
{
    Node* p = listBySearch.GetFirst();
    int q = 0;
    bool found = false;

    while (p != NULL) {
        if (p->value.cost <= cost) {
            found = true;

            dataGridView->Rows->Add(ConvertToString(p->value.name), ConvertToString(p->value.contry), ConvertToString(p->value.city),
                ConvertToString(p->value.accommodation), ConvertToString(p->value.passage), ConvertToString(p->value.service), p->value.cost.ToString());
            dataGridView->Rows[q++]->HeaderCell->Value = p->value.id.ToString();
        }

        p = p->ptr;
    }

    if (!found) {
        MessageBox::Show("���������� �� �������!", "��������!");
        this->Hide();
    }
}

System::Void TravelAgency::FReport::�������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide();
}
