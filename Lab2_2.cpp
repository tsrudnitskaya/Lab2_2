#include "Lab2_2.h"
#include "lab_files/lab2_2_func.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Lab22::Lab2_2 form;
	Application::Run(% form);
}




System::Void Lab22::Lab2_2::cbBegin_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	switch (cbBegin->SelectedIndex) {
	case 0:
		insertNTb->BackColor = Color::White;
		insertNPanel->Visible = true;
		browseBtn->Visible = false;
		break;
	case 1:
		insertNPanel->Visible = false;
		browseBtn->Visible = true;
		break;
	case 2:
		insertNPanel->Visible = false;
		browseBtn->Visible = false;
		richTextBox1->Enabled = true;
	}
}

void Lab22::Lab2_2::showErr(String^ text)
{
	MessageBox::Show(text, "ќшибка!");
}


System::Void Lab22::Lab2_2::formBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	int num, err = 0;
	labTimer t;
	switch (cbBegin->SelectedIndex) {
	case 0:
		if (!getIntFromString(insertNTb->Text, num)) {
			insertNTb->BackColor = Color::LightPink;
			return;
		}
		if (radioArray->Checked) {
			N = num;
			delete[] dynamicArray;
			dynamicArray = new int[N];
			generateArray(N, dynamicArray);
		}
		if (radioList->Checked) {
			listN = num;
			listDestr();
			list = generateList(listN);
		}
		break;
	case 1:
		if (!checkFile(filename)) {
			showErr("‘айл не найден!");
			return;
		}
		else {
			std::string str = getStringFromFile(filename);
			num = getNumOfNumsFromString(str);
			if (!num) {
				showErr("‘айл пустой или заполнен неправильно!");
				err++;
				return;
			}
			if (radioArray->Checked) {
				delete[] dynamicArray;
				dynamicArray = new int[num];
				if (!parceStringToArray(str, num, dynamicArray)) {
					err++;
					showErr("ќшибка парсинга строки");
				}
				else
					N = num;
			}
			if (radioList->Checked) {
				listDestr();
				list = parceStringToList(str, num);
				if (!list) {
					err++;
					showErr("ќшибка парсинга строки");
				}
				else {
					listN = num;
				}
			}
		}
		break;
	case 2:
		if (richTextBox1->Text == "") {
			richTextBox1->BackColor = Color::LightPink;
			return;
		}
		else {
			std::string s;
			convert_String_to_string(richTextBox1->Text, s);
			num = getNumOfNumsFromString(s);
			if (radioArray->Checked) {
				N = num;
				delete[] dynamicArray;
				dynamicArray = new int[N];
				if (!parceStringToArray(s, num, dynamicArray)) {
					err++;
					showErr("ќшибка парсинга строки");
				}
				else
					N = num;
			}
			if (radioList->Checked) {
				listDestr();
				list = parceStringToList(s, num);
				if (!list) {
					err++;
					showErr("ќшибка парсинга строки");
				}
				else {
					listN = num;
				}
			}
		}
		break;
	}
	timeText->Text = t.elapsed().ToString() + " мкс";
	if (radioArray->Checked && err == 0) {
		arrayText->Text = formArrayOut(N, dynamicArray);
	}
	if (radioList->Checked && err == 0) {
		listText->Text = formListOut(list);
	}

	return;
}

void Lab22::Lab2_2::listDestr(){
	listItem* Next;
	while (list) {
		Next = list->next;
		delete list;
		list = Next;
	}
	delete list;
	list = 0;
}

listItem* Lab22::Lab2_2::generateList(int listWidth)
{
	listItem* Curr = 0,
			* Next = 0;

	srand(time(0));
	for (int i = 1; i <= listWidth; ++i) {
		Curr = new listItem;
		Curr->data = getRandomNumber(min, max);
		Curr->next = Next;
		if (Next)
			Next->prev = Curr;
		Next = Curr;
	}
	Curr->prev = 0;
	return Curr;
}




int Lab22::Lab2_2::parceStringToArray(std::string s, int num, int* arr)
{
	std::string temp = s;
	int el;
	for (int i = 0; i < num; ++i) {
		el = getFirstNumFromString(temp);
		if(el>=0)
			arr[i] = el;
		else {
			return 0;
		}
	}
	return 1;
}

listItem* Lab22::Lab2_2::parceStringToList(std::string s, int num)
{
	std::string temp = s;
	int el;
	listItem* Curr = 0,
		* Next = 0;
	for (int i = 1; i <= num; ++i) {
		Curr = new listItem;
		el = getLastNumFromString(temp);
		if (el >= 0)
			Curr->data = el;
		else {
			return 0;
		}
		Curr->next = Next;
		if (Next)
			Next->prev = Curr;
		Next = Curr;
	}
	Curr->prev = 0;
	return Curr;
}


