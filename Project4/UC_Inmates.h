#pragma once
#include "InmateData.h"
#include "Database.h"
#include "User.h"

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
	private:
		User^ user; // Declare user object
	private: System::Windows::Forms::PictureBox^ btnSearch;

		   String^ userRole; // Store user role

	public:
		// Constructor to receive user object
		UC_Inmates(User^ loggedInUser) {
			InitializeComponent();
			this->user = loggedInUser;  // Now 'user' is defined
			this->userRole = user->Role;
		
		}
	



		// Add function prototypes here if needed

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
	private: System::Windows::Forms::TextBox^ txtBxInmateName;
	private: System::Windows::Forms::TextBox^ txtBxInmateAge;
	private: System::Windows::Forms::TextBox^ txtBxInmateCaseDetails;
	private: System::Windows::Forms::TextBox^ txtBxInmateCellNumber;

	private: System::Windows::Forms::Label^ lblSentence;
	private: System::Windows::Forms::Label^ lblBehavior;
	private: System::Windows::Forms::TextBox^ txtBxInmateSentence;
	private: System::Windows::Forms::TextBox^ txtBxInmateBehaviour;

	private: System::Windows::Forms::TextBox^ txtBxSearch;

	



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->txtBxInmateName = (gcnew System::Windows::Forms::TextBox());
			this->txtBxInmateAge = (gcnew System::Windows::Forms::TextBox());
			this->txtBxInmateCaseDetails = (gcnew System::Windows::Forms::TextBox());
			this->txtBxInmateCellNumber = (gcnew System::Windows::Forms::TextBox());
			this->lblSentence = (gcnew System::Windows::Forms::Label());
			this->lblBehavior = (gcnew System::Windows::Forms::Label());
			this->txtBxInmateSentence = (gcnew System::Windows::Forms::TextBox());
			this->txtBxInmateBehaviour = (gcnew System::Windows::Forms::TextBox());
			this->txtBxSearch = (gcnew System::Windows::Forms::TextBox());
			this->btnSearch = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewInmates))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnSearch))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(600, 500);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &UC_Inmates::pictureBox1_Click);
			// 
			// dataGridViewInmates
			// 
			this->dataGridViewInmates->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewInmates->Location = System::Drawing::Point(15, 65);
			this->dataGridViewInmates->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridViewInmates->Name = L"dataGridViewInmates";
			this->dataGridViewInmates->RowHeadersWidth = 51;
			this->dataGridViewInmates->RowTemplate->Height = 24;
			this->dataGridViewInmates->Size = System::Drawing::Size(571, 284);
			this->dataGridViewInmates->TabIndex = 3;
			this->dataGridViewInmates->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UC_Inmates::dataGridViewInmates_CellClick);
			this->dataGridViewInmates->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UC_Inmates::dataGridViewInmates_CellContentClick);
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
			this->btnAdd->Location = System::Drawing::Point(139, 357);
			this->btnAdd->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(83, 25);
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
			this->btnUpdate->Location = System::Drawing::Point(249, 357);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(83, 25);
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
			this->btnDelete->Location = System::Drawing::Point(356, 357);
			this->btnDelete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(87, 25);
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
			this->lblName->Location = System::Drawing::Point(12, 403);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(47, 16);
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
			this->lblAge->Location = System::Drawing::Point(12, 437);
			this->lblAge->Name = L"lblAge";
			this->lblAge->Size = System::Drawing::Size(35, 16);
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
			this->lblGender->Location = System::Drawing::Point(12, 471);
			this->lblGender->Name = L"lblGender";
			this->lblGender->Size = System::Drawing::Size(80, 16);
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
			this->lblCellNum->Location = System::Drawing::Point(275, 402);
			this->lblCellNum->Name = L"lblCellNum";
			this->lblCellNum->Size = System::Drawing::Size(43, 16);
			this->lblCellNum->TabIndex = 10;
			this->lblCellNum->Text = L"Cell #:";
			// 
			// txtBxInmateName
			// 
			this->txtBxInmateName->Location = System::Drawing::Point(103, 401);
			this->txtBxInmateName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtBxInmateName->Name = L"txtBxInmateName";
			this->txtBxInmateName->Size = System::Drawing::Size(159, 22);
			this->txtBxInmateName->TabIndex = 11;
			// 
			// txtBxInmateAge
			// 
			this->txtBxInmateAge->Location = System::Drawing::Point(103, 435);
			this->txtBxInmateAge->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtBxInmateAge->Name = L"txtBxInmateAge";
			this->txtBxInmateAge->Size = System::Drawing::Size(159, 22);
			this->txtBxInmateAge->TabIndex = 13;
			// 
			// txtBxInmateCaseDetails
			// 
			this->txtBxInmateCaseDetails->Location = System::Drawing::Point(103, 469);
			this->txtBxInmateCaseDetails->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtBxInmateCaseDetails->Name = L"txtBxInmateCaseDetails";
			this->txtBxInmateCaseDetails->Size = System::Drawing::Size(159, 22);
			this->txtBxInmateCaseDetails->TabIndex = 14;
			// 
			// txtBxInmateCellNumber
			// 
			this->txtBxInmateCellNumber->Location = System::Drawing::Point(408, 401);
			this->txtBxInmateCellNumber->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtBxInmateCellNumber->Name = L"txtBxInmateCellNumber";
			this->txtBxInmateCellNumber->Size = System::Drawing::Size(179, 22);
			this->txtBxInmateCellNumber->TabIndex = 15;
			// 
			// lblSentence
			// 
			this->lblSentence->AutoSize = true;
			this->lblSentence->BackColor = System::Drawing::Color::Transparent;
			this->lblSentence->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSentence->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lblSentence->Location = System::Drawing::Point(272, 437);
			this->lblSentence->Name = L"lblSentence";
			this->lblSentence->Size = System::Drawing::Size(110, 16);
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
			this->lblBehavior->Location = System::Drawing::Point(272, 469);
			this->lblBehavior->Name = L"lblBehavior";
			this->lblBehavior->Size = System::Drawing::Size(119, 16);
			this->lblBehavior->TabIndex = 17;
			this->lblBehavior->Text = L"Behavior Records:";
			// 
			// txtBxInmateSentence
			// 
			this->txtBxInmateSentence->Location = System::Drawing::Point(408, 435);
			this->txtBxInmateSentence->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtBxInmateSentence->Name = L"txtBxInmateSentence";
			this->txtBxInmateSentence->Size = System::Drawing::Size(177, 22);
			this->txtBxInmateSentence->TabIndex = 19;
			// 
			// txtBxInmateBehaviour
			// 
			this->txtBxInmateBehaviour->Location = System::Drawing::Point(408, 467);
			this->txtBxInmateBehaviour->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtBxInmateBehaviour->Name = L"txtBxInmateBehaviour";
			this->txtBxInmateBehaviour->Size = System::Drawing::Size(177, 22);
			this->txtBxInmateBehaviour->TabIndex = 20;
			// 
			// txtBxSearch
			// 
			this->txtBxSearch->Location = System::Drawing::Point(376, 29);
			this->txtBxSearch->Name = L"txtBxSearch";
			this->txtBxSearch->Size = System::Drawing::Size(163, 22);
			this->txtBxSearch->TabIndex = 21;
			this->txtBxSearch->TextChanged += gcnew System::EventHandler(this, &UC_Inmates::txtBxSearch_TextChanged);
			// 
			// btnSearch
			// 
			this->btnSearch->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSearch.Image")));
			this->btnSearch->Location = System::Drawing::Point(545, 20);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(40, 40);
			this->btnSearch->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->btnSearch->TabIndex = 22;
			this->btnSearch->TabStop = false;
			this->btnSearch->Click += gcnew System::EventHandler(this, &UC_Inmates::pictureBox2_Click);
			// 
			// UC_Inmates
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtBxSearch);
			this->Controls->Add(this->txtBxInmateBehaviour);
			this->Controls->Add(this->txtBxInmateSentence);
			this->Controls->Add(this->lblBehavior);
			this->Controls->Add(this->lblSentence);
			this->Controls->Add(this->txtBxInmateCellNumber);
			this->Controls->Add(this->txtBxInmateCaseDetails);
			this->Controls->Add(this->txtBxInmateAge);
			this->Controls->Add(this->txtBxInmateName);
			this->Controls->Add(this->lblCellNum);
			this->Controls->Add(this->lblGender);
			this->Controls->Add(this->lblAge);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->dataGridViewInmates);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"UC_Inmates";
			this->Size = System::Drawing::Size(600, 500);
			this->Load += gcnew System::EventHandler(this, &UC_Inmates::UC_Inmates_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewInmates))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnSearch))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: InmateData^ inmateData = nullptr;
	public: String^ connString = "Data Source=DESKTOP-4FAVDCA\\SQLEXPRESS;Initial Catalog=tryDSA;Persist Security Info=True;User ID=sa;Password=kirkmanuel;";
	
	private:
		void RefreshDataGridView() {
			try {
				SqlConnection^ sqlConn = gcnew SqlConnection(connString);
				sqlConn->Open();

				SqlCommand^ command = gcnew SqlCommand("SELECT * FROM dbo.inmates", sqlConn);
				SqlDataAdapter^ da = gcnew SqlDataAdapter(command);
				DataTable^ dt = gcnew DataTable();
				da->Fill(dt);
				dataGridViewInmates->DataSource = dt;

				sqlConn->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error refreshing DataGridView: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
private:
	void PerformSearch()
	{
		String^ searchText = txtBxSearch->Text->Trim();

		if (searchText->Length == 0)
		{
			// If the search box is empty, refresh the DataGridView to show all records
			RefreshDataGridView();
			return;
		}

		try
		{
			Database^ db = gcnew Database();

			// Build the SQL query to search by fullname and cellNumber based on the starting letter or number
			String^ sqlQuery = "SELECT * FROM dbo.inmates WHERE fullname LIKE @searchText OR cellNumber LIKE @searchText;";

			// Use the searchText as the starting pattern (e.g., "A%" for names starting with "A")
			String^ searchPattern = searchText + "%";

			array<SqlParameter^>^ parameters = {
				gcnew SqlParameter("@searchText", searchPattern)
			};

			SqlDataReader^ reader = db->ExecuteQuery(sqlQuery, parameters);

			DataTable^ dt = gcnew DataTable();
			dt->Load(reader);

			if (dt->Rows->Count > 0)
			{
				dataGridViewInmates->DataSource = dt;
			}
			else
			{
				MessageBox::Show("No records found.", "Search", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}

			reader->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error while searching: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

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
		btnSearch->Parent = pictureBox1;
		btnSearch->BackColor = System::Drawing::Color::Transparent;

		SqlConnection^ sqlConn = gcnew SqlConnection(connString);
		sqlConn->Open();

		SqlCommand^ command = gcnew SqlCommand("SELECT * FROM dbo.inmates", sqlConn);
		SqlDataAdapter^ da = gcnew SqlDataAdapter(command);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);
		dataGridViewInmates->DataSource = dt;

		sqlConn->Close();
	}


private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {

	if (userRole != "Warden") {
		MessageBox::Show("Access Denied! Only Wardens can add inmate records.",
			"Unauthorized Action", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	String^ fullName = txtBxInmateName->Text->Trim();
	String^ age = txtBxInmateAge->Text->Trim();
	String^ caseDetails = txtBxInmateCaseDetails->Text->Trim();
	String^ sentenceLength = txtBxInmateSentence->Text->Trim();
	String^ cellNumber = txtBxInmateCellNumber->Text->Trim();
	String^ behaviourRecord = txtBxInmateBehaviour->Text->Trim();

	// Validate required fields
	if (fullName->Length == 0 || age->Length == 0
		|| caseDetails->Length == 0 || sentenceLength->Length == 0
		|| cellNumber->Length == 0 || behaviourRecord->Length == 0) {

		MessageBox::Show("Please enter all fields", "One or more empty fields",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	try {
		// Database insertion
		Database^ db = gcnew Database();
		String^ sqlQuery = "INSERT INTO dbo.inmates (fullname, age, caseDetails, sentenceLength, cellNumber, behaviourRecords) " +
			"VALUES (@fullname, @age, @caseDetails, @sentenceLength, @cellNumber, @behaviourRecords);";

		array<SqlParameter^>^ parameters = {
			gcnew SqlParameter("@fullname", fullName),
			gcnew SqlParameter("@age", age),
			gcnew SqlParameter("@caseDetails", caseDetails),
			gcnew SqlParameter("@sentenceLength", sentenceLength),
			gcnew SqlParameter("@cellNumber", cellNumber),
			gcnew SqlParameter("@behaviourRecords", behaviourRecord),
		};

		// Execute query
		db->ExecuteQuery(sqlQuery, parameters);
		RefreshDataGridView();
		MessageBox::Show("Inmate information added successfully.",
			"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to add inmate data. Error: " + ex->Message,
			"Registration Failure", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}





private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {

	if (userRole != "Warden") {
		MessageBox::Show("Access Denied: Only Wardens and Admins can update inmate records.",
			"Permission Denied", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}


	String^ fullName = txtBxInmateName->Text;
	String^ age = txtBxInmateAge->Text;
	String^ caseDetails = txtBxInmateCaseDetails->Text;
	String^ sentenceLength = txtBxInmateSentence->Text;
	String^ cellNumber = txtBxInmateCellNumber->Text;
	String^ behaviourRecord = txtBxInmateBehaviour->Text;

	if (fullName->Length == 0 || age->Length == 0
		|| caseDetails->Length == 0 || sentenceLength->Length == 0
		|| cellNumber->Length == 0 || behaviourRecord->Length == 0) {

		MessageBox::Show("Please enter all fields", "On or more empty fields",
			MessageBoxButtons::OK);
		return;
	}
	try {
		Database^ db = gcnew Database();
		String^ sqlQuery = "UPDATE dbo.inmates SET " +
			"age=@age, caseDetails=@caseDetails, sentenceLength=@sentenceLength," +
			"cellNumber=@cellNumber, behaviourRecords=@behaviourRecords WHERE fullname=@fullname;";

		array<SqlParameter^>^ parameters = {
			gcnew SqlParameter("@fullname", fullName),
			gcnew SqlParameter("@age", age),
			gcnew SqlParameter("@caseDetails", caseDetails),
			gcnew SqlParameter("@sentenceLength", sentenceLength),
			gcnew SqlParameter("@cellNumber", cellNumber),
			gcnew SqlParameter("@behaviourRecords", behaviourRecord),
		};

		SqlDataReader^ reader = db->ExecuteQuery(sqlQuery, parameters);
		inmateData = gcnew InmateData;
		inmateData->FullName = fullName;
		inmateData->Age = age;
		inmateData->CaseDetails = caseDetails;
		inmateData->SentenceLength = sentenceLength;
		inmateData->CellNumber = cellNumber;
		inmateData->BehaviourRecord = behaviourRecord;
		RefreshDataGridView();
		MessageBox::Show("Success", "Inmate information updated successfully",
			MessageBoxButtons::OK);


	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to update inmate data", "Update Failure",
			MessageBoxButtons::OK);
	}
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {

	if (userRole != "Warden" ) {
		MessageBox::Show("Access Denied: Only Wardens and Admins can delete inmate records.",
			"Permission Denied", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	String^ fullName = txtBxInmateName->Text;
	String^ age = txtBxInmateAge->Text;
	String^ caseDetails = txtBxInmateCaseDetails->Text;
	String^ sentenceLength = txtBxInmateSentence->Text;
	String^ cellNumber = txtBxInmateCellNumber->Text;
	String^ behaviourRecord = txtBxInmateBehaviour->Text;

	if (fullName->Length == 0) {

		MessageBox::Show("Please enter name", "ERROR",
			MessageBoxButtons::OK);
		return;
	}
	try {
		Database^ db = gcnew Database();
		String^ sqlQuery = "DELETE dbo.inmates WHERE fullname=@fullname";

		array<SqlParameter^>^ parameters = {
			gcnew SqlParameter("@fullname", fullName),
		};

		SqlDataReader^ reader = db->ExecuteQuery(sqlQuery, parameters);

		inmateData = gcnew InmateData;
		inmateData->FullName = fullName;
		RefreshDataGridView();
		MessageBox::Show("Success", "Inmate information deleted successfully",
			MessageBoxButtons::OK);

	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to delete inmate data", "Deletion Failure",
			MessageBoxButtons::OK);
	}
}





private: System::Void dataGridViewInmates_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridViewInmates_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0) { // Ensure the row index is valid
		DataGridViewRow^ row = this->dataGridViewInmates->Rows[e->RowIndex];

		// Populate the text boxes with data from the selected row
		txtBxInmateName->Text = row->Cells["fullname"]->Value->ToString();
		txtBxInmateAge->Text = row->Cells["age"]->Value->ToString();
		txtBxInmateCaseDetails->Text = row->Cells["caseDetails"]->Value->ToString();
		txtBxInmateSentence->Text = row->Cells["sentenceLength"]->Value->ToString();
		txtBxInmateCellNumber->Text = row->Cells["cellNumber"]->Value->ToString();
		txtBxInmateBehaviour->Text = row->Cells["behaviourRecords"]->Value->ToString();
	}
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtBxSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	PerformSearch();
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	PerformSearch();
}
};
}