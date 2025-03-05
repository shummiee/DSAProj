#pragma once

using namespace System;
using namespace System::Collections::Generic; // Needed for List<T>

public ref class User {
public:
    int Id;
    String^ Name;
    String^ Username;
    String^ Password;
    String^ Phone;
    String^ Address;
    String^ Role;
    String^ Block;
    DateTime^ Schedule;
    List<String^>^ Permissions; // Add this for Role-Based Access Control (RBAC)

    // Constructor
    User() {
        Permissions = gcnew List<String^>(); // Initialize Permissions list
    }
};
