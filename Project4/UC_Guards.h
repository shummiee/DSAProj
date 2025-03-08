#pragma once

#include "User.h"
#include "Database.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;


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
	private: System::Windows::Forms::TextBox^ txtBxAge;



	private: System::Windows::Forms::Label^ lblSchedule;




	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ txtBxBlock;

	private: System::Windows::Forms::Label^ lblAge;



	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ lblGender;
	private: System::Windows::Forms::Label^ lblBlock;

	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::DataGridView^ dataGridViewGuards;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::TextBox^ txtSearch;


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
			this->txtBxAge = (gcnew System::Windows::Forms::TextBox());
			this->lblSchedule = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->txtBxBlock = (gcnew System::Windows::Forms::TextBox());
			this->lblAge = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lblGender = (gcnew System::Windows::Forms::Label());
			this->lblBlock = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->dataGridViewGuards = (gcnew System::Windows::Forms::DataGridView());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewGuards))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(600, 500);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &UC_Guards::pictureBox1_Click);
			// 
			// txtBxAge
			// 
			this->txtBxAge->Location = System::Drawing::Point(335, 397);
			this->txtBxAge->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtBxAge->Name = L"txtBxAge";
			this->txtBxAge->Size = System::Drawing::Size(253, 22);
			this->txtBxAge->TabIndex = 37;
			// 
			// lblSchedule
			// 
			this->lblSchedule->AutoSize = true;
			this->lblSchedule->BackColor = System::Drawing::Color::Transparent;
			this->lblSchedule->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSchedule->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lblSchedule->Location = System::Drawing::Point(269, 434);
			this->lblSchedule->Name = L"lblSchedule";
			this->lblSchedule->Size = System::Drawing::Size(105, 16);
			this->lblSchedule->TabIndex = 34;
			this->lblSchedule->Text = L"Scheduled Duty:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(84, 469);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(179, 22);
			this->textBox3->TabIndex = 32;
			// 
			// txtBxBlock
			// 
			this->txtBxBlock->Location = System::Drawing::Point(84, 434);
			this->txtBxBlock->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtBxBlock->Name = L"txtBxBlock";
			this->txtBxBlock->Size = System::Drawing::Size(179, 22);
			this->txtBxBlock->TabIndex = 31;
			// 
			// lblAge
			// 
			this->lblAge->AutoSize = true;
			this->lblAge->BackColor = System::Drawing::Color::Transparent;
			this->lblAge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAge->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lblAge->Location = System::Drawing::Point(273, 400);
			this->lblAge->Name = L"lblAge";
			this->lblAge->Size = System::Drawing::Size(35, 16);
			this->lblAge->TabIndex = 30;
			this->lblAge->Text = L"Age:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(76, 400);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(187, 22);
			this->textBox1->TabIndex = 29;
			// 
			// lblGender
			// 
			this->lblGender->AutoSize = true;
			this->lblGender->BackColor = System::Drawing::Color::Transparent;
			this->lblGender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGender->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lblGender->Location = System::Drawing::Point(13, 471);
			this->lblGender->Name = L"lblGender";
			this->lblGender->Size = System::Drawing::Size(55, 16);
			this->lblGender->TabIndex = 27;
			this->lblGender->Text = L"Gender:";
			// 
			// lblBlock
			// 
			this->lblBlock->AutoSize = true;
			this->lblBlock->BackColor = System::Drawing::Color::Transparent;
			this->lblBlock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBlock->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lblBlock->Location = System::Drawing::Point(13, 437);
			this->lblBlock->Name = L"lblBlock";
			this->lblBlock->Size = System::Drawing::Size(51, 16);
			this->lblBlock->TabIndex = 26;
			this->lblBlock->Text = L"Block#:";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->BackColor = System::Drawing::Color::Transparent;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lblName->Location = System::Drawing::Point(13, 402);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(47, 16);
			this->lblName->TabIndex = 25;
			this->lblName->Text = L"Name:";
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->btnDelete->FlatAppearance->BorderSize = 0;
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btnDelete->Location = System::Drawing::Point(361, 355);
			this->btnDelete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 25);
			this->btnDelete->TabIndex = 24;
			this->btnDelete->Text = L"DELETE";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &UC_Guards::btnDelete_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->btnUpdate->FlatAppearance->BorderSize = 0;
			this->btnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btnUpdate->Location = System::Drawing::Point(248, 355);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(75, 25);
			this->btnUpdate->TabIndex = 23;
			this->btnUpdate->Text = L"UPDATE";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &UC_Guards::btnUpdate_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->btnAdd->FlatAppearance->BorderSize = 0;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btnAdd->Location = System::Drawing::Point(140, 355);
			this->btnAdd->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 25);
			this->btnAdd->TabIndex = 22;
			this->btnAdd->Text = L"ADD";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &UC_Guards::btnAdd_Click);
			// 
			// dataGridViewGuards
			// 
			this->dataGridViewGuards->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewGuards->Location = System::Drawing::Point(16, 53);
			this->dataGridViewGuards->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridViewGuards->Name = L"dataGridViewGuards";
			this->dataGridViewGuards->RowHeadersWidth = 51;
			this->dataGridViewGuards->RowTemplate->Height = 24;
			this->dataGridViewGuards->Size = System::Drawing::Size(571, 294);
			this->dataGridViewGuards->TabIndex = 21;
			this->dataGridViewGuards->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UC_Guards::dataGridViewGuards_CellClick);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(397, 434);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(191, 22);
			this->dateTimePicker1->TabIndex = 38;
			// 
			// btnSearch
			// 
			this->btnSearch->BackColor = System::Drawing::Color::Transparent;
			this->btnSearch->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSearch.Image")));
			this->btnSearch->Location = System::Drawing::Point(543, 6);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(40, 40);
			this->btnSearch->TabIndex = 40;
			this->btnSearch->UseVisualStyleBackColor = false;
			this->btnSearch->Click += gcnew System::EventHandler(this, &UC_Guards::btnSearch_Click);
			// 
			// txtSearch
			// 
			this->txtSearch->Location = System::Drawing::Point(374, 15);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(163, 22);
			this->txtSearch->TabIndex = 39;
			// 
			// UC_Guards
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtSearch);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->txtBxAge);
			this->Controls->Add(this->lblSchedule);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->txtBxBlock);
			this->Controls->Add(this->lblAge);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lblGender);
			this->Controls->Add(this->lblBlock);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->dataGridViewGuards);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"UC_Guards";
			this->Size = System::Drawing::Size(600, 500);
			this->Load += gcnew System::EventHandler(this, &UC_Guards::UC_Guards_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewGuards))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

