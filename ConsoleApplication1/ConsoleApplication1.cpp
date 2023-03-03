#pragma region 4
//// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
////
//#include <iomanip>;
//#include <iostream>
//
//
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "ru");
//    //Вывод пустой строки 
//    cout << "\n";
//    //Ввод числа
//    int number;
//    cin >> number;
//    int number1 = number / 1000;
//    int number2 = number / 100 % 10;
//    int numer3 = number / 10 % 10;
//    int number4 = number % 10;
//
//    //
//        
//    if (number == 1 
//        || number == 21
//        || number == 31
//        || number == 41
//        || number == 51
//        || number == 61
//        || number == 71
//        || number == 81
//        || number == 91)
//    {
//    cout << number << " корова";
//    }
//    else if (number == 2
//        || number % 10 == 3
//        || number == 4
//        || number == 22
//        || number == 23
//        || number == 24
//        || number == 32
//        || number == 33
//        || number == 34
//        || number == 42
//        || number == 43
//        || number == 44
//        || number == 52
//        || number == 53
//        || number == 54
//        || number == 62
//        || number == 63
//        || number == 64
//        || number == 72
//        || number == 73
//        || number == 74
//        || number == 82
//        || number == 83
//        || number == 84
//        || number == 92
//        || number == 93
//        || number == 94)
//    {
//        cout << number << " коровы";
//    }
//    else if (number == 5 
//        || number == 6 
//        || number == 7 
//        || number == 8 
//        || number == 9 
//        || number == 10
//        || number == 11
//        || number == 12
//        || number == 13
//        || number == 14
//        || number == 15 
//        || number == 16
//        || number == 17
//        || number == 18
//        || number == 19
//        || number == 20
//        || number == 25
//        || number == 26
//        || number == 27
//        || number == 28
//        || number == 29
//        || number == 30
//        || number == 35
//        || number == 36
//        || number == 37
//        || number == 38
//        || number == 39
//        || number == 40
//        || number == 45
//        || number == 46
//        || number == 47
//        || number == 48
//        || number == 49
//        || number == 50
//        || number == 55
//        || number == 56
//        || number == 57
//        || number == 58
//        || number == 59
//        || number == 60
//        || number == 65
//        || number == 66
//        || number == 67
//        || number == 68
//        || number == 69
//        || number == 70
//        || number == 75
//        || number == 76
//        || number == 77
//        || number == 78
//        || number == 79
//        || number == 80
//        || number == 85
//        || number == 86
//        || number == 87
//        || number == 88
//        || number == 89
//        || number == 90
//        || number == 95
//        || number == 96
//        || number == 97
//        || number == 98
//        || number == 99
//        || number == 100)
//    {
//        cout << number << " коров";
//}
//  
//}
#pragma endregion


#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;


#pragma region 24

//int findMax(vector<int> f)
//{
//    int max, temp;
//    for (int i = 0; i < f.size(); i++)
//    {
//    for (int j = 0; j < f.size(); j++)
//    {
//    if (f[i] > f[j])
//    {
//    temp = f[i];
//    f[i] = f[j];
//    f[j] = temp;
//    }
//   }
//}
//    max = f[0];
//     return max;
//    }
////int findMin(vector<int> f) 
////{
////    int min, temp;
////    for (int i = 0; i < f.size(); i++)
////    {
////        for (int j = 0; j < f.size(); j++)
////        {
////            if (f[i] < f[j])
////            {
////                temp = f[i];
////                f[i] = f[j];
////                f[j] = temp;
////            }
////        }
////    }
////    return min;
////}
//
//int findMin2(vector<int> f)
//{
//    int min2;
//    min2 = INT_MAX;
//    for (int i = 0; i < f.size(); i++)
//    {
//        if (min2 > f.size())
//        {
//            min2 = f[i];
//        }
//
//    }
//    return min2;
//}
#pragma endregion

