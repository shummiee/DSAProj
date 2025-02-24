#pragma once
#include "VisitorData.h"

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for VisitorForm
	/// </summary>
	public ref class VisitorForm : public System::Windows::Forms::Form
	{
	public:
		VisitorForm(void)
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
		~VisitorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Label^ lblGender;
	private: System::Windows::Forms::Label^ lblRelationship;
	private: System::Windows::Forms::Label^ lblDT;




	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtRelationship;


	private: System::Windows::Forms::ComboBox^ cbGender;
	private: System::Windows::Forms::DateTimePicker^ dtDateTime;
	private: System::Windows::Forms::Button^ btnSubmit;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VisitorForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblGender = (gcnew System::Windows::Forms::Label());
			this->lblRelationship = (gcnew System::Windows::Forms::Label());
			this->lblDT = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtRelationship = (gcnew System::Windows::Forms::TextBox());
			this->cbGender = (gcnew System::Windows::Forms::ComboBox());
			this->dtDateTime = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(802, 504);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &VisitorForm::pictureBox1_Click);
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->BackColor = System::Drawing::Color::Transparent;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::White;
			this->lblTitle->Location = System::Drawing::Point(156, 62);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(484, 75);
			this->lblTitle->TabIndex = 1;
			this->lblTitle->Text = L"VISITOR\'S FORM";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->BackColor = System::Drawing::Color::Transparent;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->ForeColor = System::Drawing::Color::White;
			this->lblName->Location = System::Drawing::Point(269, 150);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(87, 21);
			this->lblName->TabIndex = 2;
			this->lblName->Text = L"Full Name:";
			// 
			// lblGender
			// 
			this->lblGender->AutoSize = true;
			this->lblGender->BackColor = System::Drawing::Color::Transparent;
			this->lblGender->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGender->ForeColor = System::Drawing::Color::White;
			this->lblGender->Location = System::Drawing::Point(269, 215);
			this->lblGender->Name = L"lblGender";
			this->lblGender->Size = System::Drawing::Size(67, 21);
			this->lblGender->TabIndex = 3;
			this->lblGender->Text = L"Gender:";
			// 
			// lblRelationship
			// 
			this->lblRelationship->AutoSize = true;
			this->lblRelationship->BackColor = System::Drawing::Color::Transparent;
			this->lblRelationship->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblRelationship->ForeColor = System::Drawing::Color::White;
			this->lblRelationship->Location = System::Drawing::Point(269, 277);
			this->lblRelationship->Name = L"lblRelationship";
			this->lblRelationship->Size = System::Drawing::Size(177, 21);
			this->lblRelationship->TabIndex = 4;
			this->lblRelationship->Text = L"Relationship to Inmate:";
			// 
			// lblDT
			// 
			this->lblDT->AutoSize = true;
			this->lblDT->BackColor = System::Drawing::Color::Transparent;
			this->lblDT->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDT->ForeColor = System::Drawing::Color::White;
			this->lblDT->Location = System::Drawing::Point(269, 337);
			this->lblDT->Name = L"lblDT";
			this->lblDT->Size = System::Drawing::Size(118, 21);
			this->lblDT->TabIndex = 5;
			this->lblDT->Text = L"Date and Time:";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(281, 178);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(254, 22);
			this->txtName->TabIndex = 7;
			// 
			// txtRelationship
			// 
			this->txtRelationship->Location = System::Drawing::Point(281, 304);
			this->txtRelationship->Name = L"txtRelationship";
			this->txtRelationship->Size = System::Drawing::Size(254, 22);
			this->txtRelationship->TabIndex = 8;
			// 
			// cbGender
			// 
			this->cbGender->FormattingEnabled = true;
			this->cbGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->cbGender->Location = System::Drawing::Point(281, 244);
			this->cbGender->Name = L"cbGender";
			this->cbGender->Size = System::Drawing::Size(254, 24);
			this->cbGender->TabIndex = 9;
			// 
			// dtDateTime
			// 
			this->dtDateTime->Location = System::Drawing::Point(281, 363);
			this->dtDateTime->Name = L"dtDateTime";
			this->dtDateTime->Size = System::Drawing::Size(254, 22);
			this->dtDateTime->TabIndex = 10;
			// 
			// btnSubmit
			// 
			this->btnSubmit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->btnSubmit->FlatAppearance->BorderSize = 0;
			this->btnSubmit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSubmit->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubmit->ForeColor = System::Drawing::Color::Transparent;
			this->btnSubmit->Location = System::Drawing::Point(344, 402);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(112, 30);
			this->btnSubmit->TabIndex = 11;
			this->btnSubmit->Text = L"SUBMIT";
			this->btnSubmit->UseVisualStyleBackColor = false;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &VisitorForm::btnSubmit_Click);
			// 
			// VisitorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 500);
			this->Controls->Add(this->btnSubmit);
			this->Controls->Add(this->dtDateTime);
			this->Controls->Add(this->cbGender);
			this->Controls->Add(this->txtRelationship);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->lblDT);
			this->Controls->Add(this->lblRelationship);
			this->Controls->Add(this->lblGender);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"VisitorForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VisitorForm";
			this->Load += gcnew System::EventHandler(this, &VisitorForm::VisitorForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void VisitorForm_Load(System::Object^ sender, System::EventArgs^ e) {
	lblTitle->Parent = pictureBox1;
	lblTitle->BackColor = System::Drawing::Color::Transparent;
	lblName->Parent = pictureBox1;
	lblName->BackColor = System::Drawing::Color::Transparent;
	lblGender->Parent = pictureBox1;
	lblGender->BackColor = System::Drawing::Color::Transparent;
	lblRelationship->Parent = pictureBox1;
	lblRelationship->BackColor = System::Drawing::Color::Transparent;
	lblDT->Parent = pictureBox1;
	lblDT->BackColor = System::Drawing::Color::Transparent;
}

public: VisitorData^ visitorData = nullptr;

private: System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fullName = txtName->Text;
	String^ gender = cbGender->SelectedItem != nullptr ? cbGender->SelectedItem->ToString() : nullptr;
	String^ relationship = txtRelationship->Text;
	String^ formattedDateAndTime = dtDateTime->Text->ToString("yyyy-MM-dd HH:mm:ss");

	if (fullName->Length == 0 || gender == nullptr || relationship->Length == 0 || dateAndTime == DateTime::MinValue) {
		MessageBox::Show("Please enter all fields", "On or more empty fields",
		MessageBoxButtons::OK);
		return;
	}
	try {
		String^ connString = "Data Source=DESKTOP-4FAVDCA\\SQLEXPRESS;Initial Catalog=tryDSA;User ID=sa;Password=kirkmanuel;";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO dbo.visitors " +
			"(fullname, gender, relationship, dateAndTime) VALUES " +
			"(@fullname, @gender, @relationship, @dateAndTime);";

		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@fullname", fullName);
		command.Parameters->AddWithValue("@gender", gender);
		command.Parameters->AddWithValue("@relationship", relationship);
		command.Parameters->AddWithValue("@dateAndTime", formattedDateAndTime);

		command.ExecuteNonQuery();
		visitorData = gcnew VisitorData;
		visitorData->FullName = fullName;
		visitorData->Gender = gender;
		visitorData->Relationship = relationship;
		visitorData->DateAndTime = dateAndTime;
	}
	catch (Exception^ ex){
		MessageBox::Show("Failed to Log", "Log Failure", MessageBoxButtons::OK);
	}
}
};
}
