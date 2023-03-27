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

// ��������� ������
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

// ���� ������
class Node
{

public:	
	SData value;

	class Node* ptr;
	friend class ListTravelAgency;
};

// ����� ������ ������������� �������
class ListTravelAgency
{
	Node* head;				// ������ ������
	int count = 0;			// ���������� ����� ������
	Node* Prev(Node*);		// ������� � ����������� ���� 
	string Split(string);	// ������ ������ � ������� ������

public:
	ListTravelAgency() { head = NULL; } // ����������� 
	~ListTravelAgency();				// ���������� 

	int Count() { return count; }							// ��������� ���������� ����� ������
	bool IsEmpty() { return head == NULL; }					// ��������, ���� �� ������
	Node* GetNode(int);										// ��������� �������� ���� ������
	Node* GetFirst() { return head; }						// ��������� ��������� ���� ������
	Node* GetLast();										// ��������� ���������� ���� ������
	void Clear();											// ������� ������
	Node* Next(Node*);										// ������� � ���������� ����
	Node* Add(SData val, Node* node = NULL);				// ���������� ���� ������
	void Edit(int i, SData val);							// ��������� �������� ���� ������
	Node* Delete(int);										// �������� ���� ������
	int GetLastId();										// ������� ��������� ������� id

	bool SaveByJSON();										// ���������� � ������� JSON
	bool LoadByJSON();										// �������� � ������� JSON

	json ToJSON(SData);										// ������������� � JSON
	SData FromJSON(json const);								// ������������� �� JSON
};

/*	��������� �������	*/
std::string ConvertToString(System::String^ s);		// ������������ System::string ^ � std::string
String^ ConvertToString(std::string& os);			// ������������ std::string � System::string ^  
System::String^ ConvertToString(char* ch);			// ������������ char* � System::String^
std::string UTF8toCP1251(std::string const& utf8);	// ������������ �� UTF-8 � CP1251 
std::string CP1251toUTF8(const char* str);			// ������������ �� CP1251 � UTF-8
