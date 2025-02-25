#pragma once
#include "InmateData.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;


namespace Project4 {

	/// <summary>
	/// Summary for UC_Inmates
	/// </summary>
	public ref class UC_Inmates : public System::Windows::Forms::UserControl
	{
	public:
		UC_Inmates(void)
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
		~UC_Inmates()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridView^ dataGridViewInmates;


	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Label^ lblAge;
	private: System::Windows::Forms::Label^ lblGender;
	private: System::Windows::Forms::Label^ lblCellNum;




	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ lblSentence;
	private: System::Windows::Forms::Label^ lblBehavior;



	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UC_Inmates::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridViewInmates = (gcnew System::Windows::Forms::DataGridView());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblAge = (gcnew System::Windows::Forms::Label());
			this->lblGender = (gcnew System::Windows::Forms::Label());
			this->lblCellNum = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->lblSentence = (gcnew System::Windows::Forms::Label());
			this->lblBehavior = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewInmates))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(450, 406);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// dataGridViewInmates
			// 
			this->dataGridViewInmates->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewInmates->Location = System::Drawing::Point(11, 32);
			this->dataGridViewInmates->Margin = System::Windows::Forms::Padding(2);
			this->dataGridViewInmates->Name = L"dataGridViewInmates";
			this->dataGridViewInmates->RowHeadersWidth = 51;
			this->dataGridViewInmates->RowTemplate->Height = 24;
			this->dataGridViewInmates->Size = System::Drawing::Size(428, 231);
			this->dataGridViewInmates->TabIndex = 3;
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
			this->btnAdd->Location = System::Drawing::Point(104, 275);
			this->btnAdd->Margin = System::Windows::Forms::Padding(2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(56, 20);
			this->btnAdd->TabIndex = 4;
			this->btnAdd->Text = L"ADD";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &UC_Inmates::btnAdd_Click);
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
			this->btnUpdate->Location = System::Drawing::Point(185, 275);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(2);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(56, 20);
			this->btnUpdate->TabIndex = 5;
			this->btnUpdate->Text = L"UPDATE";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &UC_Inmates::btnUpdate_Click);
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
			this->btnDelete->Location = System::Drawing::Point(270, 275);
			this->btnDelete->Margin = System::Windows::Forms::Padding(2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(56, 20);
			this->btnDelete->TabIndex = 6;
			this->btnDelete->Text = L"DELETE";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &UC_Inmates::btnDelete_Click);
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->BackColor = System::Drawing::Color::Transparent;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lblName->Location = System::Drawing::Point(9, 312);
			this->lblName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(38, 13);
			this->lblName->TabIndex = 7;
			this->lblName->Text = L"Name:";
			// 
			// lblAge
			// 
			this->lblAge->AutoSize = true;
			this->lblAge->BackColor = System::Drawing::Color::Transparent;
			this->lblAge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAge->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lblAge->Location = System::Drawing::Point(9, 340);
			this->lblAge->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblAge->Name = L"lblAge";
			this->lblAge->Size = System::Drawing::Size(29, 13);
			this->lblAge->TabIndex = 8;
			this->lblAge->Text = L"Age:";
			// 
			// lblGender
			// 
			this->lblGender->AutoSize = true;
			this->lblGender->BackColor = System::Drawing::Color::Transparent;
			this->lblGender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGender->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lblGender->Location = System::Drawing::Point(9, 367);
			this->lblGender->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblGender->Name = L"lblGender";
			this->lblGender->Size = System::Drawing::Size(64, 13);
			this->lblGender->TabIndex = 9;
			this->lblGender->Text = L"Case Detail:";
			// 
			// lblCellNum
			// 
			this->lblCellNum->AutoSize = true;
			this->lblCellNum->BackColor = System::Drawing::Color::Transparent;
			this->lblCellNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCellNum->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lblCellNum->Location = System::Drawing::Point(206, 311);
			this->lblCellNum->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblCellNum->Name = L"lblCellNum";
			this->lblCellNum->Size = System::Drawing::Size(37, 13);
			this->lblCellNum->TabIndex = 10;
			this->lblCellNum->Text = L"Cell #:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(56, 310);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(141, 20);
			this->textBox1->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(56, 338);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(141, 20);
			this->textBox2->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(77, 366);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(120, 20);
			this->textBox3->TabIndex = 14;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(254, 310);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(187, 20);
			this->textBox4->TabIndex = 15;
			// 
			// lblSentence
			// 
			this->lblSentence->AutoSize = true;
			this->lblSentence->BackColor = System::Drawing::Color::Transparent;
			this->lblSentence->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSentence->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lblSentence->Location = System::Drawing::Point(204, 340);
			this->lblSentence->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblSentence->Name = L"lblSentence";
			this->lblSentence->Size = System::Drawing::Size(92, 13);
			this->lblSentence->TabIndex = 16;
			this->lblSentence->Text = L"Sentence Length:";
			// 
			// lblBehavior
			// 
			this->lblBehavior->AutoSize = true;
			this->lblBehavior->BackColor = System::Drawing::Color::Transparent;
			this->lblBehavior->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBehavior->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lblBehavior->Location = System::Drawing::Point(204, 366);
			this->lblBehavior->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblBehavior->Name = L"lblBehavior";
			this->lblBehavior->Size = System::Drawing::Size(95, 13);
			this->lblBehavior->TabIndex = 17;
			this->lblBehavior->Text = L"Behavior Records:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(300, 338);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(140, 20);
			this->textBox5->TabIndex = 19;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(306, 364);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(134, 20);
			this->textBox6->TabIndex = 20;
			// 
			// UC_Inmates
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->lblBehavior);
			this->Controls->Add(this->lblSentence);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lblCellNum);
			this->Controls->Add(this->lblGender);
			this->Controls->Add(this->lblAge);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->dataGridViewInmates);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"UC_Inmates";
			this->Size = System::Drawing::Size(450, 406);
			this->Load += gcnew System::EventHandler(this, &UC_Inmates::UC_Inmates_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewInmates))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public: InmateData^ inmateData = nullptr;
