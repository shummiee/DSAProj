#pragma once
#include "User.h"
#include "MenuAdmin.h"
#include "Database.h"
#include "MyForm1.h"





namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LOGIN
	/// </summary>
	public ref class LOGIN : public System::Windows::Forms::Form
	{
	public:
		LOGIN(void)
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
		~LOGIN()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtPass;









	private: System::Windows::Forms::Label^ lblName;


	private: System::Windows::Forms::Label^ lblPass;
	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::CheckBox^ cbShowPass;











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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LOGIN::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtPass = (gcnew System::Windows::Forms::TextBox());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblPass = (gcnew System::Windows::Forms::Label());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->cbShowPass = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(800, 501);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// txtName
			// 
			this->txtName->Cursor = System::Windows::Forms::Cursors::Hand;
			this->txtName->Location = System::Drawing::Point(468, 187);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(235, 22);
			this->txtName->TabIndex = 2;
			// 
			// txtPass
			// 
			this->txtPass->Cursor = System::Windows::Forms::Cursors::Hand;
			this->txtPass->Location = System::Drawing::Point(468, 273);
			this->txtPass->Name = L"txtPass";
			this->txtPass->Size = System::Drawing::Size(235, 22);
			this->txtPass->TabIndex = 5;
			this->txtPass->UseSystemPasswordChar = true;
			this->txtPass->TextChanged += gcnew System::EventHandler(this, &LOGIN::txtPassword_TextChanged);
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->BackColor = System::Drawing::Color::Transparent;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->ForeColor = System::Drawing::Color::White;
			this->lblName->Location = System::Drawing::Point(444, 145);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(68, 25);
			this->lblName->TabIndex = 7;
			this->lblName->Text = L"Name:";
			// 
			// lblPass
			// 
			this->lblPass->AutoSize = true;
			this->lblPass->BackColor = System::Drawing::Color::Transparent;
			this->lblPass->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPass->ForeColor = System::Drawing::Color::White;
			this->lblPass->Location = System::Drawing::Point(444, 232);
			this->lblPass->Name = L"lblPass";
			this->lblPass->Size = System::Drawing::Size(101, 25);
			this->lblPass->TabIndex = 10;
			this->lblPass->Text = L"Password:";
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)));
			this->btnLogin->FlatAppearance->BorderSize = 0;
			this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->ForeColor = System::Drawing::Color::Transparent;
			this->btnLogin->Location = System::Drawing::Point(446, 364);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(99, 35);
			this->btnLogin->TabIndex = 11;
			this->btnLogin->Text = L"LOGIN";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &LOGIN::btnLogin_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)));
			this->btnCancel->FlatAppearance->BorderSize = 0;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::White;
			this->btnCancel->Location = System::Drawing::Point(604, 364);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(99, 35);
			this->btnCancel->TabIndex = 12;
			this->btnCancel->Text = L"CANCEL";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &LOGIN::btnCancel_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->ForeColor = System::Drawing::Color::Navy;
			this->btnExit->Location = System::Drawing::Point(740, 12);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(30, 23);
			this->btnExit->TabIndex = 13;
			this->btnExit->Text = L"X";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &LOGIN::btnExit_Click);
			// 
			// cbShowPass
			// 
			this->cbShowPass->AutoSize = true;
			this->cbShowPass->BackColor = System::Drawing::Color::Transparent;
			this->cbShowPass->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbShowPass->ForeColor = System::Drawing::Color::White;
			this->cbShowPass->Location = System::Drawing::Point(586, 301);
			this->cbShowPass->Name = L"cbShowPass";
			this->cbShowPass->Size = System::Drawing::Size(117, 21);
			this->cbShowPass->TabIndex = 14;
			this->cbShowPass->Text = L"Show Password";
			this->cbShowPass->UseVisualStyleBackColor = false;
			this->cbShowPass->CheckedChanged += gcnew System::EventHandler(this, &LOGIN::cbShowPass_CheckedChanged);
			// 
			// LOGIN
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 500);
			this->Controls->Add(this->cbShowPass);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->lblPass);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->txtPass);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LOGIN";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LOGIN";
			this->Load += gcnew System::EventHandler(this, &LOGIN::LOGIN_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void LOGIN_Load(System::Object^ sender, System::EventArgs^ e) {
	lblName->Parent = pictureBox1;
	lblName->BackColor = System::Drawing::Color::Transparent;
	lblPass->Parent = pictureBox1;
	lblPass->BackColor = System::Drawing::Color::Transparent;
	cbShowPass->Parent = pictureBox1;
	cbShowPass->BackColor = System::Drawing::Color::Transparent;
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
public: User^ user = nullptr;

	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = this->txtName->Text;
		String^ password = this->txtPass->Text;

		// Check if username or password is empty
		if (username->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter your username and password.", "Login Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		try {
			// Create database connection
			Database^ db = gcnew Database();

			// Correct SQL Query to retrieve only role-based access
			String^ sqlQuery = "SELECT id, name, role FROM dbo.users WHERE name = @name AND password = @password;";

			array<SqlParameter^>^ parameters = {
				gcnew SqlParameter("@name", username),
				gcnew SqlParameter("@password", password)
			};

			SqlDataReader^ reader = db->ExecuteQuery(sqlQuery, parameters);

			if (reader != nullptr && reader->Read()) {
				int userId = reader->GetInt32(0);
				String^ name = reader->GetString(1);
				String^ role = reader->GetString(2); // Fetch user role

				// Store user data in an object
				user = gcnew User;
				user->Id = userId;
				user->Name = name;
				user->Role = role;  // Store only role (no need for permission list)

				// Redirect to the main menu (MenuAdmin) based on role
				this->Hide();
				Project4::MenuAdmin^ menuadmin = gcnew Project4::MenuAdmin(user);
				menuadmin->ShowDialog();
			}
			else {
				MessageBox::Show("Incorrect username or password.", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			if (reader != nullptr) {
				reader->Close();
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Database connection failed: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	
	}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	Project4::MyForm1 menu;
	menu.ShowDialog();
	this->Hide();
}
private: System::Void txtPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cbShowPass_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cbShowPass->Checked == true)
	{
		txtPass->UseSystemPasswordChar = false;
	}
	else
	{
		txtPass->UseSystemPasswordChar = true;
	}
}
};
}