#pragma region 25
//int findPrime(vector<int> f)
//    {
//        int k = 0;
//
//        for (int i = 0; i < f.size(); i++)
//        {
//                      
//                if ((f[i] % 2 == 1 && f[i] % 3 == 1) || (f[i] % 2 == 1 && f[i] % 3 == 2))
//                {
//                    cout << " " << f[i]<< endl;
//                    k++;
//                }
//
//            
//        }
//
//        return k;
//    }
//int main()
//{
//    setlocale(LC_ALL, "ru");
//    srand(time(NULL));
//
//    vector<int> f{ 1, 2, 3, 5, 7, 13, 61, 73 };
//    cout << findPrime(f);
//
//}
#pragma endregion
//int main()
//{
//    setlocale(LC_ALL, "ru");
//    srand(time(NULL));

    
    //int max = findMax(f);//максимальное значение массива
    //cout << max << endl;

    //int min2 = findMin2(f);//максимальное значение массива
    //cout << min2 << endl;
#pragma endregion

#pragma region 26
int findPrime(vector<int> f)
{
    int k = 0;

    for (int i = 0; i < f.size(); i++)
    {

        if (f[i] % 2 == 0)
        {
            cout << " " << f[i] << endl;
            k++;
        }


    }

    return k;
}
int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    vector<int> f{ 1, 2, 3, 4, 5, 7, 62, 13, 61, 73 };
    cout << findPrime(f);

}
#pragma endregion
  

 
#pragma region 5
    ////Вывод пустой строки 
    //cout << "\n";

    ////Ввод перого числа
    //int number1;
    //cin >> number1;

    ////Ввод второго числа
    //int number2;
    //cin >> number2;

    ////Вод третьего числа
    //int number3;
    //cin >> number3;

    //if (number1 > number2 && number1 > number3)
    //{
    //    if (number2 > number3)
    //    {
    //        cout << number1 << number2 << number3;
    //    }
    //    else {
    //        cout << number1 << number3 << number2;
    //    }
    //}
    //else if (number2 > number1 && number2 > number3)
    //{
    //    if (number1 > number3)
    //    {
    //        cout << number2 << number1 << number3;
    //    }
    //    else {
    //        cout << number2 << number3 << number1;
    //    }
    //}
    //else if (number3 > number1 && number3 > number2)
    //{
    //    if (number1 > number2)
    //    {
    //        cout << number3 << number1 << number2;
    //    }
    //    else {
    //        cout << number3 << number2 << number1;
    //    }

    //}
#pragma endregion
           //for (int i = 0; i < size; i++)
           //    {
           //        for (int j = 0; j < size; j++)
           //        {
           //            if (values[i] > values[j])
           //            {
           //                temp = values[i];
           //                values[i] = values[j];
           //                values[j] = temp;
           //            }
           //        }
           //    }
#pragma region 6


   ////Вывод пустой строки 
   //cout << "\n";

   ////Ввод числа
   // int number;
   // cin >> number;
   // while (number > 0)
   // {
   //     cout << number % 10 << endl;
   //     number = number / 10;
   // }
#pragma endregion

//    int numer3 = number / 10 % 10;
//    int number4 = number % 10;
#pragma endregion

#pragma region 7
//    //Вывод пустой строки 
//    cout << "\n";
//
//    //Ввод числа
//    int a;
//    cin >> a;
//    for (int i = 1; i <= 9; i++) {
//        if (a % i == 0)
//        {
//            cout << i;
//        }
//    }
//}
#pragma endregion 

#pragma region 8
//    //Вывод пустой строки 
//    cout << "\n";
//    // Ввод числа
//    int number, sum = 0;
//    cin >> number;
//    while (number != 0) {
//        int cfra = number % 10;
//        cout << sum << "+" << cfra << endl;
//        sum = sum + cfra;
//        number = number / 10;
//    }
//}
#pragma endregion

#pragma region 9

//    //Вывод пустой строки 
//    cout << "\n";
//    // Ввод числа
//    int number;
//    int num;
//    cout << "номер";
//    cin >> number;
//    num = 0;
//    while (number != 0) {
//        int cifra = number % 10;
//        number = number / 10;
//        cout << cifra;
//    }
//    return 0;
//}
#pragma endregion