public: String^ connString = "Data Source=DESKTOP-KAEPC\\SQLEXPRESS;Initial Catalog=prisonManagementSystem;Persist Security Info=True;User ID=sa;Password=kevin123;";

private: System::Void UC_Inmates_Load(System::Object^ sender, System::EventArgs^ e) {
	lblName->Parent = pictureBox1;
	lblName->BackColor = System::Drawing::Color::Transparent;
	lblGender->Parent = pictureBox1;
	lblGender->BackColor = System::Drawing::Color::Transparent;
	lblAge->Parent = pictureBox1;
	lblAge->BackColor = System::Drawing::Color::Transparent;
	lblCellNum->Parent = pictureBox1;
	lblCellNum->BackColor = System::Drawing::Color::Transparent;
	lblSentence->Parent = pictureBox1;
	lblSentence->BackColor = System::Drawing::Color::Transparent;
	lblBehavior->Parent = pictureBox1;
	lblBehavior->BackColor = System::Drawing::Color::Transparent;

	SqlConnection^ sqlConn = gcnew SqlConnection(connString);
	sqlConn->Open();

	SqlCommand^ command = gcnew SqlCommand("SELECT * FROM dbo.inmateData", sqlConn);
	SqlDataAdapter^ da = gcnew SqlDataAdapter(command);
	DataTable^ dt = gcnew DataTable();
	da->Fill(dt);
	dataGridViewInmates->DataSource = dt;

	sqlConn->Close();
}

