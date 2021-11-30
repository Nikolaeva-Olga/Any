﻿//#include <iostream>
//#include <cstdlib>
//#include <windows.h>
//#include <fstream>
//#include <string>
//#include <stdio.h>
//using namespace std;
//
//int main()
//{
//    setlocale(0, "1251");
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    string file_in, word_in, word_fn;
//    file_in = "base.txt";
//
//    ofstream out(file_in, ios::out | ios::app);
//    ifstream in(file_in.c_str(), ios::in);
// /*   if (!in.good())
//    {
//        clog << "Файл не найден.\n";
//        exit(1);
//    }*/
//    cout << "Введите слово: ";
//    cin >> word_fn;
//
//    while (in >> word_in)
//        if (word_in == word_fn)
//        {
//            cout << "Слово '" << word_in << "' найдено.\n";
//            system("PAUSE");
//            in.close();
//            return 0;
//        }
//    if (word_in != word_fn)
//    {
//        cout << "Слово '" << word_fn << "' не найдено\n";
//        out << word_fn << "\n";
//        cout << "Новое слово '" << word_fn << "' добавлено\n";
//        system("PAUSE");
//        in.close();
//        return 0;
//    }
//    in.close();
//    return 0;
//}
#include<iostream>
#include<fstream>
using namespace std;
class Password
{
public:

    int Entrance()
    {
        string login = "login.txt";
        string password = "password.txt";

        fstream log;
        fstream pass;

        log.open(login, fstream::in | fstream::out | fstream::app);
        pass.open(password, fstream::in | fstream::out | fstream::app);

        if (!log.is_open() && !pass.is_open())
        {
            cout << "Ошибка!" << endl;
        }
        else
        {
            string log_cheker;
            string pass_cheker;

            while (!log.eof()) //Пока не закончатся символы, идем по циклу.
            {
                log_cheker = "";
                log >> log_cheker; //Передаем данные с файла в переменную.
            }
            while (!pass.eof()) //Пока не закончатся символы, идем по циклу.
            {
                pass_cheker = "";
                pass >> pass_cheker; //Передаем данные с файла в переменную.
            }

            string login_correct;
            string pass_correct;

            cout << "Введите свой логин: "; cin >> login_correct;
            cout << endl;
            cout << "Введите свой пароль: "; cin >> pass_correct;

            if (login_correct != log_cheker && pass_correct != pass_cheker)
            {
                cout << "Пароль или логин введен не правильно!" << endl;
            }
            else
            {
                cout << "Данные введены верно!" << endl;
            }
            return 0;
        }
    }
    int Sign_up()
    {
        string login = "login.txt";
        string password = "password.txt";

        fstream log;
        fstream pass;

        log.open(login, fstream::in | fstream::out | fstream::app);
        pass.open(password, fstream::in | fstream::out | fstream::app);

        if (!log.is_open() && !pass.is_open())
        {
            cout << "Ошибка!" << endl;
        }
        else
        {
            string log_cheker;
            string pass_cheker;
            cout << "Введите свой логин: "; cin >> log_cheker;
            cout << endl;
            cout << "Введите свой пароль: "; cin >> pass_cheker;

            log << log_cheker;
            pass << pass_cheker;

            cout << "Регистрация прошла успешно!" << endl;

            return 0;

        }
    }

};
class menu
{
public:

    int RunMenu()
    {
        int punkt;
        cout << "Добро пожаловать!" << endl;
        cout << "1.Вход" << endl;
        cout << "2.Регистрация" << endl;
        cin >> punkt;

        if (punkt != 1 && punkt != 2)
        {
            cout << "Выбран неверный пункт меню!" << endl;
        }
        if (punkt == 1)
        {
            system("cls");
            Password pass;
            pass.Entrance();
        }
        if (punkt == 2)
        {
            system("cls");
            Password pass;
            pass.Sign_up();
        }
        return 0;
    }
};
int main()
{
    setlocale(LC_ALL, "ru");

    menu Menu;

    Menu.RunMenu();

    return 0;
}