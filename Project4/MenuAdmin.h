#pragma once
#include "UC_Home.h"
#include "UC_Guards.h"
#include "UC_Inmates.h"
#include "UC_VisitorLog.h"
#include "Database.h"
#include "User.h"
#include "MyForm1.h"

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuAdmin
	/// </summary>
	public ref class MenuAdmin : public System::Windows::Forms::Form {
	private:
		User^ user; // Declare user object
	public:
		MenuAdmin(User^ loggedInUser) {
			InitializeComponent();
			this->user = loggedInUser; // Store logged-in user
		};
	

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MenuAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnVisitor;



	private: System::Windows::Forms::Button^ btnGuards;

	private: System::Windows::Forms::Button^ btnInmates;

	private: System::Windows::Forms::Button^ btnHome;
	private: System::Windows::Forms::Panel^ panelUC;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnExit;

	private: System::Void MenuAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
		if (user == nullptr) {
			MessageBox::Show("User data not found. Please log in again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();
			return;
		}

		//  Enforce button restrictions based on permissions
		if (!user->Permissions->Contains("Can Add/Edit Inmates")) {
			btnInmates->Enabled = false;
		}
		if (!user->Permissions->Contains("Can Manage Guards")) {
			btnGuards->Enabled = false;
		}
		if (!user->Permissions->Contains("Can View Logs")) {
			btnVisitor->Enabled = false;
		}
	}





	protected:











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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuAdmin::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnVisitor = (gcnew System::Windows::Forms::Button());
			this->btnGuards = (gcnew System::Windows::Forms::Button());
			this->btnInmates = (gcnew System::Windows::Forms::Button());
			this->btnHome = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelUC = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panelUC->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(156)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->btnVisitor);
			this->panel1->Controls->Add(this->btnGuards);
			this->panel1->Controls->Add(this->btnInmates);
			this->panel1->Controls->Add(this->btnHome);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 500);
			this->panel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(49, 430);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(74, 33);
			this->button1->TabIndex = 6;
			this->button1->Text = L"EXIT";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MenuAdmin::button1_Click);
			// 
			// btnVisitor
			// 
			this->btnVisitor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->btnVisitor->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnVisitor->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVisitor->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnVisitor->Location = System::Drawing::Point(30, 306);
			this->btnVisitor->Name = L"btnVisitor";
			this->btnVisitor->Size = System::Drawing::Size(125, 45);
			this->btnVisitor->TabIndex = 5;
			this->btnVisitor->Text = L"VISITOR\'S LOG";
			this->btnVisitor->UseVisualStyleBackColor = false;
			this->btnVisitor->Click += gcnew System::EventHandler(this, &MenuAdmin::btnVisitor_Click);
			// 
			// btnGuards
			// 
			this->btnGuards->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->btnGuards->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnGuards->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGuards->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnGuards->Location = System::Drawing::Point(30, 245);
			this->btnGuards->Name = L"btnGuards";
			this->btnGuards->Size = System::Drawing::Size(125, 45);
			this->btnGuards->TabIndex = 3;
			this->btnGuards->Text = L"GUARDS";
			this->btnGuards->UseVisualStyleBackColor = false;
			this->btnGuards->Click += gcnew System::EventHandler(this, &MenuAdmin::btnGuards_Click);
			// 
			// btnInmates
			// 
			this->btnInmates->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->btnInmates->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnInmates->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInmates->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnInmates->Location = System::Drawing::Point(30, 183);
			this->btnInmates->Name = L"btnInmates";
			this->btnInmates->Size = System::Drawing::Size(125, 45);
			this->btnInmates->TabIndex = 2;
			this->btnInmates->Text = L"INMATES";
			this->btnInmates->UseVisualStyleBackColor = false;
			this->btnInmates->Click += gcnew System::EventHandler(this, &MenuAdmin::btnInmates_Click);
			// 
			// btnHome
			// 
			this->btnHome->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->btnHome->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnHome->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHome->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnHome->Location = System::Drawing::Point(30, 123);
			this->btnHome->Name = L"btnHome";
			this->btnHome->Size = System::Drawing::Size(125, 45);
			this->btnHome->TabIndex = 1;
			this->btnHome->Text = L"HOME";
			this->btnHome->UseVisualStyleBackColor = false;
			this->btnHome->Click += gcnew System::EventHandler(this, &MenuAdmin::btnHome_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(70, 70);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panelUC
			// 
			this->panelUC->Controls->Add(this->btnExit);
			this->panelUC->Controls->Add(this->pictureBox2);
			this->panelUC->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelUC->Location = System::Drawing::Point(200, 0);
			this->panelUC->Name = L"panelUC";
			this->panelUC->Size = System::Drawing::Size(600, 500);
			this->panelUC->TabIndex = 1;
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->ForeColor = System::Drawing::Color::Navy;
			this->btnExit->Location = System::Drawing::Point(558, 12);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(30, 23);
			this->btnExit->TabIndex = 14;
			this->btnExit->Text = L"X";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MenuAdmin::btnExit_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(600, 500);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// MenuAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->ClientSize = System::Drawing::Size(800, 500);
			this->Controls->Add(this->panelUC);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MenuAdmin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MenuAdmin";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panelUC->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	

				
private: System::Void btnHome_Click(System::Object^ sender, System::EventArgs^ e) {
		Project4::UC_Home^ uc_home = gcnew Project4::UC_Home();
		panelUC->Controls->Clear();
		uc_home->Dock = DockStyle::Fill;
		panelUC->Controls->Add(uc_home);
		uc_home->BringToFront();

	}
private: System::Void btnInmates_Click(System::Object^ sender, System::EventArgs^ e) {
		Project4::UC_Inmates^ uc_inmates = gcnew Project4::UC_Inmates(user); // Pass the user object
		panelUC->Controls->Clear();
		uc_inmates->Dock = DockStyle::Fill;
		panelUC->Controls->Add(uc_inmates);
		uc_inmates->BringToFront();
}
private: System::Void btnGuards_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user->Role == "Warden") { // Only Warden can access
		Project4::UC_Guards^ uc_guards = gcnew Project4::UC_Guards();
		panelUC->Controls->Clear();
		uc_guards->Dock = DockStyle::Fill;
		panelUC->Controls->Add(uc_guards);
		uc_guards->BringToFront();
	}
	else {
		MessageBox::Show("Access Denied: Only Wardens can access this section.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void btnVisitor_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user->Role == "Warden" || user->Role == "Admin") {
	Project4::UC_VisitorLog^ uc_visitor = gcnew Project4::UC_VisitorLog();
	panelUC->Controls->Clear();
	uc_visitor->Dock = DockStyle::Fill;
	panelUC->Controls->Add(uc_visitor);
	uc_visitor->BringToFront();
	}
	else {
		MessageBox::Show("Access Denied: Only Wardens and Admins can access this section.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	

	/*Project4::VisitorForm visitor;
		visitor.ShowDialog();
		this->Hide();*/
}
};	
}
