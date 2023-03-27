#include "ListTravelAgency.h"

Node* ListTravelAgency::Prev(Node* node)
{
    if (IsEmpty()) 
        return NULL;

    if (node == head) 
        return NULL;

    Node* p = head;
    while (p->ptr != node)
        p = p->ptr;
    return p;
}

string ListTravelAgency::Split(string str)
{
    string s = "";
    for (int i = 0; i < str.size(); i++) {
        if (str[i] != ']' && str[i] != '[' && str[i] != '"') {
            s += str[i];
        }
    }

    return s;
}

ListTravelAgency::~ListTravelAgency()
{
    Clear();
}

void ListTravelAgency::Edit(int i, SData val)
{
    if (i < 0 || i >= count) {
        throw "Индекс вне диапазона!";
    }

    int id = GetNode(i)->value.id;
    Node* node = head;
    while (node != NULL)
    {
        if (i == 0)
            break;

        node = node->ptr;
        i--;
    }

    node->value = val;
    node->value.id = id;
}

Node* ListTravelAgency::GetNode(int i)
{
    if(IsEmpty())
        return NULL;

    if (i < 0 || i >= count) {
        throw "Индекс вне диапазона!";
    }

    Node* node = head;
    while (node != NULL)
    {
        if (i == 0)
            break;

        node = node->ptr;
        i--;
    }

    return node;
}

Node* ListTravelAgency::GetLast()
{
    Node* p = head;
    while (Next(p) != NULL)
        p = Next(p);
    return p;
}

void ListTravelAgency::Clear()
{
    class Node* p = head;
    if (p == NULL) return;
    do {
        Node* d = p;
        p = Next(p);
        delete d;
    } while (p != NULL);
    count = 0;
    head = NULL;
}

Node* ListTravelAgency::Next(Node* node)
{
    if (IsEmpty())
        return NULL;

    return node->ptr;
}

Node* ListTravelAgency::Add(SData val, Node* node)
{
    val.id = GetLastId() + 1;

    Node* elem = new Node();
    elem->value = val;
    elem->ptr = NULL;
    count++;

    if (node == NULL) // Добавление нового корня
    {
        // В начало, если нет 
        if (head == NULL) {
            elem->ptr = NULL;
            head = elem;
        }
        else {  // иначе в конец
            GetLast()->ptr = elem;
        }
        return elem;
    }

    // Добавление узла после текущего
    elem->ptr = node->ptr; 
    node->ptr = elem;
    return elem;
}

Node* ListTravelAgency::Delete(int i)
{
    if (i < 0 || i >= count) {
        throw "Индекс вне диапазона!";
    }

    Node* node = head;
    while (node != NULL)
    {
        if (i == 0)
            break;

        node = node->ptr;
        i--;
    }

    // В списке нет узлов
    if (node == NULL) {
        return NULL; 
    } 
    count--;

    // Удаление корневого узла
    if (node == head)  
    {
        head = node->ptr;
        delete node;
        return head;
    }

    // Удаление промежуточного узла
    Node* prev = Prev(node); 
    prev->ptr = node->ptr;
    delete node;

    return prev;
}

int ListTravelAgency::GetLastId()
{
    int id = 0;

    Node* p = head;
    while (p != NULL) {
        if (id < p->value.id) {
            id = p->value.id;
        }

        p = p->ptr;
    }

    return id;
}

bool ListTravelAgency::SaveByJSON()
{
    json j;
    j["count"] = count;

    int i = 1;
    Node* p = head;
    while (p != NULL) {
        // Добавляем новые значения
        j[to_string(i)] = ToJSON(p->value);

        i++;
        p = p->ptr;
    }

    ofstream save("data.json");
    save << std::setw(4) << j << std::endl;

    return true;
}

bool ListTravelAgency::LoadByJSON()
{
    ifstream load("data.json");
    json j;
    load >> j;

    if (!IsEmpty()) {
        Clear();
    }

    int countData = j["count"];

    for (int i = 1; i <= countData; i++) {
        SData d;
        d = FromJSON(j[to_string(i)]);
        Add(d);
    }

    return !IsEmpty();
}

