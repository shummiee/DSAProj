#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Project4 {

	/// <summary>
	/// Summary for UC_Guards
	/// </summary>
	public ref class UC_Guards : public System::Windows::Forms::UserControl
	{
	public:
		UC_Guards(void)
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
		~UC_Guards()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ lblSchedule;




	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ lblBlock;

	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ lblGender;
	private: System::Windows::Forms::Label^ lblAge;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UC_Guards::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->lblSchedule = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->lblBlock = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lblGender = (gcnew System::Windows::Forms::Label());
			this->lblAge = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(600, 500);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &UC_Guards::pictureBox1_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(346, 372);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(241, 22);
			this->textBox5->TabIndex = 37;
			// 
			// lblSchedule
			// 
			this->lblSchedule->AutoSize = true;
			this->lblSchedule->BackColor = System::Drawing::Color::Transparent;
			this->lblSchedule->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSchedule->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lblSchedule->Location = System::Drawing::Point(273, 409);
			this->lblSchedule->Name = L"lblSchedule";
			this->lblSchedule->Size = System::Drawing::Size(111, 17);
			this->lblSchedule->TabIndex = 34;
			this->lblSchedule->Text = L"Scheduled Duty:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(84, 444);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(179, 22);
			this->textBox3->TabIndex = 32;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(76, 409);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(187, 22);
			this->textBox2->TabIndex = 31;
			// 
			// lblBlock
			// 
			this->lblBlock->AutoSize = true;
			this->lblBlock->BackColor = System::Drawing::Color::Transparent;
			this->lblBlock->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBlock->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lblBlock->Location = System::Drawing::Point(273, 375);
			this->lblBlock->Name = L"lblBlock";
			this->lblBlock->Size = System::Drawing::Size(57, 17);
			this->lblBlock->TabIndex = 30;
			this->lblBlock->Text = L"Block #:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(76, 375);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(187, 22);
			this->textBox1->TabIndex = 29;
			// 
			// lblGender
			// 
			this->lblGender->AutoSize = true;
			this->lblGender->BackColor = System::Drawing::Color::Transparent;
			this->lblGender->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGender->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lblGender->Location = System::Drawing::Point(13, 445);
			this->lblGender->Name = L"lblGender";
			this->lblGender->Size = System::Drawing::Size(58, 17);
			this->lblGender->TabIndex = 27;
			this->lblGender->Text = L"Gender:";
			// 
			// lblAge
			// 
			this->lblAge->AutoSize = true;
			this->lblAge->BackColor = System::Drawing::Color::Transparent;
			this->lblAge->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAge->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lblAge->Location = System::Drawing::Point(13, 412);
			this->lblAge->Name = L"lblAge";
			this->lblAge->Size = System::Drawing::Size(35, 17);
			this->lblAge->TabIndex = 26;
			this->lblAge->Text = L"Age:";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->BackColor = System::Drawing::Color::Transparent;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lblName->Location = System::Drawing::Point(13, 377);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(48, 17);
			this->lblName->TabIndex = 25;
			this->lblName->Text = L"Name:";
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->btnDelete->FlatAppearance->BorderSize = 0;
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btnDelete->Location = System::Drawing::Point(361, 330);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 25);
			this->btnDelete->TabIndex = 24;
			this->btnDelete->Text = L"DELETE";
			this->btnDelete->UseVisualStyleBackColor = false;
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->btnUpdate->FlatAppearance->BorderSize = 0;
			this->btnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btnUpdate->Location = System::Drawing::Point(248, 330);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(75, 25);
			this->btnUpdate->TabIndex = 23;
			this->btnUpdate->Text = L"UPDATE";
			this->btnUpdate->UseVisualStyleBackColor = false;
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->btnAdd->FlatAppearance->BorderSize = 0;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btnAdd->Location = System::Drawing::Point(140, 330);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 25);
			this->btnAdd->TabIndex = 22;
			this->btnAdd->Text = L"ADD";
			this->btnAdd->UseVisualStyleBackColor = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(16, 28);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(571, 294);
			this->dataGridView1->TabIndex = 21;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(397, 408);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(190, 22);
			this->dateTimePicker1->TabIndex = 38;
			// 
			// UC_Guards
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->lblSchedule);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->lblBlock);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lblGender);
			this->Controls->Add(this->lblAge);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"UC_Guards";
			this->Size = System::Drawing::Size(600, 500);
			this->Load += gcnew System::EventHandler(this, &UC_Guards::UC_Guards_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void UC_Guards_Load(System::Object^ sender, System::EventArgs^ e) {
	lblName->Parent = pictureBox1;
	lblName->BackColor = System::Drawing::Color::Transparent;
	lblGender->Parent = pictureBox1;
	lblGender->BackColor = System::Drawing::Color::Transparent;
	lblAge->Parent = pictureBox1;
	lblAge->BackColor = System::Drawing::Color::Transparent;
	lblBlock->Parent = pictureBox1;
	lblBlock->BackColor = System::Drawing::Color::Transparent;
	lblSchedule->Parent = pictureBox1;
	lblSchedule->BackColor = System::Drawing::Color::Transparent;
}
};
}