void Lab22::Lab2_2::generateArray(int num, int* Arr)
{
	generateArrayElements(num, min, max, Arr);
}

listItem* Lab22::Lab2_2::foundForIdInList(int id)
{
	listItem* Curr = list;
	int i = 0;
	while (Curr) {
		if (i == id) break;
		Curr = Curr->next;
		i++;
	}
	
	return (Curr)? Curr : 0;
}
listItem* Lab22::Lab2_2::foundForValuerInList(int num, int& id)
{
	listItem* Curr = list;
	for (int i = 0; i < listN; i++) {
		if (Curr->data == num) {
			id = i;
			return Curr;
		}
		else Curr = Curr->next;
	}
	return 0;
}
System::Void Lab22::Lab2_2::addBtn_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	int num;
	if (!getIntFromString(numTb->Text, num))
		numTb->BackColor = Color::LightPink;
	else {
		if (radioArray->Checked) {
			labTimer t;
			addToArray(num, dynamicArray);
			timeText->Text = t.elapsed().ToString() + " мкс";
			arrayText->Text = formArrayOut(N, dynamicArray);
		}
		if (radioList->Checked) {
			if (listN) {
				labTimer t;
				addToList(num);
				timeText->Text = t.elapsed().ToString() + " мкс";
				listText->Text = formListOut(list);
			}
			else showErr("—писок необходимо сначала наполнить значени€ми!");
		}
	}
}



void Lab22::Lab2_2::addToArray(int num, int*& arr)
{
	if (N) {
		N += 1;
		int* temp = new int[N];
		for (int i = 0; i < N; ++i)
			temp[i] = arr[i];
		temp[N - 1] = num;
		delete[] arr;
		arr = temp;
	}
	else showErr("ћассив сначала нужно создать!");
}

void Lab22::Lab2_2::addToList(int num)
{
	listItem* Last = foundForIdInList(listN - 1);
	listItem* New = new listItem;
	New->data = num;
	New->next = 0;
	New->prev = Last;
	Last->next = New;
	listN++;
}
void Lab22::Lab2_2::deleteFromList(listItem* del)
{
	listItem* preview = del->prev;
	listItem* next = del->next;
	if (!preview) {
		if (next) {
			next->prev = 0;
			list = next;
		}
	}
	else if (!next) {
		preview->next = 0;
	}
	else {
		preview->next = del->next;
		next->prev = del->prev;
	}
	delete del;
	listN--;
}
void Lab22::Lab2_2::deleteForIdFromList(int num)
{
	listItem* del = foundForIdInList(num);
	deleteFromList(del);

}

System::Void Lab22::Lab2_2::deleteId_Click(System::Object^ sender, System::EventArgs^ e)
{
	int num;
	if (!getIntFromString(numTb->Text, num))
		numTb->BackColor = Color::LightPink;
	else {
		labTimer t;
		if (radioArray->Checked && isIdInArray(num)) {
			deleteForId(num, dynamicArray);
			arrayText->Text = formArrayOut(N, dynamicArray);
		}
		if (radioList->Checked && isIdInList(num)) {
			deleteForIdFromList(num);
			listText->Text = formListOut(list);
		}
		timeText->Text = t.elapsed().ToString() + " мкс";
	}
}



void Lab22::Lab2_2::deleteForId(int num, int*& arr)
{
		int* temp = new int[N - 1];
		for (int i = 0; i < num; ++i)
			temp[i] = arr[i];
		for (int i = num + 1; i < N; ++i) {
			temp[i - 1] = arr[i];
		}
		delete[] arr;
		arr = temp;
		N--;
}





System::Void Lab22::Lab2_2::deleteValue_Click(System::Object^ sender, System::EventArgs^ e)
{
	int num;
	if (!getIntFromString(numTb->Text, num))
		numTb->BackColor = Color::LightPink;
	else
	{
		if (radioArray->Checked) {
			deleteForValue(num, dynamicArray);
			arrayText->Text = formArrayOut(N, dynamicArray);
		}
		if (radioList->Checked) {
			deleteForValueFromList(num);
			listText->Text = formListOut(list);
		}	
	}
		
}

void Lab22::Lab2_2::deleteForValue(int num, int*& arr)
{
	int id = foundForValue(num, arr);
	
	if (id >= 0) {
		labTimer t;
		deleteForId(id, dynamicArray);
		timeText->Text = t.elapsed().ToString() + " мкс";
		MessageBox::Show("”казанное значение было встречено на позиции с индексом "+ id + ". Ёлемент успешно удалЄн", "ƒл€ информации");
	}
	else {
		MessageBox::Show("”казанное значение не найдено", "ƒл€ информации");
	}
}


