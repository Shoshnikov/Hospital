#pragma once
using namespace System;
ref class Patient
{
private:
	String^ name;
	String^ patronymic;
	String^ lastname;
	String^ address;
	String^ workplace;
	bool vaccination;
	DateTime lastXrayDate;


	String^ FirstToUpper(String^ testString);

public:
	Patient();

	Patient(String^ name, String^ patronymic, String^ lastname, String^ address, String^ workplace, bool vaccination, DateTime lastXrayDate);

	Patient(const Patient^% Pat);

	~Patient();

	String^ getName();
	void setName(String^ name);

	String^ getPatronymic();
	void setPatronymic(String^ patronymic);

	String^ getLastname();
	void setLastname(String^ lastname);

	String^ getAddress();
	void setAddress(String^ address);

	String^ getWorkplace();
	void setWorkplace(String^ workplace);

	String^ getVaccinationStr();
	bool getVaccination();
	void setVaccination(bool vaccination);

	DateTime getLastXrayDate();
	String^ getLastXrayDateStr();
	void setLastXrayDate(DateTime lastXrayDate);
};