#pragma region 10
//     // Вывод пустой строки
//    cout << "\n";
//    // Ввод числа
//    int number, error = 0;
//    cout << "Пожалуйста, введите число от 1 до 5 \n";    
//    cin >> number;
//    int r = rand() % (5)+1;
//
//    while (number != r)
//    {
//
//        if (number < r)
//        {
//            cout << "Не угадали! Загаданное число больше! \n";
//            cin >> number;
//            error++;
//        }
//        else if (number > r) {
//            cout << "Не угадали! Загаданное число меньше! \n";
//            cin >> number;
//            error++;
//        }
//        
//        if (error >= 5) {
//            cout << "Увы! Игра закончена! Вы использовали все попытки! \n";
//            exit(0);
//        }
//    }
//} 
#pragma endregion

#pragma region 11
//    // Вывод пустой строки
//    cout << "\n";
//    // Ввод числа
//    int firstNumber, lastNumber;
//    int sum = 0;
//    cin >> firstNumber;
//    cin >> lastNumber;
//        
//    for (int i = firstNumber; i <= lastNumber; i++)
//    {
//            sum = sum + i;
//            cout << sum << endl;
//    }
//
//}

#pragma endregion
#pragma region 12

//    //Вывод пустой строки
//    cout << "\n";
//    cout << "Пожалуйста, введите любое число\n";
//    // Ввод числа
//    int number;
//    int sum = 0;
//    cin >> number;
//    
//    while (number != 0) {
//        sum = sum + number;
//        cin >> number;
//    } 
//    cout << sum << endl;
//}

#pragma endregion
#pragma region 13
//    // Вывод пустой строки
//    cout << "\n";
//    cout << "Пожалуйста, введите любые границы диапазона\n";
//    // Ввод числа
//    int firstNumber, lastNumber, temp; 
//    cin >> firstNumber;
//    cin >> lastNumber;
//
//    if (firstNumber > lastNumber)
//    {
//        temp = lastNumber;
//        lastNumber = firstNumber;
//        firstNumber = temp;
//    }
//
//    for (int i = firstNumber; i <= lastNumber; i++)
//    {
//        if (i % 2 == 0 && i % 7 == 0) {
//            cout << i << endl;
//        }
//
//    }
//
//}
#pragma endregion

#pragma region 14

  /*  int number1 = 2 + (rand() % (10 - 2 + 1));
      int number2 = 2 + (rand() % (10 - 2 + 1));


    cout << "Пожалуйста, умножьте  " << number1 << " на " << number2 << "\n";

    int number3;
    cin >> number3;
    if (number1 * number2 == number3) {

        cout << "Ответ верный!\n";
        }
    else {

        cout << "Ответ неверный! \n";
    }

    }*/
#pragma endregion
#pragma region 15

    //string tree = "Tree";
    //int price_tree = 30;
    //int q_tree;
    //
    //string garland = "garland";
    //int price_garland = 20;
    //int q_garland;
    //
    //string clapperboard = "clapperboard";
    //int price_clapperboard = 15;
    //int q_clapperboard;
    //
    //
    //string confetti = "confetti";
    //int price_confetti = 10;
    //int q_confetti;
    //
    //
    //
    //
    //
    //int garland, сhristmasТreeballs, clapperboard, confetti, pricegarland, priceсhristmasТreeballs, price;
#pragma endregion