void Lab22::Lab2_2::deleteForValueFromList(int num)
{
	int id;
	listItem* del = foundForValuerInList(num, id);
	if (del) {
		labTimer t;
		deleteFromList(del);
		timeText->Text = t.elapsed().ToString() + " мкс";
		MessageBox::Show("”казанное значение было встречено на позиции с индексом " + id + ". Ёлемент успешно удалЄн", "ƒл€ информации");
	}
	else MessageBox::Show("„исло " + num + " было не найдено", "ƒл€ информации");
}

System::Void Lab22::Lab2_2::foundId_Click(System::Object^ sender, System::EventArgs^ e)
{
	int num;
	if (!getIntFromString(numTb->Text, num))
		numTb->BackColor = Color::LightPink;
	else
	{
		if (radioArray->Checked && isIdInArray(num)) {
			foundForId(num, dynamicArray);
			timeText->Text = "0";
		}
		if (radioList->Checked && isIdInList(num)) {
			labTimer t;
			listItem* id = foundForIdInList(num);
			timeText->Text = t.elapsed().ToString() + " мкс";
			if (id) {
				MessageBox::Show("Ёлемент с индексом " + num + " равен " + (id->data).ToString(), "ƒл€ информации");
			}
		}
	}		
}



int Lab22::Lab2_2::isIdInList(int num)
{
	if (listN == 0) {
		MessageBox::Show("—писок сначала нужно заполнить", "ќшибка");
		return 0;
	}

	if (num >= listN || num < 0) {
		MessageBox::Show("»ндекс вне пределов списка!", "ќшибка");
		return 0;
	}
	return 1;
}

int Lab22::Lab2_2::isIdInArray(int num)
{
	if (N == 0) {
		MessageBox::Show("ћассив сначала нужно заполнить", "ќшибка");
		return 0;
	}

	if (num >= N || num < 0) {
		MessageBox::Show("»ндекс вне пределов массива!", "ќшибка");
		return 0;
	}
	return 1;
}


void Lab22::Lab2_2::foundForId(int num, int*& arr)
{
	if (num <= N && num >= 0) {
		MessageBox::Show("Ёлемент с индексом " + num + " равен " + arr[num], "ƒл€ информации");
	}
	else {
		MessageBox::Show("»ндекс вне пределов массива!", "ќшибка");
	}
}



System::Void Lab22::Lab2_2::foundValue_Click(System::Object^ sender, System::EventArgs^ e)
{
	int num;
	if (!getIntFromString(numTb->Text, num))
		numTb->BackColor = Color::LightPink;
	else {
		if (radioArray->Checked) {
			int id = 0;
			labTimer t;
			id = foundForValue(num, dynamicArray);
			timeText->Text = t.elapsed().ToString() + " мкс";
			if (id >= 0) {
				MessageBox::Show("Ёлемент со значением " + num + " был найден по индексу " + id, "ƒл€ информации");
			}
			else {
				MessageBox::Show("Ёлемент со значением " + num + " не найден!", "ƒл€ информации");
			}
		}
		if (radioList->Checked) {
			int id = 0;
			labTimer t;
			listItem* Curr = foundForValuerInList(num, id);
			timeText->Text = t.elapsed().ToString() + " мкс";
			if (Curr) {
				MessageBox::Show("Ёлемент со значением " + num + " был найден по индексу " + id, "ƒл€ информации");
			}
			else {
				MessageBox::Show("Ёлемент со значением " + num + " не найден!", "ƒл€ информации");
			}
		}
	}
		
}

System::Void Lab22::Lab2_2::browseBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	openFileDialog1->InitialDirectory = Application::StartupPath;
	openFileDialog1->Filter = "txt files (*.txt)|*.txt";
	openFileDialog1->ShowDialog();
	convert_String_to_string(openFileDialog1->FileName, filename);
	formBtn->Enabled = true;
}

int Lab22::Lab2_2::foundForValue(int num, int*& arr)
{
	int id = -1;
	for (int i = 0; i < N; ++i) {
		if (arr[i] == num) {
			id = i;
			break;
		}
	}
	return id;
}







String^ Lab22::Lab2_2::formListOut(listItem* begin)
{
	String^ text = "";
	listItem* Curr = begin;
	while (Curr) {
		text += Curr->data.ToString() + " ";
		Curr = Curr->next;
	}
	return text;
}


