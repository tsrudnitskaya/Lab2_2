#pragma once
#include "lab_files/lab2_2_data.h"

namespace Lab22 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Lab2_2
	/// </summary>
	public ref class Lab2_2 : public System::Windows::Forms::Form
	{
	public:
		Lab2_2(void)
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
		~Lab2_2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TextBox^ insertNTb;
	private: System::Windows::Forms::ComboBox^ cbBegin;






	private: System::Windows::Forms::Button^ browseBtn;
	private: System::Windows::Forms::Panel^ workingPanel;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ insertNPanel;
	private: System::Windows::Forms::Label^ timeText;



	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Panel^ leftPan;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ addBtn;




	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Button^ formBtn;
	private: System::Windows::Forms::Panel^ panel2;


	private: System::Windows::Forms::RichTextBox^ arrayText;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ foundValue;

	private: System::Windows::Forms::Button^ foundId;

	private: System::Windows::Forms::Button^ deleteValue;

	private: System::Windows::Forms::Button^ deleteId;

	private: System::Windows::Forms::TextBox^ numTb;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RadioButton^ radioList;
	private: System::Windows::Forms::RadioButton^ radioArray;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::RichTextBox^ listText;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;



	protected:



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Lab2_2::typeid));
			this->insertNPanel = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->insertNTb = (gcnew System::Windows::Forms::TextBox());
			this->browseBtn = (gcnew System::Windows::Forms::Button());
			this->cbBegin = (gcnew System::Windows::Forms::ComboBox());
			this->workingPanel = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->listText = (gcnew System::Windows::Forms::RichTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->arrayText = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->timeText = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->addBtn = (gcnew System::Windows::Forms::Button());
			this->leftPan = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->foundValue = (gcnew System::Windows::Forms::Button());
			this->foundId = (gcnew System::Windows::Forms::Button());
			this->deleteValue = (gcnew System::Windows::Forms::Button());
			this->deleteId = (gcnew System::Windows::Forms::Button());
			this->numTb = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->formBtn = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->radioList = (gcnew System::Windows::Forms::RadioButton());
			this->radioArray = (gcnew System::Windows::Forms::RadioButton());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->insertNPanel->SuspendLayout();
			this->workingPanel->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel1->SuspendLayout();
			this->leftPan->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// insertNPanel
			// 
			this->insertNPanel->Controls->Add(this->label1);
			this->insertNPanel->Controls->Add(this->insertNTb);
			this->insertNPanel->Location = System::Drawing::Point(11, 38);
			this->insertNPanel->Name = L"insertNPanel";
			this->insertNPanel->Size = System::Drawing::Size(45, 40);
			this->insertNPanel->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(-1, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(15, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"N";
			// 
			// insertNTb
			// 
			this->insertNTb->Location = System::Drawing::Point(14, 10);
			this->insertNTb->Name = L"insertNTb";
			this->insertNTb->Size = System::Drawing::Size(27, 20);
			this->insertNTb->TabIndex = 5;
			this->insertNTb->Text = L"500";
			this->insertNTb->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Lab2_2::insertNTb_MouseDown);
			// 
			// browseBtn
			// 
			this->browseBtn->FlatAppearance->BorderSize = 0;
			this->browseBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->browseBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"browseBtn.Image")));
			this->browseBtn->Location = System::Drawing::Point(14, 40);
			this->browseBtn->Name = L"browseBtn";
			this->browseBtn->Size = System::Drawing::Size(37, 35);
			this->browseBtn->TabIndex = 1;
			this->browseBtn->UseVisualStyleBackColor = true;
			this->browseBtn->Visible = false;
			this->browseBtn->Click += gcnew System::EventHandler(this, &Lab2_2::browseBtn_Click);
			// 
			// cbBegin
			// 
			this->cbBegin->FormattingEnabled = true;
			this->cbBegin->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Сгенерировать данные", L"Загрузить из файла", L"Заполнить вручную" });
			this->cbBegin->Location = System::Drawing::Point(11, 13);
			this->cbBegin->Name = L"cbBegin";
			this->cbBegin->Size = System::Drawing::Size(204, 21);
			this->cbBegin->TabIndex = 4;
			this->cbBegin->Text = L"Сгенерировать данные";
			this->cbBegin->SelectedIndexChanged += gcnew System::EventHandler(this, &Lab2_2::cbBegin_SelectedIndexChanged);
			// 
			// workingPanel
			// 
			this->workingPanel->Controls->Add(this->panel6);
			this->workingPanel->Controls->Add(this->panel1);
			this->workingPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->workingPanel->Location = System::Drawing::Point(226, 0);
			this->workingPanel->Name = L"workingPanel";
			this->workingPanel->Size = System::Drawing::Size(558, 541);
			this->workingPanel->TabIndex = 5;
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->listText);
			this->panel6->Controls->Add(this->label6);
			this->panel6->Controls->Add(this->label5);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel6->Location = System::Drawing::Point(0, 270);
			this->panel6->Name = L"panel6";
			this->panel6->Padding = System::Windows::Forms::Padding(8);
			this->panel6->Size = System::Drawing::Size(558, 271);
			this->panel6->TabIndex = 106;
			// 
			// listText
			// 
			this->listText->BackColor = System::Drawing::Color::White;
			this->listText->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listText->Location = System::Drawing::Point(15, 44);
			this->listText->Name = L"listText";
			this->listText->ReadOnly = true;
			this->listText->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->listText->Size = System::Drawing::Size(530, 218);
			this->listText->TabIndex = 108;
			this->listText->TabStop = false;
			this->listText->Text = L"";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(11, 15);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(148, 19);
			this->label6->TabIndex = 107;
			this->label6->Text = L"Двусвязный список";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(11, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 102;
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->arrayText);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Padding = System::Windows::Forms::Padding(8);
			this->panel1->Size = System::Drawing::Size(558, 541);
			this->panel1->TabIndex = 2;
			// 
			// arrayText
			// 
			this->arrayText->BackColor = System::Drawing::Color::White;
			this->arrayText->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->arrayText->Location = System::Drawing::Point(14, 37);
			this->arrayText->Name = L"arrayText";
			this->arrayText->ReadOnly = true;
			this->arrayText->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->arrayText->Size = System::Drawing::Size(531, 218);
			this->arrayText->TabIndex = 106;
			this->arrayText->TabStop = false;
			this->arrayText->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(10, 8);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 19);
			this->label3->TabIndex = 105;
			this->label3->Text = L"Динамический массив";
			// 
			// timeText
			// 
			this->timeText->AutoSize = true;
			this->timeText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timeText->ForeColor = System::Drawing::Color::White;
			this->timeText->Location = System::Drawing::Point(125, 519);
			this->timeText->Name = L"timeText";
			this->timeText->Size = System::Drawing::Size(0, 13);
			this->timeText->TabIndex = 104;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(11, 519);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 13);
			this->label2->TabIndex = 103;
			this->label2->Text = L"Время выполнения:";
			// 
			// addBtn
			// 
			this->addBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->addBtn->AutoSize = true;
			this->addBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->addBtn->FlatAppearance->BorderSize = 0;
			this->addBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addBtn->ForeColor = System::Drawing::Color::White;
			this->addBtn->Location = System::Drawing::Point(11, 49);
			this->addBtn->Name = L"addBtn";
			this->addBtn->Size = System::Drawing::Size(204, 35);
			this->addBtn->TabIndex = 105;
			this->addBtn->Text = L"Добавить число в массив";
			this->addBtn->UseVisualStyleBackColor = false;
			this->addBtn->Click += gcnew System::EventHandler(this, &Lab2_2::addBtn_Click_1);
			// 
			// leftPan
			// 
			this->leftPan->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(146)));
			this->leftPan->Controls->Add(this->label2);
			this->leftPan->Controls->Add(this->timeText);
			this->leftPan->Controls->Add(this->panel5);
			this->leftPan->Controls->Add(this->panel4);
			this->leftPan->Controls->Add(this->panel3);
			this->leftPan->Controls->Add(this->panel2);
			this->leftPan->Dock = System::Windows::Forms::DockStyle::Left;
			this->leftPan->Location = System::Drawing::Point(0, 0);
			this->leftPan->Name = L"leftPan";
			this->leftPan->Size = System::Drawing::Size(226, 541);
			this->leftPan->TabIndex = 5;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->foundValue);
			this->panel5->Controls->Add(this->foundId);
			this->panel5->Controls->Add(this->deleteValue);
			this->panel5->Controls->Add(this->deleteId);
			this->panel5->Controls->Add(this->numTb);
			this->panel5->Controls->Add(this->addBtn);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(0, 248);
			this->panel5->Name = L"panel5";
			this->panel5->Padding = System::Windows::Forms::Padding(8);
			this->panel5->Size = System::Drawing::Size(226, 269);
			this->panel5->TabIndex = 11;
			// 
			// foundValue
			// 
			this->foundValue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->foundValue->AutoSize = true;
			this->foundValue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->foundValue->FlatAppearance->BorderSize = 0;
			this->foundValue->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->foundValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->foundValue->ForeColor = System::Drawing::Color::White;
			this->foundValue->Location = System::Drawing::Point(11, 213);
			this->foundValue->Name = L"foundValue";
			this->foundValue->Size = System::Drawing::Size(204, 35);
			this->foundValue->TabIndex = 109;
			this->foundValue->Text = L"Найти элемент по значению";
			this->foundValue->UseVisualStyleBackColor = false;
			this->foundValue->Click += gcnew System::EventHandler(this, &Lab2_2::foundValue_Click);
			// 
			// foundId
			// 
			this->foundId->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->foundId->AutoSize = true;
			this->foundId->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->foundId->FlatAppearance->BorderSize = 0;
			this->foundId->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->foundId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->foundId->ForeColor = System::Drawing::Color::White;
			this->foundId->Location = System::Drawing::Point(11, 172);
			this->foundId->Name = L"foundId";
			this->foundId->Size = System::Drawing::Size(204, 35);
			this->foundId->TabIndex = 108;
			this->foundId->Text = L"Найти элемент по индексу";
			this->foundId->UseVisualStyleBackColor = false;
			this->foundId->Click += gcnew System::EventHandler(this, &Lab2_2::foundId_Click);
			// 
			// deleteValue
			// 
			this->deleteValue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->deleteValue->AutoSize = true;
			this->deleteValue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->deleteValue->FlatAppearance->BorderSize = 0;
			this->deleteValue->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleteValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->deleteValue->ForeColor = System::Drawing::Color::White;
			this->deleteValue->Location = System::Drawing::Point(11, 131);
			this->deleteValue->Name = L"deleteValue";
			this->deleteValue->Size = System::Drawing::Size(204, 35);
			this->deleteValue->TabIndex = 107;
			this->deleteValue->Text = L"Удалить введённое значение";
			this->deleteValue->UseVisualStyleBackColor = false;
			this->deleteValue->Click += gcnew System::EventHandler(this, &Lab2_2::deleteValue_Click);
			// 
			// deleteId
			// 
			this->deleteId->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->deleteId->AutoSize = true;
			this->deleteId->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->deleteId->FlatAppearance->BorderSize = 0;
			this->deleteId->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleteId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->deleteId->ForeColor = System::Drawing::Color::White;
			this->deleteId->Location = System::Drawing::Point(11, 90);
			this->deleteId->Name = L"deleteId";
			this->deleteId->Size = System::Drawing::Size(204, 35);
			this->deleteId->TabIndex = 106;
			this->deleteId->Text = L"Удалить по индексу";
			this->deleteId->UseVisualStyleBackColor = false;
			this->deleteId->Click += gcnew System::EventHandler(this, &Lab2_2::deleteId_Click);
			// 
			// numTb
			// 
			this->numTb->Location = System::Drawing::Point(11, 21);
			this->numTb->Name = L"numTb";
			this->numTb->Size = System::Drawing::Size(204, 20);
			this->numTb->TabIndex = 7;
			this->numTb->TextChanged += gcnew System::EventHandler(this, &Lab2_2::numTb_TextChanged);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->richTextBox1);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 181);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(226, 67);
			this->panel4->TabIndex = 10;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Enabled = false;
			this->richTextBox1->Location = System::Drawing::Point(11, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(204, 67);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->browseBtn);
			this->panel3->Controls->Add(this->formBtn);
			this->panel3->Controls->Add(this->insertNPanel);
			this->panel3->Controls->Add(this->cbBegin);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 89);
			this->panel3->Name = L"panel3";
			this->panel3->Padding = System::Windows::Forms::Padding(8);
			this->panel3->Size = System::Drawing::Size(226, 92);
			this->panel3->TabIndex = 9;
			// 
			// formBtn
			// 
			this->formBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->formBtn->BackColor = System::Drawing::Color::Orange;
			this->formBtn->FlatAppearance->BorderColor = System::Drawing::Color::Orange;
			this->formBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->formBtn->ForeColor = System::Drawing::Color::White;
			this->formBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->formBtn->Location = System::Drawing::Point(66, 40);
			this->formBtn->Margin = System::Windows::Forms::Padding(2);
			this->formBtn->Name = L"formBtn";
			this->formBtn->Size = System::Drawing::Size(149, 35);
			this->formBtn->TabIndex = 8;
			this->formBtn->Text = L"Сформировать";
			this->formBtn->UseVisualStyleBackColor = false;
			this->formBtn->Click += gcnew System::EventHandler(this, &Lab2_2::formBtn_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->radioList);
			this->panel2->Controls->Add(this->radioArray);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Padding = System::Windows::Forms::Padding(8);
			this->panel2->Size = System::Drawing::Size(226, 89);
			this->panel2->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(7, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(147, 19);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Choose your fighter:";
			// 
			// radioList
			// 
			this->radioList->AutoSize = true;
			this->radioList->ForeColor = System::Drawing::Color::White;
			this->radioList->Location = System::Drawing::Point(11, 61);
			this->radioList->Name = L"radioList";
			this->radioList->Size = System::Drawing::Size(128, 17);
			this->radioList->TabIndex = 1;
			this->radioList->Text = L"Двусвязный список";
			this->radioList->UseVisualStyleBackColor = true;
			// 
			// radioArray
			// 
			this->radioArray->AutoSize = true;
			this->radioArray->Checked = true;
			this->radioArray->ForeColor = System::Drawing::Color::White;
			this->radioArray->Location = System::Drawing::Point(11, 38);
			this->radioArray->Name = L"radioArray";
			this->radioArray->Size = System::Drawing::Size(142, 17);
			this->radioArray->TabIndex = 0;
			this->radioArray->TabStop = true;
			this->radioArray->Text = L"Динамический массив";
			this->radioArray->UseVisualStyleBackColor = true;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Lab2_2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(784, 541);
			this->Controls->Add(this->workingPanel);
			this->Controls->Add(this->leftPan);
			this->Name = L"Lab2_2";
			this->Text = L"Lab2_2";
			this->insertNPanel->ResumeLayout(false);
			this->insertNPanel->PerformLayout();
			this->workingPanel->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->leftPan->ResumeLayout(false);
			this->leftPan->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		void generateArray(int num, int* Arr);//сгенерировать массив
		listItem* generateList(int listWidth);//сгенерировать список
		int parceStringToArray(std::string s, int num, int* arr);//распарсить строку чисел в массив
		listItem* parceStringToList(std::string s, int num);//распарсить строку чисел в список
		void addToArray(int num, int*& arr);
		void addToList(int num);
		void deleteForId(int num, int*& arr);
		void deleteFromList(listItem* del);
		void deleteForIdFromList(int num);
		void deleteForValue(int num, int*& arr);
		void deleteForValueFromList(int num);
		void foundForId(int num, int*& arr); 
		listItem* foundForIdInList(int id); 
		int foundForValue(int num, int*& arr);
		listItem* foundForValuerInList(int num, int& id);
		int isIdInList (int num);
		int isIdInArray (int num);


		String^ formListOut(listItem* begin);
		void listDestr();
		void showErr(String^ text);
	private: System::Void cbBegin_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);//показать кнопку загрузки из файла или поле ввода количества элементов





private: System::Void insertNTb_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	insertNTb->BackColor = Color::White;
}
private: System::Void numTb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	numTb->BackColor = Color::White;
}
private: System::Void formBtn_Click(System::Object^ sender, System::EventArgs^ e);//разбирает настройки
private: System::Void addBtn_Click_1(System::Object^ sender, System::EventArgs^ e); //добавить число в массив
private: System::Void deleteId_Click(System::Object^ sender, System::EventArgs^ e); //удалить по индексу
private: System::Void deleteValue_Click(System::Object^ sender, System::EventArgs^ e); //удалить по значению
private: System::Void foundId_Click(System::Object^ sender, System::EventArgs^ e); //найти по индексу
private: System::Void foundValue_Click(System::Object^ sender, System::EventArgs^ e);//найти по значению
private: System::Void browseBtn_Click(System::Object^ sender, System::EventArgs^ e);//клик по кнопке выбора файла
};
}
