/*1. Користувач вводить з клавіатури час у секундах. Перевести це значення у дні,
години, хвилини та секунди.
*/

//Рішення

#include <iostream>
using namespace std;

int main() {
    int userSeconds;
    cout << "Please enter quantity seconds: ";
    cin >> userSeconds;

    int days = userSeconds / 86400;
    int hours = (userSeconds % 86400) / 3600;
    int minutes = (userSeconds % 3600) / 60;
    int seconds = userSeconds % 60;

    cout << days << " days, "
        << hours << " hours, "
        << minutes << " minutes, "
        << seconds << " seconds" << endl;

    return 0;
}


/*2Виконати завдання, обернене до попереднього завдання.
*/
//Рішення

#include <iostream>
using namespace std;

int main() {
    int Inputdays;
    cout << "Please enter quantity of days: ";
    cin >> Inputdays;

    int Inputhours;
    cout << "Please enter quantity of hours: ";
    cin >> Inputhours;

    int Inputminutes;
    cout << "Please enter quantity of minutes: ";
    cin >> Inputminutes;

    int Inputseconds;
    cout << "Please enter quantity of seconds: ";
    cin >> Inputseconds;

    int All;
    All = (Inputdays * 86400) + (Inputhours * 3600) + (Inputminutes * 60) + Inputseconds;

    cout << "Total seconds: " << All << endl;

    return 0;
}

/*3*Користувач вводить з клавіатури відстань до аеропорту та час, за який потрібно доїхати. Обчислити швидкість, з якою треба їхати.
*/

//рішення

#include <iostream>
using namespace std;
int main() {
    int InputDistance;
    cout << "Please enter distance to the airport(in kilometres): ";
    cin >> InputDistance;
    int InputTime;
    cout << "Please enter time it takes to get there(in hours): ";
    cin >> InputTime;

    int Speed;
    Speed = InputDistance / InputTime;
    cout << "Speed: " << Speed << endl;
    return 0;
}

/*4. Користувач вводить з клавіатури час початку та час завершення телефонної розмови (години, хвилини та секунди). Порахувати вартість розмови, якщо вартість хвилини становить 30 копійок.*/

//рішення 

#include <iostream>
using namespace std;
int main() {
    int InputStarthour;
    cout << "Enter the call start time: ";
    cin >> InputStarthour;

    int InputStartminutes;
    cout << "Enter the call start minutes: ";
    cin >> InputStartminutes;

    int InputStartSeconds;
    cout << "Enter the call start seconds: ";
    cin >> InputStartSeconds;

    int InputEndhour;
    cout << "Enter the call end time: ";
    cin >> InputEndhour;

    int InputEndminutes;
    cout << "Enter the call end minutes: ";
    cin >> InputEndminutes;

    int InputEndseconds;
    cout << "Enter the call end seconds: ";
    cin >> InputEndseconds;

    int StartTimeInSeconds = InputStarthour * 3600 + InputStartminutes * 60 + InputStartSeconds;
    int EndTimeInSeconds = InputEndhour * 3600 + InputEndminutes * 60 + InputEndseconds;

    int minusInSeconds = EndTimeInSeconds - StartTimeInSeconds;

    int minusinMinutes = (minusInSeconds + 59) / 60;

    double cost = minusinMinutes * 0.30;

    cout << "Duration: " << minusinMinutes << endl;
    cout << "Cost: " << cost << "UAH" << endl;

    return 0;

}

/*5Користувач вводить з клавіатури суму в гривнях і курсі долара, євро і рубля. Почитайте, скільки користувач зможе купити доларів, євро і рублів. При цій кількості доларів, євро і рублей повинні бути цілими. Додатково вивести на екран сдачу в гривнях. на пайтон
*/

//рішення

#include <iostream>
using namespace std;

