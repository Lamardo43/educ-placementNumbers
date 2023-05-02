#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#pragma once

namespace kurs {

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
	private: System::Windows::Forms::TabControl^ tabControl1;

	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton4;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton5;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton6;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton7;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton8;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton9;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton0;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton0 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton8 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton9 = (gcnew System::Windows::Forms::ToolStripButton());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(-1, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(672, 704);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Gainsboro;
			this->tabPage1->Controls->Add(this->checkBox2);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->checkBox1);
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->pictureBox9);
			this->tabPage1->Controls->Add(this->pictureBox8);
			this->tabPage1->Controls->Add(this->toolStrip1);
			this->tabPage1->Controls->Add(this->pictureBox7);
			this->tabPage1->Controls->Add(this->pictureBox6);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->pictureBox5);
			this->tabPage1->Controls->Add(this->pictureBox4);
			this->tabPage1->Controls->Add(this->pictureBox3);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(664, 678);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Игра";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(68, 643);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(131, 17);
			this->checkBox2->TabIndex = 48;
			this->checkBox2->Text = L"Игра компьютером\?";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(545, 643);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 47;
			this->button2->Text = L"Начать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(351, 643);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(188, 17);
			this->checkBox1->TabIndex = 46;
			this->checkBox1->Text = L"Продолжить предыдущую игру\?";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Enabled = false;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(254, 35);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(180, 180);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 28;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click_1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(545, 643);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 45;
			this->button1->Text = L"Готово!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(639, 609);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 44;
			this->label8->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(639, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 43;
			this->label7->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(521, 609);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 42;
			this->label6->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(334, 609);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 41;
			this->label5->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(151, 609);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 40;
			this->label4->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(639, 499);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 39;
			this->label3->Text = L"0";
			// 
			// pictureBox9
			// 
			this->pictureBox9->Enabled = false;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(440, 407);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(180, 180);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 35;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &MyForm::pictureBox9_Click_1);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Enabled = false;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(254, 407);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(180, 180);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 34;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &MyForm::pictureBox8_Click_1);
			// 
			// toolStrip1
			// 
			this->toolStrip1->AutoSize = false;
			this->toolStrip1->Dock = System::Windows::Forms::DockStyle::Left;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->toolStripButton0,
					this->toolStripButton1, this->toolStripButton2, this->toolStripButton3, this->toolStripButton4, this->toolStripButton5, this->toolStripButton6,
					this->toolStripButton7, this->toolStripButton8, this->toolStripButton9
			});
			this->toolStrip1->Location = System::Drawing::Point(3, 3);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(50, 672);
			this->toolStrip1->TabIndex = 36;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton0
			// 
			this->toolStripButton0->AutoSize = false;
			this->toolStripButton0->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton0->Enabled = false;
			this->toolStripButton0->Font = (gcnew System::Drawing::Font(L"Times New Roman", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripButton0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton0.Image")));
			this->toolStripButton0->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton0->Name = L"toolStripButton0";
			this->toolStripButton0->Size = System::Drawing::Size(48, 48);
			this->toolStripButton0->Text = L"0";
			this->toolStripButton0->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton0_Click);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->AutoSize = false;
			this->toolStripButton1->BackColor = System::Drawing::Color::White;
			this->toolStripButton1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.BackgroundImage")));
			this->toolStripButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton1->Enabled = false;
			this->toolStripButton1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripButton1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Margin = System::Windows::Forms::Padding(8);
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(48, 48);
			this->toolStripButton1->Text = L"1";
			this->toolStripButton1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click_1);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->AutoSize = false;
			this->toolStripButton2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.BackgroundImage")));
			this->toolStripButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton2->Enabled = false;
			this->toolStripButton2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 32));
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Margin = System::Windows::Forms::Padding(8);
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(48, 48);
			this->toolStripButton2->Text = L"2";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton2_Click_1);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->AutoSize = false;
			this->toolStripButton3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.BackgroundImage")));
			this->toolStripButton3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton3->Enabled = false;
			this->toolStripButton3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Margin = System::Windows::Forms::Padding(8);
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(48, 48);
			this->toolStripButton3->Text = L"3";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton3_Click_1);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->AutoSize = false;
			this->toolStripButton4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.BackgroundImage")));
			this->toolStripButton4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton4->Enabled = false;
			this->toolStripButton4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Margin = System::Windows::Forms::Padding(8);
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(48, 48);
			this->toolStripButton4->Text = L"4";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton4_Click_1);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->AutoSize = false;
			this->toolStripButton5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.BackgroundImage")));
			this->toolStripButton5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton5->Enabled = false;
			this->toolStripButton5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Margin = System::Windows::Forms::Padding(8);
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(48, 48);
			this->toolStripButton5->Text = L"5";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton5_Click_1);
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->AutoSize = false;
			this->toolStripButton6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton6.BackgroundImage")));
			this->toolStripButton6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton6->Enabled = false;
			this->toolStripButton6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Margin = System::Windows::Forms::Padding(8);
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(48, 48);
			this->toolStripButton6->Text = L"6";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton6_Click_1);
			// 
			// toolStripButton7
			// 
			this->toolStripButton7->AutoSize = false;
			this->toolStripButton7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton7.BackgroundImage")));
			this->toolStripButton7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->toolStripButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton7->Enabled = false;
			this->toolStripButton7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton7.Image")));
			this->toolStripButton7->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton7->Margin = System::Windows::Forms::Padding(8);
			this->toolStripButton7->Name = L"toolStripButton7";
			this->toolStripButton7->Size = System::Drawing::Size(48, 48);
			this->toolStripButton7->Text = L"7";
			this->toolStripButton7->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton7_Click_1);
			// 
			// toolStripButton8
			// 
			this->toolStripButton8->AutoSize = false;
			this->toolStripButton8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton8.BackgroundImage")));
			this->toolStripButton8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->toolStripButton8->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton8->Enabled = false;
			this->toolStripButton8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripButton8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton8.Image")));
			this->toolStripButton8->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton8->Margin = System::Windows::Forms::Padding(8);
			this->toolStripButton8->Name = L"toolStripButton8";
			this->toolStripButton8->Size = System::Drawing::Size(48, 48);
			this->toolStripButton8->Text = L"8";
			this->toolStripButton8->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton8_Click_1);
			// 
			// toolStripButton9
			// 
			this->toolStripButton9->AutoSize = false;
			this->toolStripButton9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton9.BackgroundImage")));
			this->toolStripButton9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->toolStripButton9->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton9->Enabled = false;
			this->toolStripButton9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripButton9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton9.Image")));
			this->toolStripButton9->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton9->Margin = System::Windows::Forms::Padding(8);
			this->toolStripButton9->Name = L"toolStripButton9";
			this->toolStripButton9->Size = System::Drawing::Size(48, 48);
			this->toolStripButton9->Text = L"9";
			this->toolStripButton9->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton9_Click_1);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Enabled = false;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(68, 407);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(180, 180);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 33;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click_1);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Enabled = false;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(440, 221);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(180, 180);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 32;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MyForm::pictureBox6_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(639, 310);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 38;
			this->label2->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(639, 116);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 37;
			this->label1->Text = L"0";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Enabled = false;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(254, 221);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(180, 180);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 31;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox5_Click_1);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Enabled = false;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(68, 221);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(180, 180);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 30;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click_1);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Enabled = false;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(440, 35);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(180, 180);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 29;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox1->Enabled = false;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(68, 35);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(180, 180);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 27;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click_1);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label24);
			this->tabPage2->Controls->Add(this->label23);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->pictureBox10);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(664, 678);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Об игре";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(372, 78);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(265, 161);
			this->label13->TabIndex = 6;
			this->label13->Text = L"\"Расстановка 9 чисел\". \r\nВ квадрате размером 3х3\r\nклетки расставить числа 1-9 \r\nт"
				L"ак, чтобы сумма чисел, \r\nстоящих в каждом ряду\r\nи строке, а также на любой \r\nдиа"
				L"гонали были равны";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(372, 292);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(239, 46);
			this->label12->TabIndex = 4;
			this->label12->Text = L"Кнопка 0 на панели слева\r\nочищает ячейку";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(365, 253);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(158, 29);
			this->label11->TabIndex = 3;
			this->label11->Text = L"Примичание:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(365, 31);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(173, 29);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Правила игры:";
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(0, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(100, 23);
			this->label9->TabIndex = 5;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(27, 31);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(332, 365);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 0;
			this->pictureBox10->TabStop = false;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label22);
			this->tabPage3->Controls->Add(this->label21);
			this->tabPage3->Controls->Add(this->label20);
			this->tabPage3->Controls->Add(this->label19);
			this->tabPage3->Controls->Add(this->label18);
			this->tabPage3->Controls->Add(this->label17);
			this->tabPage3->Controls->Add(this->label16);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->pictureBox11);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(664, 678);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Об авторе";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(331, 288);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(42, 19);
			this->label22->TabIndex = 9;
			this->label22->Text = L"2022";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(331, 367);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(128, 19);
			this->label21->TabIndex = 8;
			this->label21->Text = L"dater01@mail.ru";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(331, 216);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(62, 19);
			this->label20->TabIndex = 7;
			this->label20->Text = L"221-329";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(331, 139);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(223, 19);
			this->label19->TabIndex = 6;
			this->label19->Text = L"Медведев Клим Николаевич";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold Condensed", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(331, 344);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(135, 23);
			this->label18->TabIndex = 5;
			this->label18->Text = L"Электронная почта:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold Condensed", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(331, 193);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(57, 23);
			this->label17->TabIndex = 4;
			this->label17->Text = L"Группа:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold Condensed", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(331, 265);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(103, 23);
			this->label16->TabIndex = 3;
			this->label16->Text = L"Год создания: ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(331, 116);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(40, 23);
			this->label15->TabIndex = 2;
			this->label15->Text = L"ФИО:";
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(55, 116);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(239, 311);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 1;
			this->pictureBox11->TabStop = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(63, 78);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(113, 25);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Об авторе:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(9, 399);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(319, 29);
			this->label23->TabIndex = 7;
			this->label23->Text = L"Использование программы:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(23, 428);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(561, 230);
			this->label24->TabIndex = 8;
			this->label24->Text = resources->GetString(L"label24.Text");
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(664, 701);
			this->Controls->Add(this->tabControl1);
			this->MaximumSize = System::Drawing::Size(680, 740);
			this->MinimumSize = System::Drawing::Size(680, 740);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Расстановка девяти чисел";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		// Объявляем все перемнные.
		Image^ img0;
		Image^ img1;
		Image^ img2;
		Image^ img3;
		Image^ img4;
		Image^ img5;
		Image^ img6;
		Image^ img7;
		Image^ img8;
		Image^ img9;

		int sum1 = 0;
		int sum2 = 0;
		int sum3 = 0;
		int sum4 = 0;
		int sum5 = 0;
		int sum6 = 0;
		int sum7 = 0;
		int sum8 = 0;

		bool pic1_click = false;
		bool pic2_click = false;
		bool pic3_click = false;
		bool pic4_click = false;
		bool pic5_click = false;
		bool pic6_click = false;
		bool pic7_click = false;
		bool pic8_click = false;
		bool pic9_click = false;

		bool but0_click = false;
		bool but1_click = false;
		bool but2_click = false;
		bool but3_click = false;
		bool but4_click = false;
		bool but5_click = false;
		bool but6_click = false;
		bool but7_click = false;
		bool but8_click = false;
		bool but9_click = false;

		bool start = false;

		// Функция записи текущего состояния игры в файл.
		void write_to_file()
		{
			if(start) // Перезаписывается, если была нажата кнопка "Начать"
			{
				std::string path = "state.txt";

				std::ofstream fout; //открываем поток
				fout.open(path);

					//записываем цифры, которые показывают состояние наших боксов
				fout << return_num_pic(pictureBox1) << " "; 
				fout << return_num_pic(pictureBox2) << " ";
				fout << return_num_pic(pictureBox3) << " ";
				fout << return_num_pic(pictureBox4) << " ";
				fout << return_num_pic(pictureBox5) << " ";
				fout << return_num_pic(pictureBox6) << " ";
				fout << return_num_pic(pictureBox7) << " ";
				fout << return_num_pic(pictureBox8) << " ";
				fout << return_num_pic(pictureBox9) << " ";

				fout.close(); //закрываем поток
			}
		}

		void update_sum() //обновляет отображаемую сумму по линиям
		{
			int sum1 = 0;
			int sum2 = 0;
			int sum3 = 0;
			int sum4 = 0;
			int sum5 = 0;
			int sum6 = 0;
			int sum7 = 0;
			int sum8 = 0;

			get_num_pic(pictureBox1, &sum1, &sum4, &sum8); // прибавляем указанные суммы

			get_num_pic(pictureBox2, &sum1, &sum5);

			get_num_pic(pictureBox3, &sum1, &sum6, &sum7);

			get_num_pic(pictureBox4, &sum2, &sum4);

			get_num_pic(pictureBox5, &sum2, &sum7, &sum5, &sum8);

			get_num_pic(pictureBox6, &sum2, &sum6);

			get_num_pic(pictureBox7, &sum3, &sum4, &sum7);

			get_num_pic(pictureBox8, &sum3, &sum5);

			get_num_pic(pictureBox9, &sum3, &sum6, &sum8);

			//обновление отображаемых лейблов
			label1->Text = sum1.ToString();
			label2->Text = sum2.ToString();
			label3->Text = sum3.ToString();
			label4->Text = sum4.ToString();
			label5->Text = sum5.ToString();
			label6->Text = sum6.ToString();
			label7->Text = sum7.ToString();
			label8->Text = sum8.ToString();

			this->sum1 = sum1;
			this->sum2 = sum2;
			this->sum3 = sum3;
			this->sum4 = sum4;
			this->sum5 = sum5;
			this->sum6 = sum6;
			this->sum7 = sum7;
			this->sum8 = sum8;
		}

		//функция для реализации игры компьютером
		void computer_start(bool a)
		{
			if (a == true) //генерация срабатывает только в случае изменения чекбокса
			{
				std::ifstream fin_c;
				fin_c.open("computer_start.txt"); //открываем поток чтения из файла с победными комбинациями.

				srand(time(NULL));
				int temp = rand() % 7 + 1; //поскольку всего возможно 8 победных комбинаций, генерируем число от 0 до 8

				int arr[9]; //массив значений

				//считываем наши значения из файла случайное количество раз
				for (int i = 0; i < temp; i++)
					for (int j = 0; j < 9; j++)
						fin_c >> arr[j];

				paste_pic(pictureBox1, arr[0]);
				paste_pic(pictureBox2, arr[1]);
				paste_pic(pictureBox3, arr[2]);
				paste_pic(pictureBox4, arr[3]);
				paste_pic(pictureBox5, arr[4]);
				paste_pic(pictureBox6, arr[5]);
				paste_pic(pictureBox7, arr[6]);
				paste_pic(pictureBox8, arr[7]);
				paste_pic(pictureBox9, arr[8]);

				fin_c.close(); //закрываем поток

				update_sum(); //обновляем суммы
			}
		}

		void start_from_file() // функция для чтения последних данных из файла
		{
			std::ifstream fin;
			fin.open("state.txt");

			int arr[9];

			for (int i = 0; i < 9; i++)
				fin >> arr[i];

			paste_pic(pictureBox1, arr[0]); //вставляем в пикчербокс нужную цифру
			paste_pic(pictureBox2, arr[1]);
			paste_pic(pictureBox3, arr[2]);
			paste_pic(pictureBox4, arr[3]);
			paste_pic(pictureBox5, arr[4]);
			paste_pic(pictureBox6, arr[5]);
			paste_pic(pictureBox7, arr[6]);
			paste_pic(pictureBox8, arr[7]);
			paste_pic(pictureBox9, arr[8]);

			fin.close();

			update_sum(); //обновляем сумму лейблов
		}

		void set_true() //активирует все элементы панели
		{
			toolStripButton0->Enabled = true;
			toolStripButton1->Enabled = true;
			toolStripButton2->Enabled = true;
			toolStripButton3->Enabled = true;
			toolStripButton4->Enabled = true;
			toolStripButton5->Enabled = true;
			toolStripButton6->Enabled = true;
			toolStripButton7->Enabled = true;
			toolStripButton8->Enabled = true;
			toolStripButton9->Enabled = true;

			pictureBox1->Enabled = true;
			pictureBox2->Enabled = true;
			pictureBox3->Enabled = true;
			pictureBox4->Enabled = true;
			pictureBox5->Enabled = true;
			pictureBox6->Enabled = true;
			pictureBox7->Enabled = true;
			pictureBox8->Enabled = true;
			pictureBox9->Enabled = true;
		}

		void block_but(int d) //блокирует кнопки управления, если цифра есть в каком-то боксе.
		{
			if (d == 1)
				toolStripButton1->Enabled = false;
			else if (d == 2)
				toolStripButton2->Enabled = false;
			else if (d == 3)
				toolStripButton3->Enabled = false;
			else if (d == 4)
				toolStripButton4->Enabled = false;
			else if (d == 5)
				toolStripButton5->Enabled = false;
			else if (d == 6)
				toolStripButton6->Enabled = false;
			else if (d == 7)
				toolStripButton7->Enabled = false;
			else if (d == 8)
				toolStripButton8->Enabled = false;
			else if (d == 9)
				toolStripButton9->Enabled = false;
		}

		void paste_pic(PictureBox^ pic, int d) //вставляет в бокс нужную картинку
		{
			if (d == 1)

				pic->Image = img1;
			else if (d == 2)
				pic->Image = img2;
			else if (d == 3)
				pic->Image = img3;
			else if (d == 4)
				pic->Image = img4;
			else if (d == 5)
				pic->Image = img5;
			else if (d == 6)
				pic->Image = img6;
			else if (d == 7)
				pic->Image = img7;
			else if (d == 8)
				pic->Image = img8;
			else if (d == 9)
				pic->Image = img9;
			else pic->Image = img0;
		}

		int return_num_pic(PictureBox^ pic) // возвращает значение цифры в пикчербоксе
		{
			if (pic->Image == img1)
				return 1;
			else if (pic->Image == img2)
				return 2;
			else if (pic->Image == img3)
				return 3;
			else if (pic->Image == img4)
				return 4;
			else if (pic->Image == img5)
				return 5;
			else if (pic->Image == img6)
				return 6;
			else if (pic->Image == img7)
				return 7;
			else if (pic->Image == img8)
				return 8;
			else if (pic->Image == img9)
				return 9;
			else return 0;
		}

		void get_num_pic(PictureBox^ pic, int* first_sum, int* second_sum) //прибавляет значение бокса к нужным суммам.
		{
			*first_sum += return_num_pic(pic);
			*second_sum += return_num_pic(pic);
		}

		void get_num_pic(PictureBox^ pic, int* first_sum, int* second_sum, int* third_sum)
		{
			*first_sum += return_num_pic(pic);
			*second_sum += return_num_pic(pic);
			*third_sum += return_num_pic(pic);
		}

		void get_num_pic(PictureBox^ pic, int* first_sum, int* second_sum, int* third_sum, int* fourth_sum)
		{
			*first_sum += return_num_pic(pic);
			*second_sum += return_num_pic(pic);
			*third_sum += return_num_pic(pic);
			*fourth_sum += return_num_pic(pic);
		}

		 //если картинка была заменена, возвращает значение предыдущей кнопке
		void cancel_cancel(PictureBox^ pic, ToolStripButton^ but)
		{
			if (but != toolStripButton0)
				but->Enabled = false;
			if (pic->Image != img0)
			{
				int val = return_num_pic(pic);
				if (val == 1)
					toolStripButton1->Enabled = true;
				else if (val == 2)
					toolStripButton2->Enabled = true;
				else if (val == 3)
					toolStripButton3->Enabled = true;
				else if (val == 4)
					toolStripButton4->Enabled = true;
				else if (val == 5)
					toolStripButton5->Enabled = true;
				else if (val == 6)
					toolStripButton6->Enabled = true;
				else if (val == 7)
					toolStripButton7->Enabled = true;
				else if (val == 8)
					toolStripButton8->Enabled = true;
				else if (val == 9)
					toolStripButton9->Enabled = true;
			}
		}

		bool picture_click(PictureBox^ pic, bool pic_click) //функция клика по боксу
		{

			if (but0_click) //если перед этим была нажата кнопка 0
			{
				cancel_cancel(pic, toolStripButton0); //возвращаем работоспособность предыдущей кнопке
				pic->Image = img0; //устанавливаем пустую ячейку
				but0_click = false; // возвращаем нажатие кнопки в false
				pic_click = false; // возвращаем нажатие бокса в false
				toolStripButton0->ForeColor = System::Drawing::Color::Black; // меняем цвет кнопки на черный
			}
			else if (but1_click)
			{
				cancel_cancel(pic, toolStripButton1);
				pic->Image = img1;
				but1_click = false;
				pic_click = false;
				toolStripButton1->ForeColor = System::Drawing::Color::Black;
				toolStripButton1->Enabled = false;
			}
			else if (but2_click)
			{
				cancel_cancel(pic, toolStripButton2);
				pic->Image = img2;
				but2_click = false;
				pic_click = false;
				toolStripButton2->ForeColor = System::Drawing::Color::Black;
				toolStripButton2->Enabled = false;
			}
			else if (but3_click)
			{
				cancel_cancel(pic, toolStripButton3);
				pic->Image = img3;
				but3_click = false;
				pic_click = false;
				toolStripButton3->ForeColor = System::Drawing::Color::Black;
				toolStripButton3->Enabled = false;
			}
			else if (but4_click)
			{
				cancel_cancel(pic, toolStripButton4);
				pic->Image = img4;
				but4_click = false;
				pic_click = false;
				toolStripButton4->ForeColor = System::Drawing::Color::Black;
				toolStripButton4->Enabled = false;
			}
			else if (but5_click)
			{
				cancel_cancel(pic, toolStripButton5);
				pic->Image = img5;
				but5_click = false;
				pic_click = false;
				toolStripButton5->ForeColor = System::Drawing::Color::Black;
				toolStripButton5->Enabled = false;
			}
			else if (but6_click)
			{
				cancel_cancel(pic, toolStripButton6);
				pic->Image = img6;
				but6_click = false;
				pic_click = false;
				toolStripButton6->ForeColor = System::Drawing::Color::Black;
				toolStripButton6->Enabled = false;
			}
			else if (but7_click)
			{
				cancel_cancel(pic, toolStripButton7);
				pic->Image = img7;
				but7_click = false;
				pic_click = false;
				toolStripButton7->ForeColor = System::Drawing::Color::Black;
				toolStripButton7->Enabled = false;
			}
			else if (but8_click)
			{
				cancel_cancel(pic, toolStripButton8);
				pic->Image = img8;
				but8_click = false;
				pic_click = false;
				toolStripButton8->ForeColor = System::Drawing::Color::Black;
				toolStripButton8->Enabled = false;
			}
			else if (but9_click)
			{
				cancel_cancel(pic, toolStripButton9);
				pic->Image = img9;
				but9_click = false;
				pic_click = false;
				toolStripButton9->ForeColor = System::Drawing::Color::Black;
				toolStripButton9->Enabled = false;
			}

			update_sum(); //обновляем сумму

			return pic_click;
		}

		void but_click(Image^ img, ToolStripButton^ but) // функция нажатия на кнопку
		{

			if (pic1_click) // Если перед этим было нажатие на первый бокс
			{
				cancel_cancel(pictureBox1, but); //возвращаем значение предыдущей кнопке
				pictureBox1->Image = img; //устанавливаем значение картинки на новое
				pic1_click = false; // Убираем нажатие
				pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::None; //Убираем обводку
			}
			else if (pic2_click)
			{
				cancel_cancel(pictureBox2, but);
				pictureBox2->Image = img;
				pic2_click = false;
				pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;

			}
			else if (pic3_click)
			{
				cancel_cancel(pictureBox3, but);
				pictureBox3->Image = img;
				pic3_click = false;
				pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			}
			else if (pic4_click)
			{
				cancel_cancel(pictureBox4, but);
				pictureBox4->Image = img;
				pic4_click = false;
				pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			}
			else if (pic5_click)
			{
				cancel_cancel(pictureBox5, but);
				pictureBox5->Image = img;
				pic5_click = false;
				pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			}
			else if (pic6_click)
			{
				cancel_cancel(pictureBox6, but);
				pictureBox6->Image = img;
				pic6_click = false;
				pictureBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			}
			else if (pic7_click)
			{
				cancel_cancel(pictureBox7, but);
				pictureBox7->Image = img;
				pic7_click = false;
				pictureBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			}
			else if (pic8_click)
			{
				cancel_cancel(pictureBox8, but);
				pictureBox8->Image = img;
				pic8_click = false;
				pictureBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			}
			else if (pic9_click)
			{
				cancel_cancel(pictureBox9, but);
				pictureBox9->Image = img;
				pic9_click = false;
				pictureBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			}

			update_sum(); // обновляем сумму
		}

		void clear() // Заменяет все ячейки на пустые
		{
			pictureBox1->Image = img0;
			pictureBox2->Image = img0;
			pictureBox3->Image = img0;
			pictureBox4->Image = img0;
			pictureBox5->Image = img0;
			pictureBox6->Image = img0;
			pictureBox7->Image = img0;
			pictureBox8->Image = img0;
			pictureBox9->Image = img0;

			update_sum(); //обновляем сумму
		}

	private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//Если перед этим не была нажата какая-то кнопка
		if (!but0_click && !but1_click && !but2_click && !but3_click && !but4_click && !but5_click && !but6_click && !but7_click && !but8_click && !but9_click
			&& !pic2_click && !pic3_click && !pic4_click && !pic5_click && !pic6_click && !pic7_click && !pic8_click && !pic9_click)
		{
			pic1_click = true; // устанавливаем клик по картинке в true
			pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle; // добавляем обводку нажатой кнопке
		}

		pic1_click = picture_click(pictureBox1, pic1_click); //вызываем функцию нажатия кнопки
	}
	private: System::Void pictureBox2_Click_1(System::Object^ sender, System::EventArgs^ e) {

		if (!but0_click && !but1_click && !but2_click && !but3_click && !but4_click && !but5_click && !but6_click && !but7_click && !but8_click && !but9_click
			&& !pic1_click && !pic3_click && !pic4_click && !pic5_click && !pic6_click && !pic7_click && !pic8_click && !pic9_click)
		{
			pic2_click = true;
			pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		}

		pic2_click = picture_click(pictureBox2, pic2_click);
	}
	private: System::Void pictureBox3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (!but0_click && !but1_click && !but2_click && !but3_click && !but4_click && !but5_click && !but6_click && !but7_click && !but8_click && !but9_click
			&& !pic1_click && !pic2_click && !pic4_click && !pic5_click && !pic6_click && !pic7_click && !pic8_click && !pic9_click)
		{
			pic3_click = true;
			pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		}

		pic3_click = picture_click(pictureBox3, pic3_click);
	}
	private: System::Void pictureBox4_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (!but0_click && !but1_click && !but2_click && !but3_click && !but4_click && !but5_click && !but6_click && !but7_click && !but8_click && !but9_click
			&& !pic1_click && !pic2_click && !pic3_click && !pic5_click && !pic6_click && !pic7_click && !pic8_click && !pic9_click)
		{
			pic4_click = true;
			pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		}

		pic4_click = picture_click(pictureBox4, pic4_click);
	}
	private: System::Void pictureBox5_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (!but0_click && !but1_click && !but2_click && !but3_click && !but4_click && !but5_click && !but6_click && !but7_click && !but8_click && !but9_click
			&& !pic1_click && !pic2_click && !pic4_click && !pic3_click && !pic6_click && !pic7_click && !pic8_click && !pic9_click)
		{
			pic5_click = true;
			pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		}

		pic5_click = picture_click(pictureBox5, pic5_click);
	}
	private: System::Void pictureBox6_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (!but0_click && !but1_click && !but2_click && !but3_click && !but4_click && !but5_click && !but6_click && !but7_click && !but8_click && !but9_click
			&& !pic1_click && !pic2_click && !pic4_click && !pic5_click && !pic3_click && !pic7_click && !pic8_click && !pic9_click)
		{
			pic6_click = true;
			pictureBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		}

		pic6_click = picture_click(pictureBox6, pic6_click);
	}
	private: System::Void pictureBox7_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (!but0_click && !but1_click && !but2_click && !but3_click && !but4_click && !but5_click && !but6_click && !but7_click && !but8_click && !but9_click
			&& !pic1_click && !pic2_click && !pic4_click && !pic5_click && !pic6_click && !pic3_click && !pic8_click && !pic9_click)
		{
			pic7_click = true;
			pictureBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		}

		pic7_click = picture_click(pictureBox7, pic7_click);
	}
	private: System::Void pictureBox8_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (!but0_click && !but1_click && !but2_click && !but3_click && !but4_click && !but5_click && !but6_click && !but7_click && !but8_click && !but9_click
			&& !pic1_click && !pic2_click && !pic4_click && !pic5_click && !pic6_click && !pic7_click && !pic3_click && !pic9_click)
		{
			pictureBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			pic8_click = true;
		}

		pic8_click = picture_click(pictureBox8, pic8_click);
	}
	private: System::Void pictureBox9_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (!but0_click && !but1_click && !but2_click && !but3_click && !but4_click && !but5_click && !but6_click && !but7_click && !but8_click && !but9_click
			&& !pic1_click && !pic2_click && !pic4_click && !pic5_click && !pic6_click && !pic7_click && !pic8_click && !pic3_click)
		{
			pic9_click = true;
			pictureBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		}

		pic9_click = picture_click(pictureBox9, pic9_click);
	}



	private: System::Void toolStripButton0_Click(System::Object^ sender, System::EventArgs^ e) {
		// ЕСли перед этим не было нажатия на любую из кнопок или картинок
		if (!pic1_click && !pic2_click && !pic3_click && !pic4_click && !pic5_click && !pic6_click && !pic7_click && !pic8_click && !pic9_click
			&& !but1_click && !but2_click && !but3_click && !but4_click && !but5_click && !but6_click && !but7_click && !but8_click && !but9_click)
		{
			but0_click = true; //Клик по кнопке в true
			toolStripButton0->ForeColor = System::Drawing::Color::Coral; //меняем цвет текста на коралловый
		}

		but_click(img0, toolStripButton0); // вызываем функцию нажатия на кнопку
	}
	private: System::Void toolStripButton1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (!pic1_click && !pic2_click && !pic3_click && !pic4_click && !pic5_click && !pic6_click && !pic7_click && !pic8_click && !pic9_click
			&& !but0_click && !but2_click && !but3_click && !but4_click && !but5_click && !but6_click && !but7_click && !but8_click && !but9_click)
		{
			but1_click = true;
			toolStripButton1->ForeColor = System::Drawing::Color::Coral;
		}

		but_click(img1, toolStripButton1);
	}
	private: System::Void toolStripButton2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (!pic1_click && !pic2_click && !pic3_click && !pic4_click && !pic5_click && !pic6_click && !pic7_click && !pic8_click && !pic9_click
			&& !but0_click && !but1_click && !but3_click && !but4_click && !but5_click && !but6_click && !but7_click && !but8_click && !but9_click)
		{
			but2_click = true;
			toolStripButton2->ForeColor = System::Drawing::Color::Coral;
		}

		but_click(img2, toolStripButton2);
	}
	private: System::Void toolStripButton3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (!pic1_click && !pic2_click && !pic3_click && !pic4_click && !pic5_click && !pic6_click && !pic7_click && !pic8_click && !pic9_click
			&& !but0_click && !but2_click && !but1_click && !but4_click && !but5_click && !but6_click && !but7_click && !but8_click && !but9_click)
		{
			but3_click = true;
			toolStripButton3->ForeColor = System::Drawing::Color::Coral;
		}

		but_click(img3, toolStripButton3);
	}
	private: System::Void toolStripButton4_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (!pic1_click && !pic2_click && !pic3_click && !pic4_click && !pic5_click && !pic6_click && !pic7_click && !pic8_click && !pic9_click
			&& !but0_click && !but2_click && !but3_click && !but1_click && !but5_click && !but6_click && !but7_click && !but8_click && !but9_click)
		{
			but4_click = true;
			toolStripButton4->ForeColor = System::Drawing::Color::Coral;
		}

		but_click(img4, toolStripButton4);
	}
	private: System::Void toolStripButton5_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (!pic1_click && !pic2_click && !pic3_click && !pic4_click && !pic5_click && !pic6_click && !pic7_click && !pic8_click && !pic9_click
			&& !but0_click && !but2_click && !but3_click && !but4_click && !but1_click && !but6_click && !but7_click && !but8_click && !but9_click)
		{
			but5_click = true;
			toolStripButton5->ForeColor = System::Drawing::Color::Coral;
		}

		but_click(img5, toolStripButton5);
	}
	private: System::Void toolStripButton6_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (!pic1_click && !pic2_click && !pic3_click && !pic4_click && !pic5_click && !pic6_click && !pic7_click && !pic8_click && !pic9_click
			&& !but0_click && !but2_click && !but3_click && !but4_click && !but5_click && !but1_click && !but7_click && !but8_click && !but9_click)
		{
			but6_click = true;
			toolStripButton6->ForeColor = System::Drawing::Color::Coral;
		}

		but_click(img6, toolStripButton6);
	}
	private: System::Void toolStripButton7_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (!pic1_click && !pic2_click && !pic3_click && !pic4_click && !pic5_click && !pic6_click && !pic7_click && !pic8_click && !pic9_click
			&& !but0_click && !but2_click && !but3_click && !but4_click && !but5_click && !but6_click && !but1_click && !but8_click && !but9_click)
		{
			but7_click = true;
			toolStripButton7->ForeColor = System::Drawing::Color::Coral;
		}

		but_click(img7, toolStripButton7);
	}
	private: System::Void toolStripButton8_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (!pic1_click && !pic2_click && !pic3_click && !pic4_click && !pic5_click && !pic6_click && !pic7_click && !pic8_click && !pic9_click
			&& !but0_click && !but2_click && !but3_click && !but4_click && !but5_click && !but6_click && !but7_click && !but1_click && !but9_click)
		{
			but8_click = true;
			toolStripButton8->ForeColor = System::Drawing::Color::Coral;
		}

		but_click(img8, toolStripButton8);
	}
	private: System::Void toolStripButton9_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (!pic1_click && !pic2_click && !pic3_click && !pic4_click && !pic5_click && !pic6_click && !pic7_click && !pic8_click && !pic9_click
			&& !but0_click && !but2_click && !but3_click && !but4_click && !but5_click && !but6_click && !but7_click && !but8_click && !but1_click)
		{
			but9_click = true;
			toolStripButton9->ForeColor = System::Drawing::Color::Coral;
		}

		but_click(img9, toolStripButton9);
	}
		   //Нажатие на кнопку "Готово"
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		update_sum(); //обнвляем сумму

		//проверяем равенство всех сумм
		if ((sum1 == sum2) && (sum1 == sum3) && (sum1 == sum4) && (sum1 == sum5) && (sum1 == sum6) && (sum1 == sum7) && (sum1 == sum8) && (sum1 != 0))
		{
			MessageBox::Show("Правильно, вы победили!!!", "Поздравляем!",
				MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			Application::Exit();
		}
		else
		{
			MessageBox::Show("Увы, но это не правильно", "Не правильно",
				MessageBoxButtons::OK, MessageBoxIcon::None);
		}
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//пробуем в переменные загрузить картинки
		try
		{
			img0 = Image::FromFile("D:\\Education\\Education1\\code languages\\code\\kurs\\0.png");
			img1 = Image::FromFile("D:\\Education\\Education1\\code languages\\code\\kurs\\1.png");
			img2 = Image::FromFile("D:\\Education\\Education1\\code languages\\code\\kurs\\2.png");
			img3 = Image::FromFile("D:\\Education\\Education1\\code languages\\code\\kurs\\3.png");
			img4 = Image::FromFile("D:\\Education\\Education1\\code languages\\code\\kurs\\4.png");
			img5 = Image::FromFile("D:\\Education\\Education1\\code languages\\code\\kurs\\5.png");
			img6 = Image::FromFile("D:\\Education\\Education1\\code languages\\code\\kurs\\6.png");
			img7 = Image::FromFile("D:\\Education\\Education1\\code languages\\code\\kurs\\7.png");
			img8 = Image::FromFile("D:\\Education\\Education1\\code languages\\code\\kurs\\8.png");
			img9 = Image::FromFile("D:\\Education\\Education1\\code languages\\code\\kurs\\9.png");
		}
		catch (...)
		{
			MessageBox::Show("Something gonna wrong", "ooops",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			Application::Exit();
		}
	}

		   bool a = false;

		   //клик по кнопке "Начать"
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		set_true(); //делаем активными все кнопки

		start = true;

		//блокируем кнопки, значения которых уже есть в ячейках
		block_but(return_num_pic(pictureBox1)); 
		block_but(return_num_pic(pictureBox2));
		block_but(return_num_pic(pictureBox3));
		block_but(return_num_pic(pictureBox4));
		block_but(return_num_pic(pictureBox5));
		block_but(return_num_pic(pictureBox6));
		block_but(return_num_pic(pictureBox7));
		block_but(return_num_pic(pictureBox8));
		block_but(return_num_pic(pictureBox9));

		update_sum(); //обвноялем сумму

		if (checkBox1->Checked) // если отмечено "Продолжить предыдущую игру"
			start_from_file(); //загружаемся из файла
		else
		{
			if (checkBox2->Checked) //Если отмечено "игра компьютера"
				computer_start(a); //Загружаем варианты
			else
				clear(); //очищаем игровое поле
		}

		button2->Visible = false; // прячем кнопку "Начать"
		checkBox1->Visible = false; // прячем чекбоксы
		checkBox2->Visible = false;
	}
	private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		// При закрытии формы записываем текущее состояние игры в файл
		write_to_file();
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		update_sum();

		if (checkBox1->Checked)
			start_from_file();
		else
		{
			if (checkBox2->Checked)
				computer_start(a);
			else
				clear();
		}
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox2->Checked)
		{
			a = true;
			computer_start(a);
			a = false;
		}
		else
			clear();
	}
};
}