json ListTravelAgency::ToJSON(SData value)
{
    json j;
    j["id"] = { value.id };
    j["name"] = { CP1251toUTF8(value.name.c_str()) };
    j["contry"] = { CP1251toUTF8(value.contry.c_str()) };
    j["city"] = { CP1251toUTF8(value.city.c_str()) };
    j["accommodation"] = { CP1251toUTF8(value.accommodation.c_str()) };
    j["travel"] = { CP1251toUTF8(value.passage.c_str()) };
    j["service"] = { CP1251toUTF8(value.service.c_str()) };
    j["cost"] = { value.cost };

    return j;
}

SData ListTravelAgency::FromJSON(json const j)
{
    SData d;

    d.id = atoi(Split(j["id"].dump()).c_str()); //atoi <cstdlib> преобразует string в int принимает на вход const char*
    d.name = UTF8toCP1251(Split(j["name"].dump()));
    d.contry = UTF8toCP1251(Split(j["contry"].dump()));
    d.city = UTF8toCP1251(Split(j["city"].dump()));
    d.accommodation = UTF8toCP1251(Split(j["accommodation"].dump())); //dump() фукция сериализации из json
    d.passage = UTF8toCP1251(Split(j["travel"].dump()));
    d.service = UTF8toCP1251(Split(j["service"].dump()));
    d.cost = atof(Split(j["cost"].dump()).c_str()); //atof <cstdlib> преобразует string в double принимает на вход const char*

    return d;
}

/*	Реализация функций	*/
// Конвертируем System::string ^ в std::string
std::string ConvertToString(System::String^ s) {
    using namespace Runtime::InteropServices;
    const char* chars =
        (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
    std::string	os = chars;
    Marshal::FreeHGlobal(IntPtr((void*)chars));
    return os;
}

// Конвертируем std::string в System::string ^ 
System::String^ ConvertToString(std::string& os) {
    System::String^ s = gcnew System::String(os.c_str()); // конвертируем

    return s;
}

// Конвертируем char* в System::String^
System::String^ ConvertToString(char* ch)
{
    char* chr = new char();
    chr = ch;
    System::String^ str;
    for (int i = 0; chr[i] != '\0'; i++)
    {
        str += wchar_t(ch[i]);
    }
    return str;
}

// Перекодирует из UTF-8 в CP1251 (anci)
std::string UTF8toCP1251(std::string const& utf8)
{
    std::string s1251;
    for (int i = 0; i < utf8.size(); ++i)
    {
        int b1 = (unsigned char)utf8[i];
        if ((b1 >> 5) == 6)
        {
            int b2 = (unsigned char)utf8[i + 1];
            if ((b1 == 208) && (b2 >= 144 && b2 <= 191))
            {
                s1251 += (char)(b2 + 48);
            }
            else if ((b1 == 209) && (b2 >= 128 && b2 <= 143))
            {
                s1251 += (char)(b2 + 112);
            }
            else if ((b1 == 208) && (b2 == 129))
            {
                s1251 += (char)(b2 + 39);
            }
            else if ((b1 == 209) && (b2 == 145))
            {
                s1251 += (char)(b2 + 39);
            }
            ++i;
        }
        else if ((b1 >> 7) == 0)
        {
            s1251 += b1;
        }
    }
    return s1251;
}

// Перекодирует из CP1251 в UTF-8
std::string CP1251toUTF8(const char* str)
{
    std::string res;
    wchar_t* ures = NULL;
    char* cres = NULL;

    int result_u = MultiByteToWideChar(1251, 0, str, -1, 0, 0);
    if (result_u != 0)
    {
        ures = new wchar_t[result_u];
        if (MultiByteToWideChar(1251, 0, str, -1, ures, result_u))
        {
            int result_c = WideCharToMultiByte(CP_UTF8, 0, ures, -1, 0, 0, 0, 0);
            if (result_c != 0)
            {
                cres = new char[result_c];
                if (WideCharToMultiByte(CP_UTF8, 0, ures, -1, cres, result_c, 0, 0))
                {
                    res = cres;
                }
            }
        }
    }

    delete[] ures;
    delete[] cres;

    return res;
}