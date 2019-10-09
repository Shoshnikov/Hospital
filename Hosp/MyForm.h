#pragma once
#include "Patient.h"
#include "Clinic.h"

namespace Hosp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		int CellCount = 0;
		Clinic^ clinic = gcnew Clinic();
	private: System::Windows::Forms::TextBox^ NameTB;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ LNameTB;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ PatronymicTB;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ WorkplaceTB;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ AddressTB;
	private: System::Windows::Forms::CheckBox^ VaccinationCB;
	private: System::Windows::Forms::Button^ Add;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LastnameC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PatronymicC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ WorkplaceC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AddressC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vaccination;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LastXrayDateC;
	private: System::Windows::Forms::Button^ Change;
	private: System::Windows::Forms::Button^ WithoutVaccinationB;
	private: System::Windows::Forms::TextBox^ WithoutVaccinationTB;
	private: System::Windows::Forms::Button^ Sort;




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
			this->NameTB = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->LNameTB = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->PatronymicTB = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->WorkplaceTB = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->AddressTB = (gcnew System::Windows::Forms::TextBox());
			this->VaccinationCB = (gcnew System::Windows::Forms::CheckBox());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->NameC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LastnameC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PatronymicC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->WorkplaceC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AddressC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vaccination = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LastXrayDateC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Change = (gcnew System::Windows::Forms::Button());
			this->WithoutVaccinationB = (gcnew System::Windows::Forms::Button());
			this->WithoutVaccinationTB = (gcnew System::Windows::Forms::TextBox());
			this->Sort = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// NameTB
			// 
			this->NameTB->Location = System::Drawing::Point(201, 36);
			this->NameTB->Name = L"NameTB";
			this->NameTB->Size = System::Drawing::Size(100, 20);
			this->NameTB->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Имя";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Фамилия";
			// 
			// LNameTB
			// 
			this->LNameTB->Location = System::Drawing::Point(201, 85);
			this->LNameTB->Name = L"LNameTB";
			this->LNameTB->Size = System::Drawing::Size(100, 20);
			this->LNameTB->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Отчество";
			// 
			// PatronymicTB
			// 
			this->PatronymicTB->Location = System::Drawing::Point(201, 134);
			this->PatronymicTB->Name = L"PatronymicTB";
			this->PatronymicTB->Size = System::Drawing::Size(100, 20);
			this->PatronymicTB->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 196);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Место работы";
			// 
			// WorkplaceTB
			// 
			this->WorkplaceTB->Location = System::Drawing::Point(201, 183);
			this->WorkplaceTB->Name = L"WorkplaceTB";
			this->WorkplaceTB->Size = System::Drawing::Size(100, 20);
			this->WorkplaceTB->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 247);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Адрес";
			// 
			// AddressTB
			// 
			this->AddressTB->Location = System::Drawing::Point(201, 232);
			this->AddressTB->Name = L"AddressTB";
			this->AddressTB->Size = System::Drawing::Size(100, 20);
			this->AddressTB->TabIndex = 8;
			// 
			// VaccinationCB
			// 
			this->VaccinationCB->AutoSize = true;
			this->VaccinationCB->Location = System::Drawing::Point(201, 281);
			this->VaccinationCB->Name = L"VaccinationCB";
			this->VaccinationCB->Size = System::Drawing::Size(128, 17);
			this->VaccinationCB->TabIndex = 10;
			this->VaccinationCB->Text = L"Прививка от гриппа";
			this->VaccinationCB->UseVisualStyleBackColor = true;
			// 
			// Add
			// 
			this->Add->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Add->Location = System::Drawing::Point(15, 377);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(75, 23);
			this->Add->TabIndex = 11;
			this->Add->Text = L"Заполнить";
			this->Add->UseVisualStyleBackColor = true;
			this->Add->Click += gcnew System::EventHandler(this, &MyForm::Add_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(201, 334);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 334);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(167, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Дата последней Флюрографии";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->NameC,
					this->LastnameC, this->PatronymicC, this->WorkplaceC, this->AddressC, this->Vaccination, this->LastXrayDateC
			});
			this->dataGridView1->Location = System::Drawing::Point(414, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(633, 388);
			this->dataGridView1->TabIndex = 14;
			this->dataGridView1->SelectionChanged += gcnew System::EventHandler(this, &MyForm::DataGridView1_SelectionChanged);
			// 
			// NameC
			// 
			this->NameC->HeaderText = L"Имя";
			this->NameC->Name = L"NameC";
			// 
			// LastnameC
			// 
			this->LastnameC->HeaderText = L"Фамилия";
			this->LastnameC->Name = L"LastnameC";
			// 
			// PatronymicC
			// 
			this->PatronymicC->HeaderText = L"Отчество";
			this->PatronymicC->Name = L"PatronymicC";
			// 
			// WorkplaceC
			// 
			this->WorkplaceC->HeaderText = L"Место работы";
			this->WorkplaceC->Name = L"WorkplaceC";
			// 
			// AddressC
			// 
			this->AddressC->HeaderText = L"Адрес";
			this->AddressC->Name = L"AddressC";
			// 
			// Vaccination
			// 
			this->Vaccination->HeaderText = L"Прививка от гриппа";
			this->Vaccination->Name = L"Vaccination";
			// 
			// LastXrayDateC
			// 
			this->LastXrayDateC->HeaderText = L"Дата последней флюрогафии";
			this->LastXrayDateC->Name = L"LastXrayDateC";
			// 
			// Change
			// 
			this->Change->Enabled = false;
			this->Change->Location = System::Drawing::Point(98, 377);
			this->Change->Name = L"Change";
			this->Change->Size = System::Drawing::Size(75, 23);
			this->Change->TabIndex = 15;
			this->Change->Text = L"Изменить";
			this->Change->UseVisualStyleBackColor = true;
			this->Change->Click += gcnew System::EventHandler(this, &MyForm::Change_Click);
			// 
			// WithoutVaccinationB
			// 
			this->WithoutVaccinationB->Location = System::Drawing::Point(181, 377);
			this->WithoutVaccinationB->Name = L"WithoutVaccinationB";
			this->WithoutVaccinationB->Size = System::Drawing::Size(100, 23);
			this->WithoutVaccinationB->TabIndex = 16;
			this->WithoutVaccinationB->Text = L"Без прививок";
			this->WithoutVaccinationB->UseVisualStyleBackColor = true;
			this->WithoutVaccinationB->Click += gcnew System::EventHandler(this, &MyForm::WithoutVaccinationB_Click);
			// 
			// WithoutVaccinationTB
			// 
			this->WithoutVaccinationTB->Location = System::Drawing::Point(414, 406);
			this->WithoutVaccinationTB->Multiline = true;
			this->WithoutVaccinationTB->Name = L"WithoutVaccinationTB";
			this->WithoutVaccinationTB->Size = System::Drawing::Size(633, 76);
			this->WithoutVaccinationTB->TabIndex = 17;
			this->WithoutVaccinationTB->Visible = false;
			// 
			// Sort
			// 
			this->Sort->Location = System::Drawing::Point(289, 377);
			this->Sort->Name = L"Sort";
			this->Sort->Size = System::Drawing::Size(82, 23);
			this->Sort->TabIndex = 18;
			this->Sort->Text = L"Сортировать";
			this->Sort->UseVisualStyleBackColor = true;
			this->Sort->Click += gcnew System::EventHandler(this, &MyForm::Sort_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1059, 494);
			this->Controls->Add(this->Sort);
			this->Controls->Add(this->WithoutVaccinationTB);
			this->Controls->Add(this->WithoutVaccinationB);
			this->Controls->Add(this->Change);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->Add);
			this->Controls->Add(this->VaccinationCB);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->AddressTB);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->WorkplaceTB);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->PatronymicTB);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->LNameTB);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->NameTB);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Patient ^Pat = gcnew Patient(NameTB->Text,PatronymicTB->Text,LNameTB->Text,AddressTB->Text,WorkplaceTB->Text,VaccinationCB->Checked, dateTimePicker1->Value);
		dataGridView1->Rows->Add(Pat->getName(), Pat->getLastname(), Pat->getPatronymic(), Pat->getAddress(), Pat->getWorkplace(), Pat->getVaccinationStr(), Pat->getLastXrayDate());
		CellCount++;
		clinic->Add(clinic->getBase(),Pat);
	}

	private: System::Void DataGridView1_SelectionChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (dataGridView1->CurrentRow->Index < CellCount)
		{
			Add->Enabled = false;
			Change->Enabled = true;
			NameTB->Text = clinic->getAtIndex(dataGridView1->CurrentRow->Index)->getName();
			LNameTB->Text = clinic->getAtIndex(dataGridView1->CurrentRow->Index)->getLastname();
			PatronymicTB->Text = clinic->getAtIndex(dataGridView1->CurrentRow->Index)->getPatronymic();
			WorkplaceTB->Text = clinic->getAtIndex(dataGridView1->CurrentRow->Index)->getWorkplace();
			AddressTB->Text = clinic->getAtIndex(dataGridView1->CurrentRow->Index)->getAddress();
			VaccinationCB->Checked = clinic->getAtIndex(dataGridView1->CurrentRow->Index)->getVaccination();
			dateTimePicker1->Value = clinic->getAtIndex(dataGridView1->CurrentRow->Index)->getLastXrayDate();
		}
		else if (dataGridView1->CurrentRow->Index == CellCount)
		{
			Add->Enabled = true;
			Change->Enabled = false;
		}
	}

	private: System::Void Change_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		clinic->getAtIndex(dataGridView1->CurrentRow->Index)->setName(NameTB->Text);
		clinic->getAtIndex(dataGridView1->CurrentRow->Index)->setLastname(LNameTB->Text);
		clinic->getAtIndex(dataGridView1->CurrentRow->Index)->setPatronymic(PatronymicTB->Text);
		clinic->getAtIndex(dataGridView1->CurrentRow->Index)->setWorkplace(WorkplaceTB->Text);
		clinic->getAtIndex(dataGridView1->CurrentRow->Index)->setAddress(AddressTB->Text);
		clinic->getAtIndex(dataGridView1->CurrentRow->Index)->setVaccination(VaccinationCB->Checked);
		clinic->getAtIndex(dataGridView1->CurrentRow->Index)->setLastXrayDate(dateTimePicker1->Value);
		dataGridView1->CurrentRow->Cells[0]->Value = clinic->getAtIndex(dataGridView1->CurrentRow->Index)->getName();
		dataGridView1->CurrentRow->Cells[1]->Value = clinic->getAtIndex(dataGridView1->CurrentRow->Index)->getLastname();
		dataGridView1->CurrentRow->Cells[2]->Value = clinic->getAtIndex(dataGridView1->CurrentRow->Index)->getPatronymic();
		dataGridView1->CurrentRow->Cells[3]->Value = clinic->getAtIndex(dataGridView1->CurrentRow->Index)->getWorkplace();
		dataGridView1->CurrentRow->Cells[4]->Value = clinic->getAtIndex(dataGridView1->CurrentRow->Index)->getAddress();
		dataGridView1->CurrentRow->Cells[5]->Value = clinic->getAtIndex(dataGridView1->CurrentRow->Index)->getVaccinationStr();
		dataGridView1->CurrentRow->Cells[6]->Value = clinic->getAtIndex(dataGridView1->CurrentRow->Index)->getLastXrayDate();
	}

	private: System::Void WithoutVaccinationB_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		WithoutVaccinationTB->Visible = true;
		WithoutVaccinationTB->Text = clinic->withoutVaccination();
	}

	private: System::Void Sort_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		clinic->sortByDate();
		for (int i = 0; i < CellCount; i++) 
		{
			dataGridView1->Rows[i]->Cells[0]->Value = clinic->getAtIndex(i)->getName();
			dataGridView1->Rows[i]->Cells[1]->Value = clinic->getAtIndex(i)->getLastname();
			dataGridView1->Rows[i]->Cells[2]->Value = clinic->getAtIndex(i)->getPatronymic();
			dataGridView1->Rows[i]->Cells[3]->Value = clinic->getAtIndex(i)->getWorkplace();
			dataGridView1->Rows[i]->Cells[4]->Value = clinic->getAtIndex(i)->getAddress();
			dataGridView1->Rows[i]->Cells[5]->Value = clinic->getAtIndex(i)->getVaccinationStr();
			dataGridView1->Rows[i]->Cells[6]->Value = clinic->getAtIndex(i)->getLastXrayDate();
		}
	}
};
}
