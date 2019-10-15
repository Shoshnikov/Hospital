#include "Patient.h"

String^ Patient::FirstToUpper(String^ testString)
{
	testString = testString->Trim();
	String^ newTestString;
	newTestString += testString[0].ToUpper(testString[0]);
	for (int i = 1; i < testString->Length; i++)
		newTestString += testString[i].ToLower(testString[i]);
	return newTestString;
}

Patient::Patient()
{
	name = gcnew String("");
	patronymic = gcnew String("");
	lastname = gcnew String("");
	address = gcnew String("");
	workplace = gcnew String("");
	vaccination = false;
	lastXrayDate = lastXrayDate.Now;
}

Patient::Patient(String^ name, String^ patronymic, String^ lastname, String^ address, String^ workplace, bool vaccination, DateTime lastXrayDate)
{
	setName(name);
	setPatronymic(patronymic);
	setLastname(lastname);
	setAddress(address);
	setWorkplace(workplace);
	setVaccination(vaccination);
	setLastXrayDate(lastXrayDate);
}

Patient::Patient(const Patient^% Pat)
{
	name = Pat->name->Copy(Pat->name);
	patronymic = Pat->patronymic->Copy(Pat->patronymic);
	lastname = Pat->lastname->Copy(Pat->lastname);
	address = Pat->address->Copy(Pat->address);
	workplace = Pat->workplace->Copy(Pat->workplace);
	vaccination = Pat->vaccination;
	lastXrayDate = Pat->lastXrayDate;
}

Patient::~Patient()
{
	
}

String^ Patient::getName()
{
	return name;
}

void Patient::setName(String^ name)
{
	this->name = name->Copy(FirstToUpper(name));
}

String^ Patient::getPatronymic()
{
	return this->patronymic;
}

void Patient::setPatronymic(String^ patronymic)
{
	this->patronymic = patronymic->Copy(FirstToUpper(patronymic));
}

String^ Patient::getLastname()
{
	return lastname;
}

void Patient::setLastname(String^ lastname)
{
	this->lastname = lastname->Copy(FirstToUpper(lastname));
}

String^ Patient::getAddress()
{
	return address;
}

void Patient::setAddress(String^ address)
{
	this->address = address->Copy(FirstToUpper(address));
}

String^ Patient::getWorkplace()
{
	return workplace;
}

void Patient::setWorkplace(String^ workplace)
{
	this->workplace = workplace->Copy(FirstToUpper(workplace));
}

String^ Patient::getVaccinationStr()
{
	if (vaccination)
		return "Есть";
	else
		return "Нет";
}

bool Patient::getVaccination() 
{
	return vaccination;
}

void Patient::setVaccination(bool vaccination)
{
	this->vaccination = vaccination;
}

DateTime Patient::getLastXrayDate()
{
	return lastXrayDate.Date;
}

String^ Patient::getLastXrayDateStr()
{
	String^ s = this->getLastXrayDate().Day.ToString() + "." + this->getLastXrayDate().Month.ToString() + "." + this->getLastXrayDate().Year.ToString();
	return s;
}

void Patient::setLastXrayDate(DateTime lastXrayDate)
{
	this->lastXrayDate = lastXrayDate;
}
