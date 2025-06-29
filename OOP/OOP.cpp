#include <iostream>
#include <Windows.h>
#include "Cat.h";
using namespace std;

//class Cat {
//private:
//    //властивості, атрибути, поля
//    char* breed;
//    char* name;
//    int age;
//public:
//    //поведінка - функції-члени, методи
//    void AskForFood() {
//        cout << name << ": їсти" << '\n';
//    }
//    // Методи-аксесори
//    // сеттер, модифікатор
//    void SetAge(int value) {
//        if (value < 0) {
//            cout << "Вік не може бути менше нуля. Записуємо стандартне значення";
//            age = 1;
//            return;
//        }
//        age = value;
//    }
//    // геттер, інспектор
//    int GetAge() {
//        return age;
//    }
//
//    void SetBreed(const char* value) {
//        int breed_len = strlen(value) + 1;
//        breed = new char[breed_len];
//        strcpy_s(breed, breed_len, value);
//    }
//    char* GetBreed() {
//        return breed;
//    }
//};

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Cat myCat;
    //myCat.age = 4;
    //myCat.breed = new char[50];
    //strcpy_s(myCat.breed, 50, "Sphynx");
    //myCat.name = new char[50];
    //strcpy_s(myCat.name, 50, "Ratty");

    //cout << myCat.name << '\n' << myCat.breed << '\n' << myCat.age << '\n';
    //myCat.AskForFood();

    //delete[] myCat.breed;
    //delete[] myCat.name;

    myCat.SetAge(-1);

    cout << '\n';

    myCat.SetAge(10);
    cout << myCat.GetAge() << '\n';

    myCat.SetBreed("Sphynx");

    cout << myCat.GetBreed() << '\n';

    delete[] myCat.GetBreed();
}

