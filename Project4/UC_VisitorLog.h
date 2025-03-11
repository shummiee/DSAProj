#pragma once
#include "VisitorData.h"
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
	/// Summary for UC_VisitorLog
	/// </summary>
	public ref class UC_VisitorLog : public System::Windows::Forms::UserControl
	{
	public:
		UC_VisitorLog(void)
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
		~UC_VisitorLog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridView^ dgvVisitorLog;

	private: System::Windows::Forms::TextBox^ txtSearch;

	private: System::Windows::Forms::Button^ btnSearch;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UC_VisitorLog::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dgvVisitorLog = (gcnew System::Windows::Forms::DataGridView());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvVisitorLog))->BeginInit();
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
			this->pictureBox1->Click += gcnew System::EventHandler(this, &UC_VisitorLog::pictureBox1_Click);
			// 
			// dgvVisitorLog
			// 
			this->dgvVisitorLog->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvVisitorLog->Location = System::Drawing::Point(26, 101);
			this->dgvVisitorLog->Name = L"dgvVisitorLog";
			this->dgvVisitorLog->RowHeadersWidth = 51;
			this->dgvVisitorLog->RowTemplate->Height = 24;
			this->dgvVisitorLog->Size = System::Drawing::Size(545, 353);
			this->dgvVisitorLog->TabIndex = 3;
			// 
			// txtSearch
			// 
			this->txtSearch->Location = System::Drawing::Point(354, 53);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(163, 22);
			this->txtSearch->TabIndex = 4;
			this->txtSearch->TextChanged += gcnew System::EventHandler(this, &UC_VisitorLog::txtSearch_TextChanged);
			// 
			// btnSearch
			// 
			this->btnSearch->BackColor = System::Drawing::Color::Transparent;
			this->btnSearch->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSearch.Image")));
			this->btnSearch->Location = System::Drawing::Point(523, 44);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(40, 40);
			this->btnSearch->TabIndex = 5;
			this->btnSearch->UseVisualStyleBackColor = false;
			this->btnSearch->Click += gcnew System::EventHandler(this, &UC_VisitorLog::btnSearch_Click);
			// 
			// UC_VisitorLog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtSearch);
			this->Controls->Add(this->dgvVisitorLog);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"UC_VisitorLog";
			this->Size = System::Drawing::Size(600, 500);
			this->Load += gcnew System::EventHandler(this, &UC_VisitorLog::UC_VisitorLog_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvVisitorLog))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public:  VisitorData^ visitorData = nullptr;
public: String^ connString = "Data Source=DESKTOP-4FAVDCA\\SQLEXPRESS;Initial Catalog=tryDSA;Persist Security Info=True;User ID=sa;Password=kirkmanuel;";

private:
	void RefreshDataGridView() {
		try {
			SqlConnection^ sqlConn = gcnew SqlConnection(connString);
			sqlConn->Open();

			SqlCommand^ command = gcnew SqlCommand("SELECT * FROM dbo.visitors", sqlConn);
			SqlDataAdapter^ da = gcnew SqlDataAdapter(command);
			DataTable^ dt = gcnew DataTable();
			da->Fill(dt);
			dgvVisitorLog->DataSource = dt;

			sqlConn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error refreshing DataGridView: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private:
		void PerformSearch()
		{
			String^ searchText = txtSearch->Text->Trim();

			if (searchText->Length == 0)
			{
				// If the search box is empty, refresh the DataGridView to show all records
				RefreshDataGridView();
				return;
			}

			try
			{
				Database^ db = gcnew Database();
				String^ sqlQuery = "SELECT * FROM dbo.vistors WHERE fullname LIKE @searchText;";

				array<SqlParameter^>^ parameters = {
					gcnew SqlParameter("@searchText", "%" + searchText + "%")
				};

				SqlDataReader^ reader = db->ExecuteQuery(sqlQuery, parameters);

				DataTable^ dt = gcnew DataTable();
				dt->Load(reader);

				if (dt->Rows->Count > 0)
				{
					dgvVisitorLog->DataSource = dt;
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
private: System::Void UC_VisitorLog_Load(System::Object^ sender, System::EventArgs^ e) {
		btnSearch->Parent = pictureBox1;
		btnSearch->BackColor = System::Drawing::Color::Transparent;
		RefreshDataGridView();
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	PerformSearch();
}
private: System::Void txtSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	PerformSearch();
}
};
}
