#pragma once
#include "centre.h"
#include "avtor.h"
#include "zadacha.h"
namespace kursova_Tselin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Tutylka
	/// </summary>
	public ref class Tutylka : public System::Windows::Forms::Form
	{
	public:
		Tutylka(void)
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
		~Tutylka()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  перейтиДоПрограмиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  перейтиДоПрограмиToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  вихідToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  додатковоToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  проАвтораToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  проПрограмуToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Tutylka::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->перейтиДоПрограмиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->перейтиДоПрограмиToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вихідToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->додатковоToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проАвтораToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->перейтиДоПрограмиToolStripMenuItem,
					this->додатковоToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(803, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// перейтиДоПрограмиToolStripMenuItem
			// 
			this->перейтиДоПрограмиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->перейтиДоПрограмиToolStripMenuItem1,
					this->вихідToolStripMenuItem
			});
			this->перейтиДоПрограмиToolStripMenuItem->Name = L"перейтиДоПрограмиToolStripMenuItem";
			this->перейтиДоПрограмиToolStripMenuItem->Size = System::Drawing::Size(94, 24);
			this->перейтиДоПрограмиToolStripMenuItem->Text = L"Програма";
			// 
			// перейтиДоПрограмиToolStripMenuItem1
			// 
			this->перейтиДоПрограмиToolStripMenuItem1->Name = L"перейтиДоПрограмиToolStripMenuItem1";
			this->перейтиДоПрограмиToolStripMenuItem1->Size = System::Drawing::Size(247, 26);
			this->перейтиДоПрограмиToolStripMenuItem1->Text = L"Перейти до програми";
			this->перейтиДоПрограмиToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Tutylka::перейтиДоПрограмиToolStripMenuItem1_Click);
			// 
			// вихідToolStripMenuItem
			// 
			this->вихідToolStripMenuItem->Name = L"вихідToolStripMenuItem";
			this->вихідToolStripMenuItem->Size = System::Drawing::Size(247, 26);
			this->вихідToolStripMenuItem->Text = L"Вихід";
			this->вихідToolStripMenuItem->Click += gcnew System::EventHandler(this, &Tutylka::вихідToolStripMenuItem_Click);
			// 
			// додатковоToolStripMenuItem
			// 
			this->додатковоToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->проАвтораToolStripMenuItem,
					this->проПрограмуToolStripMenuItem
			});
			this->додатковоToolStripMenuItem->Name = L"додатковоToolStripMenuItem";
			this->додатковоToolStripMenuItem->Size = System::Drawing::Size(97, 24);
			this->додатковоToolStripMenuItem->Text = L"Додатково";
			// 
			// проАвтораToolStripMenuItem
			// 
			this->проАвтораToolStripMenuItem->Name = L"проАвтораToolStripMenuItem";
			this->проАвтораToolStripMenuItem->Size = System::Drawing::Size(193, 26);
			this->проАвтораToolStripMenuItem->Text = L"Про автора";
			this->проАвтораToolStripMenuItem->Click += gcnew System::EventHandler(this, &Tutylka::проАвтораToolStripMenuItem_Click);
			// 
			// проПрограмуToolStripMenuItem
			// 
			this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
			this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(193, 26);
			this->проПрограмуToolStripMenuItem->Text = L"Про програму";
			this->проПрограмуToolStripMenuItem->Click += gcnew System::EventHandler(this, &Tutylka::проПрограмуToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 31);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(803, 456);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// Tutylka
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(803, 510);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Tutylka";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tutylka";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void вихідToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
private: System::Void перейтиДоПрограмиToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	centre^ form = gcnew centre();
	this->Hide();
	form->ShowDialog();
	this->Show();
}
private: System::Void проПрограмуToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	zadacha^ form2 = gcnew zadacha();
	this->Hide();
	form2->ShowDialog();
	this->Show();

}
private: System::Void проАвтораToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	avtor^ form3 = gcnew avtor();
	this->Hide();
	form3->ShowDialog();
	this->Show();
}
};
}
