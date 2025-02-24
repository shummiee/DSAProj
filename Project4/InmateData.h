#pragma once

using namespace System;

public ref class InmateData {
public:
	int Id;
	String^ FullName;
	String^ Age;
	String^ CaseDetails;
	String^ SentenceLength;
	String^ CellNumber;
	DateTime^ BehaviourRecord;
};