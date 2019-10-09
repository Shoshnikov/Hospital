#include "Clinic.h"

void Clinic::init()
{
	Base[0] = gcnew Patient();
}

void Clinic::init(array<Patient^>^ newBase)
{
	for (int i = 0; i < newBase->Length; i++)
		newBase[i] = gcnew Patient();
}

Clinic::Clinic()
{
	init();
}

Clinic::~Clinic()
{
	delete[] Base;
}

void Clinic::Add(array < Patient ^ > ^% base, Patient^ newPatient)
{
	if (firstPat) 
	{
		Base[0]->setName(newPatient->getName());
		Base[0]->setPatronymic(newPatient->getPatronymic());
		Base[0]->setLastname(newPatient->getLastname());
		Base[0]->setVaccination(newPatient->getVaccination());
		Base[0]->setAddress(newPatient->getAddress());
		Base[0]->setWorkplace(newPatient->getWorkplace());
		Base[0]->setLastXrayDate(newPatient->getLastXrayDate());
		firstPat = false;
	}
	else
	{
		array <Patient^>^ newBase = gcnew array<Patient^ >(patientsCount + 1);
		init(newBase);
		for (int i = 0; i < Base->Length; i++)
		{
			newBase[i]->setName(Base[i]->getName());
			newBase[i]->setPatronymic(Base[i]->getPatronymic());
			newBase[i]->setLastname(Base[i]->getLastname());
			newBase[i]->setAddress(Base[i]->getAddress());
			newBase[i]->setWorkplace(Base[i]->getWorkplace());
			newBase[i]->setVaccination(Base[i]->getVaccination());
			newBase[i]->setLastXrayDate(Base[i]->getLastXrayDate());
		}
		newBase[patientsCount] = newPatient;
		patientsCount++;
		delete[] Base;
		Base = newBase;
	}
}

Patient^ Clinic::getAtIndex(int index)
{
	return Base[index];
}

array<Patient^>^ Clinic::getBase()
{
	return Base;
}

int Clinic::getPatientsCount()
{
	return patientsCount;
}

String^ Clinic::withoutVaccination()
{
	String^ withoutVaccination = "";
	for (int i = 0; i < Base->Length; i++)
		if (!Base[i]->getVaccination())
			withoutVaccination += Base[i]->getLastname() + " " + Base[i]->getName() + ", ";
	if (withoutVaccination == "")
		withoutVaccination = "Все пациенты имеют прививку от гриппа";
	return withoutVaccination;
}

void Clinic::sortByDate()
{
	Patient^ temp = gcnew Patient();
	for(int i = 1; i < Base->Length; i++)
		for (int j = i; j > 0 && Base[j - 1]->getLastXrayDate() < Base[j]->getLastXrayDate(); j--) 
		{
			temp->setName(Base[j-1]->getName());
			temp->setLastname(Base[j-1]->getLastname());
			temp->setPatronymic(Base[j - 1]->getPatronymic());
			temp->setAddress(Base[j - 1]->getAddress());
			temp->setWorkplace(Base[j - 1]->getWorkplace());
			temp->setVaccination(Base[j - 1]->getVaccination());
			temp->setLastXrayDate(Base[j - 1]->getLastXrayDate());

			Base[j - 1]->setName(Base[j]->getName());
			Base[j - 1]->setLastname(Base[j]->getLastname());
			Base[j - 1]->setPatronymic(Base[j]->getPatronymic());
			Base[j - 1]->setAddress(Base[j]->getAddress());
			Base[j - 1]->setWorkplace(Base[j]->getWorkplace());
			Base[j - 1]->setVaccination(Base[j]->getVaccination());
			Base[j - 1]->setLastXrayDate(Base[j]->getLastXrayDate());

			Base[j]->setName(temp->getName());
			Base[j]->setLastname(temp->getLastname());
			Base[j]->setPatronymic(temp->getPatronymic());
			Base[j]->setAddress(temp->getAddress());
			Base[j]->setWorkplace(temp->getWorkplace());
			Base[j]->setVaccination(temp->getVaccination());
			Base[j]->setLastXrayDate(temp->getLastXrayDate());
		}
}