public: User^ users = nullptr;
public: String^ connString = "Data Source=DESKTOP-4FAVDCA\\SQLEXPRESS;Initial Catalog=tryDSA;Persist Security Info=True;User ID=sa;Password=kirkmanuel;";

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
	btnSearch->Parent = pictureBox1;
	btnSearch->BackColor = System::Drawing::Color::Transparent;

	SqlConnection^ sqlConn = gcnew SqlConnection(connString);
	sqlConn->Open();

	SqlCommand^ command = gcnew SqlCommand("SELECT * FROM dbo.users", sqlConn);
	SqlDataAdapter^ da = gcnew SqlDataAdapter(command);
	DataTable^ dt = gcnew DataTable();
	da->Fill(dt);
	dataGridViewGuards->DataSource = dt;

	sqlConn->Close();
}


private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fullName = textBox1->Text;
	String^ block = txtBxBlock->Text;
	DateTime schedule = dateTimePicker1->Value;

	if (fullName->Length == 0 || block->Length == 0) {

		MessageBox::Show("Please enter all fields", "On or more empty fields",
			MessageBoxButtons::OK);
		return;
	}
	try {
		Database^ db = gcnew Database();
		String^ sqlQuery = "UPDATE dbo.users SET block=@block, schedule=@schedule WHERE name=@name;";

		array<SqlParameter^>^ parameters = {
			gcnew SqlParameter("@name", fullName),
			gcnew SqlParameter("@block", block),
			gcnew SqlParameter("@schedule", schedule.ToString("yyyy-MM-dd HH:mm:ss"))
		};

		SqlDataReader^ reader = db->ExecuteQuery(sqlQuery, parameters);

		users = gcnew User;
		users->Name = fullName;
		users->Block = block;
		users->Schedule = schedule;

		MessageBox::Show("Successfully Added Officer's Schedule", "Success", 
			MessageBoxButtons::OK);
	
		/*SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "UPDATE dbo.users SET block=@block, schedule=@schedule WHERE firstname=@firstname;";

		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@firstname", fullName);
		command.Parameters->AddWithValue("@block", block);
		command.Parameters->AddWithValue("@schedule", schedule.ToString("yyyy-MM-dd HH:mm:ss"));

		command.ExecuteNonQuery();
		users = gcnew User;
		users->Name = fullName;
		users->Block = block;
		users->Schedule = schedule;

		MessageBox::Show("Successfully added Officer Schedule", "Success",
			MessageBoxButtons::OK);*/

	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to add Officer Schedule", "Error",
			MessageBoxButtons::OK);
	}
}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fullName = textBox1->Text;
	String^ block = txtBxBlock->Text;
	DateTime schedule = dateTimePicker1->Value;

	if (fullName->Length == 0 || block->Length == 0) {

		MessageBox::Show("Please enter all fields", "On or more empty fields",
			MessageBoxButtons::OK);	
		return;
	}
	try {
		Database^ db = gcnew Database();
		String^ sqlQuery = "UPDATE dbo.users SET block=@block, schedule=@schedule WHERE name=@name;";

		array<SqlParameter^>^ parameters = {
			gcnew SqlParameter("@name", fullName),
			gcnew SqlParameter("@block", block),
			gcnew SqlParameter("@schedule", schedule.ToString("yyyy-MM-dd HH:mm:ss"))
		};

		SqlDataReader^ reader = db->ExecuteQuery(sqlQuery, parameters);

		users = gcnew User;
		users->Name = fullName;
		users->Block = block;
		users->Schedule = schedule;

		MessageBox::Show("Successfully Updated Officer's Schedule", "Success",
			MessageBoxButtons::OK);

	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to add Officer Schedule", "Error",
			MessageBoxButtons::OK);
	}
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fullName = textBox1->Text;
	String^ block = txtBxBlock->Text;
	DateTime schedule = dateTimePicker1->Value;

	if (fullName->Length == 0) {

		MessageBox::Show("Please enter all required fields", "Please enter name.",
			MessageBoxButtons::OK);
		return;
	}
	try {
		Database^ db = gcnew Database();
		String^ sqlQuery = "UPDATE dbo.users SET block=@block, schedule=@schedule WHERE name=@name;";

		array<SqlParameter^>^ parameters = {
			gcnew SqlParameter("@name", fullName),
			gcnew SqlParameter("@block", block),
			gcnew SqlParameter("@schedule", schedule.ToString("yyyy-MM-dd HH:mm:ss"))
		};

		SqlDataReader^ reader = db->ExecuteQuery(sqlQuery, parameters);

		users = gcnew User;
		users->Name = fullName;
		users->Block = block;
		users->Schedule = schedule;

		MessageBox::Show("Successfully Added Officer's Schedule", "Success",
			MessageBoxButtons::OK);

	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to add Officer Schedule", "Error",
			MessageBoxButtons::OK);
	}
}
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {	
	
	String^ fullName = txtSearch->Text->Trim();

	if (fullName->Length == 0) {
		MessageBox::Show("Please enter a name to search.", "Empty Search Field", MessageBoxButtons::OK);
		return;
	}

	try {
		
		Database^ db = gcnew Database();

		
		String^ sqlQuery = "SELECT block, schedule FROM dbo.users WHERE name=@name;";

		
		array<SqlParameter^>^ parameters = {
			gcnew SqlParameter("@name", fullName)
		};

		
		SqlDataReader^ reader = db->ExecuteQuery(sqlQuery, parameters);

		
		dataGridViewGuards->DataSource = nullptr;

		
		DataTable^ dt = gcnew DataTable();
		dt->Load(reader);

		
		if (dt->Rows->Count > 0) {
			
			dataGridViewGuards->DataSource = dt;

			
			dataGridViewGuards->AutoResizeColumns();

			MessageBox::Show("User found!", "Search Successful", MessageBoxButtons::OK);
		}
		else {
			MessageBox::Show("No user found with the given name.", "Search Failed", MessageBoxButtons::OK);
		}

		
		reader->Close();
	}
	catch (Exception^ ex) {
		
		MessageBox::Show("Error while searching user schedule: " + ex->Message, "Search Failure", MessageBoxButtons::OK);
	}
}
private: System::Void dataGridViewGuards_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0) { // Ensure the row index is valid
		DataGridViewRow^ row = this->dataGridViewGuards->Rows[e->RowIndex];

		textBox1->Text = row->Cells["name"]->Value->ToString();
		txtBxBlock->Text = row->Cells["block"]->Value->ToString();
		txtBxAge->Text = row->Cells["age"]->Value->ToString();
		textBox3->Text = row->Cells["gender"]->Value->ToString();
		dateTimePicker1->Value = Convert::ToDateTime(row->Cells["schedule"]->Value->ToString());
	}
}
}
;
}