int main() {
    double UAH, USDrate, EURrate, RUBrate;

    cout << "Enter sum in UAH: ";
    cin >> UAH;

    cout << "Enter USD rate: ";
    cin >> USDrate;

    cout << "Enter EUR rate: ";
    cin >> EURrate;

    cout << "Enter RUB rate: ";
    cin >> RUBrate;

    int dollars = UAH / USDrate;
    int euro = UAH / EURrate;
    int rub = UAH / RUBrate;

    double change = UAH - (dollars * USDrate + euro * EURrate + rub * RUBrate);


    cout << "You can buy: " << dollars << " dollars, " << euro << " euros, " << rub << " rubles" << endl;
    cout << "Change in UAH: " << change << endl;

    return 0;
}

/*6. Користувач вводить з клавіатури час у секундах, який минув з початку робочого дня. Порахувати, скільки годин йому залишилося сидіти на роботі, якщо робочий день становить 8 годин.*/

//рішення

#include <iostream>
using namespace std;

int main() {
    int timeInseconds;
    cout << "Enter the number of seconds that have passed since the start of the workday: ";
    cin >> timeInseconds;

    int totalWorkSeconds = 8 * 60 * 60;
    int secondsLeft = totalWorkSeconds - timeInseconds;

    int hourLeft = secondsLeft / 3600;

    cout << "Whole hours left to work: " << hourLeft << endl;

    return 0;
}

/*7. Пользователь вводит с клавиатуры стоимость одного ноутбука, их количество и процент скидки. Посчитать общую сумму заказа.
*/

//рішення

#include <iostream>
using namespace std;

int main() {
    int costOneLaptop;
    cout << "Enter the cost of one laptop: ";
    cin >> costOneLaptop;

    int quantityLaptops;
    cout << "Enter the number of laptops";
    cin >> quantityLaptops;

    int DiscounPercentage;
    cout << "Enter the discount percentage";
    cin >> DiscounPercentage;

    int totalCostWithoutDiscount = costOneLaptop * quantityLaptops;

    int discountAmount = totalCostWithoutDiscount * DiscounPercentage / 100;

    int totalCostWithDiscount = totalCostWithoutDiscount - discountAmount;

    cout << "The total cost after discount is: " << totalCostWithDiscount << endl;

    return 0;
}

/*8. 8. Зарплата менеджера составляет 100$+5% от продаж. Пользователь вводит с клавиатуры общую сумму сделок менеджера за месяц. Посчитать итоговую зарплату менеджера.
*/

//рішення 

#include <iostream>
using namespace std;

int main() {
    const double baseSalary = 100.0;

    double salesAmount;
    cout << "Enter the total sales amount for the month: ";
    cin >> salesAmount;

    double bonus = salesAmount * 0.05;

    double totalSalary = baseSalary + bonus;

    cout << "Total salary of the manager: $" << totalSalary << endl;

    return 0;
}


/*9.Пользователь вводит с клавиатуры размер одного фильма в гигабайтах и скорость Интернет-соединения в битах в секунду. Определить, за какое время (часы, минуты и секунды) скачается фильм.
*/

//рішення 

#include <iostream>
using namespace std;

int main() {
    int SizeOfMovieInGigabytes;
    cout << "Enter the size of one movie in gigabytes: ";
    cin >> SizeOfMovieInGigabytes;

    int ConnectionSpeed;
    cout << "Enter the Internet connection speed in bits per second: ";
    cin >> ConnectionSpeed;

    long long movieSizeBits = (long long)SizeOfMovieInGigabytes * 8589934592;
    long long totalSeconds = movieSizeBits / ConnectionSpeed;


    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;


    cout << "Download time: "
        << hours << " hour(s), "
        << minutes << " minute(s), "
        << seconds << " second(s)" << endl;

    return 0;
}


/*10. Пользователь вводит с клавиатуры объем флешки в гигабайтах. Посчитать, сколько на нее поместится фильмов размером 760 Мбайт.*/

//рішення

#include <iostream>
using namespace std;

