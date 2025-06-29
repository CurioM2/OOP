#pragma once
class Cat
{
private:
	// властивості, атрибути, поля
	char* breed;
	char* name;
	int age;
public:
	void SetBreed(const char* value);
	void SetName(const char* value);
	void SetAge(int value);

	char* GetBreed() {
		return breed;
	}
	char* GetName() {
		return name;
	}
	int GetAge() {
		return age;
	}

	void MakePurr();
	void AskForFood();
};

