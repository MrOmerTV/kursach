#pragma once

namespace kursova_Tselin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for centre
	/// </summary>
	public ref class centre : public System::Windows::Forms::Form
	{
	public:
		centre(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~centre()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView4;







	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::DataGridView^ dataGridView3;







	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;





	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::DataGridView^ dataGridView5;





	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabControl^ tabControl1;





	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column19;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->tabPage1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->maskedTextBox2);
			this->tabPage5->Controls->Add(this->maskedTextBox1);
			this->tabPage5->Controls->Add(this->dataGridView4);
			this->tabPage5->Controls->Add(this->button7);
			this->tabPage5->Controls->Add(this->label14);
			this->tabPage5->Controls->Add(this->label13);
			this->tabPage5->Controls->Add(this->label12);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(703, 391);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Виведення в ціновому діапазоні";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(61, 16);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(241, 16);
			this->label12->TabIndex = 7;
			this->label12->Text = L"Список послуг в ціновому діапазоні";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(61, 52);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(27, 16);
			this->label13->TabIndex = 8;
			this->label13->Text = L"Від";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(280, 52);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(24, 16);
			this->label14->TabIndex = 9;
			this->label14->Text = L"До";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(77, 100);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(357, 45);
			this->button7->TabIndex = 13;
			this->button7->Text = L"Вивести список послуг";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &centre::button7_Click);
			// 
			// dataGridView4
			// 
			this->dataGridView4->AllowUserToAddRows = false;
			this->dataGridView4->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView4->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView4->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5
			});
			this->dataGridView4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView4->Location = System::Drawing::Point(3, 171);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->ReadOnly = true;
			this->dataGridView4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(697, 217);
			this->dataGridView4->TabIndex = 14;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(95, 52);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(100, 22);
			this->maskedTextBox1->TabIndex = 15;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(334, 52);
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(100, 22);
			this->maskedTextBox2->TabIndex = 16;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->dataGridView3);
			this->tabPage4->Controls->Add(this->button5);
			this->tabPage4->Controls->Add(this->button6);
			this->tabPage4->Controls->Add(this->textBox7);
			this->tabPage4->Controls->Add(this->label11);
			this->tabPage4->Controls->Add(this->radioButton1);
			this->tabPage4->Controls->Add(this->label10);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(703, 391);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Сортування та видалення";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(54, 8);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(100, 16);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Сортувати за:";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(211, 4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(98, 20);
			this->radioButton1->TabIndex = 9;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"За назвою";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->Location = System::Drawing::Point(54, 88);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(236, 58);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Вкажіть тривалість послуги(все що буде тривати меньше видалиться)";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(284, 88);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(114, 58);
			this->textBox7->TabIndex = 12;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(404, 15);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(285, 37);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Сортувати";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &centre::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(404, 88);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(285, 40);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Видалити";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &centre::button5_Click);
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column15,
					this->Column16, this->Column17, this->Column18, this->Column19
			});
			this->dataGridView3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView3->Location = System::Drawing::Point(3, 165);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(697, 223);
			this->dataGridView3->TabIndex = 15;
			this->dataGridView3->SortCompare += gcnew System::Windows::Forms::DataGridViewSortCompareEventHandler(this, &centre::dataGridView3_SortCompare);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dataGridView1);
			this->tabPage3->Controls->Add(this->button4);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(703, 391);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Текстовий файл";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(305, 307);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(381, 56);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Створити текстовий файл і відобразити його вміст";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &centre::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column8,
					this->Column9, this->Column10, this->Column11, this->Column12
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(697, 280);
			this->dataGridView1->TabIndex = 4;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->checkBox3);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(703, 391);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Пошук";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(168, 12);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(206, 20);
			this->checkBox3->TabIndex = 5;
			this->checkBox3->Text = L"чи можливо забронюванти";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(62, 12);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(78, 16);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Шукати за:";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView2->Location = System::Drawing::Point(3, 137);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(697, 251);
			this->dataGridView2->TabIndex = 8;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(168, 66);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(224, 52);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Шукати клієнтів";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &centre::button3_Click);
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->button8);
			this->tabPage6->Controls->Add(this->dataGridView5);
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(703, 391);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Перегляд бінарного файлу";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// dataGridView5
			// 
			this->dataGridView5->AllowUserToAddRows = false;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn7,
					this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11
			});
			this->dataGridView5->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView5->Location = System::Drawing::Point(3, 3);
			this->dataGridView5->MultiSelect = false;
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->RowTemplate->Height = 24;
			this->dataGridView5->Size = System::Drawing::Size(697, 321);
			this->dataGridView5->TabIndex = 9;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(358, 340);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(326, 43);
			this->button8->TabIndex = 10;
			this->button8->Text = L"Вивести зміст бінарного фалу";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &centre::button8_Click);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(703, 391);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Бінарний файл";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(48, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Прізвише, ім\'я, по-батькові";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(48, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(161, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Найменування послуги";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(48, 110);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Вартість тарифу";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(48, 158);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(200, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Тривалість сеансу(у годинах)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(48, 204);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(167, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Можливість бронювання";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(328, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(310, 22);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(328, 60);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(310, 22);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(328, 105);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(310, 22);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(328, 153);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(310, 22);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(328, 199);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(310, 22);
			this->textBox5->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(51, 328);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 40);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Очистити поля";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &centre::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(328, 328);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(168, 40);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Записати дані у файл";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &centre::button2_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(711, 420);
			this->tabControl1->TabIndex = 0;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Прізвище, Ім\'я, по батькові";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->Width = 125;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Найменування послуги";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 125;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Вартість тарифу";
			this->dataGridViewTextBoxColumn9->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->Width = 125;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"Тривалість сеансу(у годинах)";
			this->dataGridViewTextBoxColumn10->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->Width = 125;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"Можливість бронювання";
			this->dataGridViewTextBoxColumn11->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Прізвище, Ім\'я, по батькові";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Найменування послуги";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Вартість тарифу";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"тривалість";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"бронювання";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Прізвище, ім\'я, по батькові";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 145;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"найменування послуги";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			this->Column9->Width = 171;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"вартість тарифу";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			this->Column10->Width = 132;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"тривалість сеансу";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			this->Column11->Width = 143;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"можливість бронювання";
			this->Column12->MinimumWidth = 6;
			this->Column12->Name = L"Column12";
			this->Column12->ReadOnly = true;
			this->Column12->Width = 178;
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"Прізвище, ім\'я, по батькові";
			this->Column15->MinimumWidth = 6;
			this->Column15->Name = L"Column15";
			this->Column15->Width = 125;
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"найменування послуги";
			this->Column16->MinimumWidth = 6;
			this->Column16->Name = L"Column16";
			this->Column16->Width = 125;
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"Вартість тарифу";
			this->Column17->MinimumWidth = 6;
			this->Column17->Name = L"Column17";
			this->Column17->Width = 125;
			// 
			// Column18
			// 
			this->Column18->HeaderText = L"Тривалість";
			this->Column18->MinimumWidth = 6;
			this->Column18->Name = L"Column18";
			this->Column18->Width = 125;
			// 
			// Column19
			// 
			this->Column19->HeaderText = L"можливість бронювання";
			this->Column19->MinimumWidth = 6;
			this->Column19->Name = L"Column19";
			this->Column19->Width = 125;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Прізвище, ім\'я, по батькові";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 145;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"найменування послуги";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 171;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"вартість тарифу";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 132;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"тривалість";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 107;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"можливість бронювання";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 178;
			// 
			// centre
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(711, 420);
			this->Controls->Add(this->tabControl1);
			this->Name = L"centre";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"centre";
			this->Load += gcnew System::EventHandler(this, &centre::centre_Load);
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ bfname;
	private: System::Void centre_Load(System::Object^  sender, System::EventArgs^  e) {
		bfname = "centre.dat";
	}
			 //запис у бінрний файл
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		FileStream^ centre = gcnew FileStream("centre.dat", FileMode::OpenOrCreate);
		BinaryWriter^ fb = gcnew BinaryWriter(centre);
		fb->Seek(0, SeekOrigin::End); // перейти у кінець файла для записування даних
		try
		{
			String ^ПІП = Convert::ToString(textBox1->Text);
			String ^послуга = Convert::ToString(textBox2->Text);
			double ціна = Convert::ToDouble(textBox3->Text);
			double тривалість = Convert::ToDouble(textBox4->Text);
			String ^бронь = Convert::ToString(textBox5->Text);



			fb->Write(ПІП); fb->Write(послуга); fb->Write(ціна); fb->Write(тривалість);
			fb->Write(бронь);
		}

		finally
		{ fb->Close(); }
	}
			 //очищення полів
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Clear(); textBox2->Clear(); textBox3->Clear(); textBox4->Clear();
		textBox5->Clear();
	}
//запис у текстовий файл
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		int i = 0;
		dataGridView1->Rows->Clear();
		if (File::Exists(bfname) == false)
		{
			MessageBox::Show("Файл не знайдено", "Помилка"); return;
		}
		BinaryReader^ fb = gcnew BinaryReader(File::OpenRead(bfname));
		TextWriter^ ft = gcnew StreamWriter(File::OpenWrite("centre.doc"));
		try
		{
			ft->WriteLine("послуги з можливістю броні\n\nПрізвище, Ім'я, По-батькові\tНайменування послуги\tЦіна\tТривалість\n");
			while (fb->BaseStream->Position < fb->BaseStream->Length)
			{
				String^ ПІП = fb->ReadString();
				String^ послуга = fb->ReadString();
				double ціна = fb->ReadDouble();
				double тривалість = fb->ReadDouble();
				String^ бронь = fb->ReadString();
				


				if (бронь == "так")
				{
					dataGridView1->Rows->Add(ПІП, послуга, String::Format("{0:0.00}", ціна), String::Format("{0:0.00}", тривалість), бронь);
					dataGridView1->Rows[i]->HeaderCell->Value = (i + 1).ToString();
					i++;
					String^ s = ПІП + "\t" + послуга + "\t" + бронь + "\n";
					ft->WriteLine(s);
				}
			}
		}
		finally
		{ fb->Close(); ft->Close(); }
	}
