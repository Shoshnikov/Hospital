#pragma once
#include "Patient.h"
ref class Clinic
{
private:
	int patientsCount = 1;
	array<Patient^>^ Base = gcnew array<Patient^>(patientsCount);
	void init();
	void init(array<Patient^>^ newBase);
	bool firstPat = true;

public:
	Clinic();
	~Clinic();
	void Add(array < Patient ^ > ^%Base, Patient^ newPatient);
	Patient^ getAtIndex(int index);
	array<Patient^>^ getBase();
	int getPatientsCount();
	String^ withoutVaccination();
	void sortByDate();
};