#pragma once

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Windows::Forms;


public ref class Database {
private:
    SqlConnection^ conn;

public:
    Database() {
        String^ connString = "Data Source=DESKTOP-KAEPC\\SQLEXPRESS;Initial Catalog=prisonManagementSystem;Persist Security Info=True;User ID=sa;Password=kevin123;";
        conn = gcnew SqlConnection(connString);
    }

    void OpenConnection() {
        if (conn->State == ConnectionState::Closed) {
            conn->Open();
        }
    }

    void CloseConnection() {
        if (conn->State == ConnectionState::Open) {
            conn->Close();
        }
    }

    SqlDataReader^ ExecuteQuery(String^ query, array<SqlParameter^>^ parameters) {
        try {
            OpenConnection();
            SqlCommand^ cmd = gcnew SqlCommand(query, conn);

            for each (SqlParameter ^ param in parameters) {
                cmd->Parameters->Add(param);
            }

            return cmd->ExecuteReader(CommandBehavior::CloseConnection);
        }
        catch (Exception^ ex) {
            MessageBox::Show("Database Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            CloseConnection();
            return nullptr;
        }
    }
};