#pragma region 1.
//    // Вывод пустой строки
//    cout << "\n";
//
//    cout << "Пожалуйста, введите время в секундах\n";
//    // Ввод пользователем времени в секундах
//
//    int seconds, days, hours, minutes;
//
//    cin >> seconds;
//
//    minutes = seconds / 60;
//    hours = seconds / 60 / 60;
//    minutes = minutes % 60;
//    seconds = seconds % 60;
//
//    days = hours / 24;
//
//    hours = hours % 24;
//
//    cout << "Сейчас : " << days << "д.\n";
//    cout << hours << " ч.\n";
//    cout << minutes << " мин.\n";
//    cout << seconds << "сек.\n";
//}
#pragma endregion
#pragma region 2.
    //int vibor, seconds, days, hours, minutes;

    //cout << "Пожалуйста, введите время в секундах\n";
    //// Ввод пользователем времени в секундах
    //cin >> seconds;

    //cout << "Выберите во что Вы хотите их перевести : \n";
    //cout << "Если в минуты введите 1 \n";
    //cout << "Если в часы введите 2 \n";
    //cout << "Если в дни введите 3 \n";

    //cout << "\n";

    //cin >> vibor;

    //if (vibor == 1) {

    //    minutes = seconds / 60;

    //    if (minutes % 10 == 1) {
    //        cout << seconds << "равно : " << minutes << "минутa";
    //    }
    //    else if (minutes % 10 == 2 || minutes % 10 == 3 || minutes % 10 == 4)
    //    {

    //        cout << seconds << "равно : " << minutes << "минуты";
    //    }
    //    else if (minutes % 10 == 5 || minutes % 10 == 6 || minutes % 10 == 7 || minutes % 10 == 8 || minutes % 10 == 9)
    //    {

    //        cout << seconds << "равно : " << minutes << "минут";
    //    }

    //}
    //else if (vibor == 2) {

    //    hours = seconds / 3600;

    //    if (hours % 10 == 1) {

    //        cout << seconds << "равно : " << hours << "час";
    //    }
    //    else if (hours % 10 == 2 || hours % 10 == 3 || hours % 10 == 4)
    //    {
    //        cout << seconds << "равно : " << hours << "часа";
    //    }
    //    else if (hours % 10 == 0 || hours % 10 == 5 || hours % 10 == 6 || hours % 10 == 7 || hours % 10 == 8 || hours % 10 == 9)
    //    {
    //        cout << seconds << "равно : " << hours << "часов";
    //    }
    //}
    //else if (vibor == 3) {

    //        days = seconds / 3600 / 24;

    //        if (days % 10 == 1)
    //        {
    //            cout << seconds << "равно : " << days << "день";
    //        }
    //        else if (days % 10 == 2 || days % 10 == 3 || days % 10 == 4)
    //        {
    //            cout << seconds << "равно : " << days << "дня";
    //        }
    //        else if (days % 10 == 5 || days % 10 == 6 || days % 10 == 7 || days % 10 == 8 || days % 10 == 9 || days % 10 == 0)
    //        {
    //            cout << seconds << "равно : " << days << "дней";
    //        }

    //}
#pragma endregion
#pragma region 3.

//    int ans, max, min, temp;
//
//    // Предлагаем пользователю сделать выбор - вводить числа с клавиатуры или рандомные числа
//    cout << "Пожалуйста, выберите 1, если хотите ввести число с клавиатуры \n";
//    cout << "Пожалуста, выберите 2, если хотите что бы компьютер предложил случайные цифры \n";
//    cin >> ans;
//
//    // Объявление массивов
//    const size_t size = 5;
//    int values[size];
//
//    if (ans == 1)
//    {
//        //Ввод массива 
//        for (int i = 0; i < size; i++)
//        {
//            cin >> values[i];
//        }
//    }
//    else if (ans == 2)
//    {
//        for (int i = 0; i < size; i++)
//        {
//            values[i] = rand() % 100;
//        }
//
//    }
//    //Вывод массива
//    for (int i = 0; i < size; i++)
//    {
//        cout << values[i] << " ";
//    }
//
//    // - по возрастанию
//    for (int i = 0; i < size; i++)
//    {
//        for (int j = 0; j < size; j++)
//        {
//            if (values[i] > values[j])
//            {
//                temp = values[i];
//                values[i] = values[j];
//                values[j] = temp;
//            }
//        }
//    }
//    cout << "\t максимальное : " << values[0] << endl;
//
//    // - по убыванию
//    for (int i = 0; i < size; i++)
//    {
//        for (int j = 0; j < size; j++)
//        {
//            if (values[i] < values[j])
//            {
//                temp = values[i];
//                values[i] = values[j];
//                values[j] = temp;
//            }
//        }
//    }
//    cout << "\t минимальное : " << values[0] << endl;
//}
     
#pragma endregion

