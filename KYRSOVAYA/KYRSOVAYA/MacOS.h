	#include"MacOSadd1.h"
	#pragma once

	namespace KYRSOVAYA {

		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		using namespace Data::SqlClient;

		/// <summary>
		/// Сводка для MacOS
		/// </summary>
		public ref class MacOS : public System::Windows::Forms::Form
		{
		public:
			MacOS(void)
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
			~MacOS()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::DataGridView^ dataGridView1;
		protected:
		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::Button^ button2;
		private: System::Windows::Forms::Button^ button3;
		private: System::Windows::Forms::BindingSource^ bindingSource1;
		private: System::Windows::Forms::TextBox^ textBox1;
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::Button^ button4;
		private: System::Windows::Forms::ComboBox^ comboBox1;
		private: System::Windows::Forms::ComboBox^ comboBox2;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::PictureBox^ pictureBox2;
		private: System::Windows::Forms::PictureBox^ pictureBox1;
		private: System::Windows::Forms::PictureBox^ pictureBox3;
		private: System::ComponentModel::IContainer^ components;


		private:
			/// <summary>
			/// Обязательная переменная конструктора.
			/// </summary>


	#pragma region Windows Form Designer generated code
			/// <summary>
			/// Требуемый метод для поддержки конструктора — не изменяйте 
			/// содержимое этого метода с помощью редактора кода.
			/// </summary>
			void InitializeComponent(void)
			{
				this->components = (gcnew System::ComponentModel::Container());
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MacOS::typeid));
				this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
				this->button1 = (gcnew System::Windows::Forms::Button());
				this->button2 = (gcnew System::Windows::Forms::Button());
				this->button3 = (gcnew System::Windows::Forms::Button());
				this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
				this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->button4 = (gcnew System::Windows::Forms::Button());
				this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
				this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->label3 = (gcnew System::Windows::Forms::Label());
				this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
				this->SuspendLayout();
				// 
				// dataGridView1
				// 
				this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlDark;
				this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
				this->dataGridView1->GridColor = System::Drawing::SystemColors::ControlText;
				this->dataGridView1->Location = System::Drawing::Point(-7, -4);
				this->dataGridView1->Name = L"dataGridView1";
				this->dataGridView1->RowHeadersWidth = 51;
				this->dataGridView1->RowTemplate->Height = 24;
				this->dataGridView1->Size = System::Drawing::Size(861, 469);
				this->dataGridView1->TabIndex = 0;
				// 
				// button1
				// 
				this->button1->Location = System::Drawing::Point(860, 48);
				this->button1->Name = L"button1";
				this->button1->Size = System::Drawing::Size(159, 34);
				this->button1->TabIndex = 1;
				this->button1->Text = L"Просмотр продукта";
				this->button1->UseVisualStyleBackColor = true;
				this->button1->Click += gcnew System::EventHandler(this, &MacOS::button1_Click);
				// 
				// button2
				// 
				this->button2->Location = System::Drawing::Point(581, 473);
				this->button2->Name = L"button2";
				this->button2->Size = System::Drawing::Size(159, 36);
				this->button2->TabIndex = 2;
				this->button2->Text = L"Добавленение";
				this->button2->UseVisualStyleBackColor = true;
				this->button2->Click += gcnew System::EventHandler(this, &MacOS::button2_Click);
				// 
				// button3
				// 
				this->button3->Location = System::Drawing::Point(860, 298);
				this->button3->Name = L"button3";
				this->button3->Size = System::Drawing::Size(159, 36);
				this->button3->TabIndex = 4;
				this->button3->Text = L"Удаление";
				this->button3->UseVisualStyleBackColor = true;
				this->button3->Click += gcnew System::EventHandler(this, &MacOS::button3_Click);
				// 
				// textBox1
				// 
				this->textBox1->Location = System::Drawing::Point(897, 352);
				this->textBox1->Name = L"textBox1";
				this->textBox1->Size = System::Drawing::Size(107, 22);
				this->textBox1->TabIndex = 5;
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label1->ForeColor = System::Drawing::Color::White;
				this->label1->Location = System::Drawing::Point(860, 357);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(19, 17);
				this->label1->TabIndex = 6;
				this->label1->Text = L"id";
				// 
				// button4
				// 
				this->button4->Location = System::Drawing::Point(12, 473);
				this->button4->Name = L"button4";
				this->button4->Size = System::Drawing::Size(159, 34);
				this->button4->TabIndex = 7;
				this->button4->Text = L"Сортировка по году";
				this->button4->UseVisualStyleBackColor = true;
				this->button4->Click += gcnew System::EventHandler(this, &MacOS::button4_Click);
				// 
				// comboBox1
				// 
				this->comboBox1->FormattingEnabled = true;
				this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
					L"2020", L"2019", L"2018", L"2017", L"2016", L"2015",
						L"2014", L"2013", L"2012", L"2011", L"2010"
				});
				this->comboBox1->Location = System::Drawing::Point(290, 461);
				this->comboBox1->Name = L"comboBox1";
				this->comboBox1->Size = System::Drawing::Size(121, 24);
				this->comboBox1->TabIndex = 8;
				// 
				// comboBox2
				// 
				this->comboBox2->FormattingEnabled = true;
				this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
					L"2020", L"2019", L"2018", L"2017", L"2016", L"2015",
						L"2014", L"2013", L"2012", L"2011", L"2010"
				});
				this->comboBox2->Location = System::Drawing::Point(290, 503);
				this->comboBox2->Name = L"comboBox2";
				this->comboBox2->Size = System::Drawing::Size(121, 24);
				this->comboBox2->TabIndex = 9;
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label2->ForeColor = System::Drawing::Color::White;
				this->label2->Location = System::Drawing::Point(245, 468);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(15, 17);
				this->label2->TabIndex = 10;
				this->label2->Text = L"c";
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)));
				this->label3->ForeColor = System::Drawing::Color::White;
				this->label3->Location = System::Drawing::Point(236, 510);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(24, 17);
				this->label3->TabIndex = 11;
				this->label3->Text = L"по";
				// 
				// pictureBox2
				// 
				this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
				this->pictureBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
				this->pictureBox2->Location = System::Drawing::Point(852, -4);
				this->pictureBox2->Name = L"pictureBox2";
				this->pictureBox2->Size = System::Drawing::Size(195, 511);
				this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pictureBox2->TabIndex = 18;
				this->pictureBox2->TabStop = false;
				// 
				// pictureBox1
				// 
				this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
				this->pictureBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
				this->pictureBox1->Location = System::Drawing::Point(-15, 452);
				this->pictureBox1->Name = L"pictureBox1";
				this->pictureBox1->Size = System::Drawing::Size(1062, 86);
				this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pictureBox1->TabIndex = 19;
				this->pictureBox1->TabStop = false;
				// 
				// pictureBox3
				// 
				this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
				this->pictureBox3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
				this->pictureBox3->Location = System::Drawing::Point(883, 424);
				this->pictureBox3->Name = L"pictureBox3";
				this->pictureBox3->Size = System::Drawing::Size(111, 100);
				this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pictureBox3->TabIndex = 20;
				this->pictureBox3->TabStop = false;
				// 
				// MacOS
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackColor = System::Drawing::SystemColors::ControlDark;
				this->ClientSize = System::Drawing::Size(1047, 536);
				this->Controls->Add(this->pictureBox3);
				this->Controls->Add(this->button2);
				this->Controls->Add(this->comboBox2);
				this->Controls->Add(this->comboBox1);
				this->Controls->Add(this->label3);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->button4);
				this->Controls->Add(this->pictureBox1);
				this->Controls->Add(this->label1);
				this->Controls->Add(this->textBox1);
				this->Controls->Add(this->button3);
				this->Controls->Add(this->button1);
				this->Controls->Add(this->dataGridView1);
				this->Controls->Add(this->pictureBox2);
				this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
				this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
				this->MaximizeBox = false;
				this->MinimizeBox = false;
				this->Name = L"MacOS";
				this->Text = L"MacOS";
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
	#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ constr = "Data Source=TUPO;Initial Catalog=KYRSOVAYA;Integrated Security=True";
			SqlConnection^ con = gcnew SqlConnection(constr);
			SqlDataAdapter^ sda = gcnew SqlDataAdapter("select * from Macbook", con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MacOSadd^ df = gcnew MacOSadd();
		df->ShowDialog();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constr = "Data Source=TUPO;Initial Catalog=KYRSOVAYA;Integrated Security=True";
		SqlConnection^ con = gcnew SqlConnection(constr);
		int id = Int32::Parse(textBox1->Text);
		SqlCommand^ cmd = gcnew SqlCommand("delete from Macbook WHERE id=" + id + "", con);
		con->Open();
		SqlDataReader^ dr = cmd->ExecuteReader();
		MessageBox::Show("Macbook info deleted");
		con->Close();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	
		if (comboBox1->Text == "" && comboBox2->Text == "") {
			MessageBox::Show("Введите даты для сортировки :)");
		}
		else
		{
			String^ constr = "Data Source=TUPO;Initial Catalog=KYRSOVAYA;Integrated Security=True";
			SqlConnection^ con = gcnew SqlConnection(constr);
			int year = Int32::Parse(comboBox1->Text);
			int year2 = Int32::Parse(comboBox2->Text);
			SqlDataAdapter^ sda = gcnew SqlDataAdapter("select * from Macbook WHERE Year BETWEEN'" + year + "'and'" + year2 + "'", con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}

	}
	};
	}
