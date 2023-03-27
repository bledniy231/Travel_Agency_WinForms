#pragma once
#include <string>
#include <iostream>
#include <wchar.h>
#include <Windows.h>

#include <fstream>
#include "single_include/nlohmann/json.hpp"

using json = nlohmann::json;
using namespace std;
using namespace System;

// Структура данных
struct SData {
	int id;
	string name;
	string contry;
	string city;
	string accommodation;
	string passage;
	string service;
	float cost;
};

// Узел списка
class Node
{

public:	
	SData value;

	class Node* ptr;
	friend class ListTravelAgency;
};

// Класс списка туристических агенств
class ListTravelAgency
{
	Node* head;				// Корень списка
	int count = 0;			// Количество узлов списка
	Node* Prev(Node*);		// Переход к предыдущему узлу 
	string Split(string);	// Убрать лишнее у искомой строки

public:
	ListTravelAgency() { head = NULL; } // констурктор 
	~ListTravelAgency();				// деструктор 

	int Count() { return count; }							// Получение количества узлов списка
	bool IsEmpty() { return head == NULL; }					// Проверка, пуст ли список
	Node* GetNode(int);										// Получение значения узла списка
	Node* GetFirst() { return head; }						// Получение корневого узла списка
	Node* GetLast();										// Получение последнего узла списка
	void Clear();											// Очистка списка
	Node* Next(Node*);										// Переход к следующему узлу
	Node* Add(SData val, Node* node = NULL);				// Добавление узла списка
	void Edit(int i, SData val);							// Изменение значения узла списка
	Node* Delete(int);										// Удаление узла списка
	int GetLastId();										// вернуть последний занятый id

	bool SaveByJSON();										// Сохранение с помощъю JSON
	bool LoadByJSON();										// Загрузка с помощъю JSON

	json ToJSON(SData);										// Преобразовать в JSON
	SData FromJSON(json const);								// Преобразовать из JSON
};

/*	Прототипы функций	*/
std::string ConvertToString(System::String^ s);		// конвертируем System::string ^ в std::string
String^ ConvertToString(std::string& os);			// конвертируем std::string в System::string ^  
System::String^ ConvertToString(char* ch);			// конвертируем char* в System::String^
std::string UTF8toCP1251(std::string const& utf8);	// перекодирует из UTF-8 в CP1251 
std::string CP1251toUTF8(const char* str);			// перекодирует из CP1251 в UTF-8