private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fullName = textBox1->Text;
	String^ age = textBox2->Text;
	String^ caseDetails = textBox3->Text;
	String^ sentenceLength = textBox4->Text;
	String^ cellNumber = textBox5->Text;
	String^ behaviourRecord = textBox6->Text;

	if (fullName->Length == 0 || age->Length == 0
		|| caseDetails->Length == 0 || sentenceLength->Length == 0
		|| cellNumber->Length == 0 || behaviourRecord->Length == 0) {
		
		MessageBox::Show("Please enter all fields", "On or more empty fields",
			MessageBoxButtons::OK);
		return;
	}
	try {
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO dbo.inmateData " +
			"(fullname, age, caseDetails, sentenceLength, cellNumber, behaviourRecords) VALUES " +
			"(@fullname, @age, @caseDetails, @sentenceLength, @cellNumber, @behaviourRecords);";

		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@fullname", fullName);
		command.Parameters->AddWithValue("@age", age);
		command.Parameters->AddWithValue("@caseDetails", caseDetails);
		command.Parameters->AddWithValue("@sentenceLength", sentenceLength);
		command.Parameters->AddWithValue("@cellNumber", cellNumber);
		command.Parameters->AddWithValue("@behaviourRecords", behaviourRecord);

		command.ExecuteNonQuery();
		inmateData = gcnew InmateData;
		inmateData->FullName = fullName;
		inmateData->Age = age;
		inmateData->CaseDetails = caseDetails;
		inmateData->SentenceLength = sentenceLength;
		inmateData->CellNumber = cellNumber;
		inmateData->BehaviourRecord = behaviourRecord;

		MessageBox::Show("Success", "Inmate added successfully",
			MessageBoxButtons::OK);

	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to add inmate data", "Registration Failure",
			MessageBoxButtons::OK);
	}
	
}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fullName = textBox1->Text;
	String^ age = textBox2->Text;
	String^ caseDetails = textBox3->Text;
	String^ sentenceLength = textBox4->Text;
	String^ cellNumber = textBox5->Text;
	String^ behaviourRecord = textBox6->Text;

	if (fullName->Length == 0 || age->Length == 0
		|| caseDetails->Length == 0 || sentenceLength->Length == 0
		|| cellNumber->Length == 0 || behaviourRecord->Length == 0) {

		MessageBox::Show("Please enter all fields", "On or more empty fields",
			MessageBoxButtons::OK);
		return;
	}
	try {
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "UPDATE dbo.inmateData SET " +
			"age=@age, caseDetails=@caseDetails, sentenceLength=@sentenceLength," + 
			"cellNumber=@cellNumber, behaviourRecords=@behaviourRecords WHERE fullname=@fullname;"; 

		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@fullname", fullName);
		command.Parameters->AddWithValue("@age", age);
		command.Parameters->AddWithValue("@caseDetails", caseDetails);
		command.Parameters->AddWithValue("@sentenceLength", sentenceLength);
		command.Parameters->AddWithValue("@cellNumber", cellNumber);
		command.Parameters->AddWithValue("@behaviourRecords", behaviourRecord);

		command.ExecuteNonQuery();
		inmateData = gcnew InmateData;
		inmateData->FullName = fullName;
		inmateData->Age = age;
		inmateData->CaseDetails = caseDetails;
		inmateData->SentenceLength = sentenceLength;
		inmateData->CellNumber = cellNumber;
		inmateData->BehaviourRecord = behaviourRecord;

		MessageBox::Show("Success", "Inmate information updated successfully",
			MessageBoxButtons::OK);

	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to update inmate data", "Update Failure",
			MessageBoxButtons::OK);
	}
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fullName = textBox1->Text;
	String^ age = textBox2->Text;
	String^ caseDetails = textBox3->Text;
	String^ sentenceLength = textBox4->Text;
	String^ cellNumber = textBox5->Text;
	String^ behaviourRecord = textBox6->Text;

	if (fullName->Length == 0) {

		MessageBox::Show("Please enter name", "ERROR",
			MessageBoxButtons::OK);
		return;
	}
	try {
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "DELETE dbo.inmateData WHERE fullname=@fullname";

		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@fullname", fullName);

		command.ExecuteNonQuery();
		inmateData = gcnew InmateData;
		inmateData->FullName = fullName;

		MessageBox::Show("Success", "Inmate information deleted successfully",
			MessageBoxButtons::OK);

	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to delete inmate data", "Deletion Failure",
			MessageBoxButtons::OK);
	}
}
};
}
