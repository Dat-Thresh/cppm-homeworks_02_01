﻿// cppm-homeworks_02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
void check_month(int numb); //смотрит число и печатает месяц

enum class months {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main()
{
    std::setlocale(LC_ALL, "rus");
    int numb{ -1 };
    do {
        std::cout << "Введите номер месяца: ";
        std::cin >> numb;
        check_month(numb);        
    } while (numb != 0);
    return 0;
}

void check_month(int numb) {
    switch ((months)numb) {
    case months::January: {
        std::cout << "Январь" << std::endl;
        break;
    }
    case months::February: {
        std::cout << "Февраль" << std::endl;
        break;
    }
    case months::March: {
        std::cout << "Март" << std::endl;
        break;
    }
    case months::April: {
        std::cout << "Апрель" << std::endl;
        break;
    }
    case months::May: {
        std::cout << "Май" << std::endl;
        break;
    }
    case months::June: {
        std::cout << "Июнь" << std::endl;
        break;
    }
    case months::July: {
        std::cout << "Июль" << std::endl;
        break;
    }
    case months::August: {
        std::cout << "Август" << std::endl;
        break;
    }
    case months::September: {
        std::cout << "Сентябрь" << std::endl;
        break;
    }
    case months::October: {
        std::cout << "Октябрь" << std::endl;
        break;
    }
    case months::November: {
        std::cout << "Ноябрь" << std::endl;
        break;
    }
    case months::December: {
        std::cout << "Декабрь" << std::endl;
        break;
    }
    };
    return;
};

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