//пошук
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		int i = 0;
		dataGridView2->Rows->Clear();
		if (File::Exists(bfname) == false)
		{
			MessageBox::Show("Файл не знайдено", "Помилка"); return;
		}
		BinaryReader^ fb = gcnew BinaryReader(File::OpenRead(bfname));
		if (checkBox3->Checked) {
			try
			{
				while (fb->BaseStream->Position < fb->BaseStream->Length)
				{
					String^ ПІП = fb->ReadString();
					String^ послуга = fb->ReadString();
					double ціна = fb->ReadDouble();
					double тривалість = fb->ReadDouble();
					String^ бронь = fb->ReadString();


					if (бронь == "так")
					{
						dataGridView2->Rows->Add(ПІП, послуга, ціна, тривалість, бронь);
						dataGridView2->Rows[i]->HeaderCell->Value = (i + 1).ToString();
						i++;
					}
				}
			}
			finally
			{ fb->Close(); }
		
		}

		if (File::Exists(bfname) == false)
		{
			MessageBox::Show("Файл не знайдено", "Помилка"); return;
		}
	}
			 //сортування
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		int i = 0;
		dataGridView3->Rows->Clear();
		if (File::Exists(bfname) == false)
		{
			MessageBox::Show("Файл не знайдено", "Помилка"); return;
		}
		BinaryReader^ fb = gcnew BinaryReader(File::OpenRead(bfname));
		if (radioButton1->Checked) {
			try
			{
				while (fb->BaseStream->Position < fb->BaseStream->Length)
				{
					String^ ПІП = fb->ReadString();
					String^ послуга = fb->ReadString();
					double ціна = fb->ReadDouble();
					double тривалість = fb->ReadDouble();
					String^ бронь = fb->ReadString();
					dataGridView3->Rows->Add(ПІП, послуга, ціна, тривалість, бронь);
					dataGridView3->Rows[i]->HeaderCell->Value = (i + 1).ToString();
					i++;

				}
			}
			finally
			{ fb->Close(); }
			dataGridView3->Sort(dataGridView3->Columns[2], ListSortDirection::Ascending);
		}
		//видалення
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		int i = 0;
		double x = Convert::ToDouble(textBox7->Text);
		dataGridView3->Rows->Clear();
		if (File::Exists(bfname) == false)
		{
			MessageBox::Show("Бінарний файл не знайдено.", "Помилка"); return;
		}
		BinaryReader^ fb = gcnew BinaryReader(File::OpenRead(bfname));
		BinaryWriter^ tmp = gcnew BinaryWriter(File::Open("tmp.bin", FileMode::Create));
		try
		{
			while (fb->BaseStream->Position < fb->BaseStream->Length)
			{
				String^ ПІП = fb->ReadString();
				String^ послуга = fb->ReadString();
				double ціна = fb->ReadDouble();
				double тривалість = fb->ReadDouble();
				String^ бронь = fb->ReadString();

				if (тривалість < x)
				{
					dataGridView3->Rows->Add(ПІП, послуга, ціна, тривалість, бронь);
					dataGridView3->Rows[i]->HeaderCell->Value = (i + 1).ToString();
					i++;
				}

			}
			tmp->Close();
		}
		finally
		{ fb->Close(); }
	}
			 //виведення від дати до дати
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	int i = 0;
	dataGridView4->Rows->Clear();
	double low, now, top;
	low = Convert::ToDouble(maskedTextBox1->Text);
	top = Convert::ToDouble(maskedTextBox2->Text);
	if (File::Exists(bfname) == false)
	{
		MessageBox::Show("Файл не знайдено", "Помилка"); return;
	}
	BinaryReader^ fb = gcnew BinaryReader(File::OpenRead(bfname));
		try
		{
			while (fb->BaseStream->Position < fb->BaseStream->Length)
			{
				String^ ПІП = fb->ReadString();
				String^ послуга = fb->ReadString();
				double ціна = fb->ReadDouble();
				double тривалість = fb->ReadDouble();
				String^ бронь = fb->ReadString();
				if (Convert::ToDouble(ціна) > low && Convert::ToDouble(ціна) < top) {
						dataGridView4->Rows->Add(ПІП, послуга, ціна, тривалість, бронь);
						dataGridView4->Rows[i]->HeaderCell->Value = (i + 1).ToString();
						i++;
				}
				
				
			}
		}
		finally
		{ fb->Close(); }

};
private: System::Void dataGridView3_SortCompare(System::Object^  sender, System::Windows::Forms::DataGridViewSortCompareEventArgs^  e) {
	if (e->Column->Index == 2) {
      e->SortResult = Convert::ToDouble(e->CellValue1->ToString()).CompareTo(Convert::ToDouble(e->CellValue2->ToString()));
      e->Handled = true;
    }
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	int i = 0;
	dataGridView5->Rows->Clear();
	if (File::Exists(bfname) == false)
	{
		MessageBox::Show("Файл не знайдено", "Помилка"); return;
	}
	BinaryReader^ fb = gcnew BinaryReader(File::OpenRead(bfname));
		try
		{
			while (fb->BaseStream->Position < fb->BaseStream->Length)
			{
				String^ ПІП = fb->ReadString();
				String^ послуга = fb->ReadString();
				double ціна = fb->ReadDouble();
				double тривалість = fb->ReadDouble();
				String^ бронь = fb->ReadString();
					dataGridView5->Rows->Add(ПІП, послуга, ціна, тривалість, бронь);
					dataGridView5->Rows[i]->HeaderCell->Value = (i + 1).ToString();
					i++;
			}
		}
		finally
		{ fb->Close(); }
}
};
}