int main() {
    int Flashdrive;
    cout << "Enter the flash drive capacity in gigabytes: ";
    cin >> Flashdrive;

    int flashinMB = Flashdrive * 1024;

    int movieSizeMB = 760;

    int numberOfMovies = flashinMB / movieSizeMB;

    cout << "Number of movies that fit: " << numberOfMovies << endl;

    return 0;
}


/*11. Пользователь вводит с клавиатуры дробное число. Округлить его до двух знаков после запятой и вывести на экран. */

//рішення

#include <iostream>
using namespace std;

int main() {
    float number;
    cout << "Enter the float number: ";
    cin >> number;

    number = (int)(number * 100 + 0.5) / 100.0;

    cout << "Rounded number: " << number << endl;


    return 0;
}


/*12. Пользователь вводит с клавиатуры количество студентов, сдавших экзамен, и количество «должников».
Посчитать, сколько процентов составляют «должники» от общего числа студентов, а также, сколько процентов составляют студенты, сдавшие экзамен. */

//рішення

#include <iostream>
using namespace std;

int main() {
    int PassExamStudents;
    cout << "Enter the number of students who passed the exam: ";
    cin >> PassExamStudents;

    int DebtorsStudents;
    cout << "Enter the number of student debtors: ";
    cin >> DebtorsStudents;


    int totalStudents = PassExamStudents + DebtorsStudents;


    float percentPassed = (PassExamStudents * 100.0) / totalStudents;
    float percentDebtors = (DebtorsStudents * 100.0) / totalStudents;


    cout << "Passed students: " << percentPassed << "%\n";
    cout << "Debtor students: " << percentDebtors << "%" << endl;

    return 0;
}


/*13. Пользователь вводит с клавиатуры время в секундах, прошедшее с начала дня. Определить, сколько времени (часов, минут и секунд) осталось до полуночи.
*/

//рішення

#include <iostream>
using namespace std;

int main() {
    int TimeInSeconds;
    cout << "Enter the time in seconds since the beginning of the day";
    cin >> TimeInSeconds;

    int TotalSecondsInDay = 24 * 60 * 60;

    int SecondsToMidnight = TotalSecondsInDay - TimeInSeconds;

    int hours = SecondsToMidnight / 3600;
    int minutes = (SecondsToMidnight % 3600) / 60;
    int seconds = SecondsToMidnight % 60;

    cout << "Time remaining until midnight: "
        << hours << " hours, "
        << minutes << " minutes, "
        << seconds << " seconds." << endl;

    return 0;
}


/*14. Пользователь вводит с клавиатуры объем одного фильма в гигабайтах.
Посчитать, сколько дискет понадобится для переноса фильма на другой компьютер (размер дискеты считать равным 1.44 Мбайт).
*/

//рішення

#include <iostream>
using namespace std;

int main() {
    double FilmSizeGB;
    cout << "Enter the volume of one movie in gigabytes: ";
    cin >> FilmSizeGB;


    int FilmSizeMB = FilmSizeGB * 1024;

    const int DisketteSizeKB = 1474;
    int FilmSizeKB = FilmSizeMB * 1024;


    int diskettes = (FilmSizeKB + DisketteSizeKB - 1) / DisketteSizeKB;

    cout << "Number of diskettes required: " << diskettes << endl;

    return 0;
}



/*15. Пользователь вводит с клавиатуры сумму в гривнах, срок вклада в месяцах и процентную ставку за год. Посчитать, сколько денег будет у пользователя. */

//рішення

#include <iostream>
using namespace std;

int main() {
    int AmountInUAH;
    cout << "Enter the amount in hryvnia: ";
    cin >> AmountInUAH;

    int depositTerm;
    cout << "Enter the deposit term in months: ";
    cin >> depositTerm;

    int interestRate;
    cout << "Enter the interest rate per year: ";
    cin >> interestRate;

    float monthlyRate = interestRate / 12.0;

    float totalInterest = (AmountInUAH * monthlyRate * depositTerm) / 100;

    float totalAmount = AmountInUAH + totalInterest;

    cout << "You will have: " << totalAmount << " UAH" << endl;

    return 0;
}





















