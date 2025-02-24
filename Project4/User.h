#pragma once

using namespace System;

public ref class User {
public:
	int Id;
	String^ Name;
	String^ Username;
	String^ Password;
	String^ Phone;
	String^ Address;
};

//Kae: Edited the ref class to fit my sql