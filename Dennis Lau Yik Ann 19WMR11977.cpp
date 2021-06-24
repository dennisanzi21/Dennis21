#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
using namespace std;

//Functions/Modules Declaration//
void	login_section();
void	company_logo();
void	function_menu(int num_ctg_1, int num_ctg_2, int num_ctg_3, int num_ctg_4, int num_movie1, int num_movie2, int num_movie3, int num_movie4, int num_movie5, int sales, string worker_id);
void	admin_section(int num_ctg_1, int num_ctg_2, int num_ctg_3, int num_ctg_4, int num_movie1, int num_movie2, int num_movie3, int num_movie4, int num_movie5, int sales, string worker_id);
void	booking_section(int num_ctg_1, int num_ctg_2, int num_ctg_3, int num_ctg_4, int num_movie1, int num_movie2, int num_movie3, int num_movie4, int num_movie5, int sales, string worker_id);
string  movie_selection(string movie_available_1, string movie_available_2, string movie_available_3, string movie_available_4, string movie_available_5);
string  date_selection(string dates_available_1, string dates_available_2, string dates_available_3, string dates_available_4, string dates_available_5);
string  time_selection(string times_available_1, string times_available_2, string times_available_3, string times_available_4, string times_available_5);
string  customer_category(string buyer_category_1, string buyer_category_2, string buyer_category_3, string buyer_category_4);
string  class_selection(string class_available_1, string class_available_2, string class_available_3);
string	seat_assign(string class_selected, string class_available_1, string class_available_2, string class_available_3);
string  payment_section(string buyer_category_1, string buyer_category_2, string buyer_category_3, string buyer_category_4,
	string buyer_category, string class_available_1, string class_available_2, string class_available_3, string class_selected,
	string price_c0_1, string price_c0_2, string price_c0_3, string price_c0_4,
	string price_c1_1, string price_c1_2, string price_c1_3, string price_c1_4,
	string price_c2_1, string price_c2_2, string price_c2_3, string price_c2_4);
void	ticket_printing(string movie_selected, string date_selected, string time_selected, string class_selected, string seat_no, string price, string buyer_category, string hall);
void	sales_report(string buyer_category_1, string buyer_category_2, string buyer_category_3, string buyer_category_4,
	string movie_available_1, string movie_available_2, string movie_available_3, string movie_available_4, string movie_available_5,
	int num_movie5, int  num_movie4, int  num_movie3, int  num_movie2, int  num_movie1,
	int  num_ctg_1, int  num_ctg_2, int  num_ctg_3, int  num_ctg_4, int sales, string worker_id);
void	terminate_program();


//Program Start//
int main()
{
	login_section();
	terminate_program();
	system("pause");
	return 0;
}

//Functions/Modules Definition//
void login_section()
{
	company_logo();
	string worker_id;
	bool id = false;
	cout << "Please enter your ID(such as Alvin, Dennis......): ";
	while (id == false)
	{
		cout << endl;
		cin >> worker_id;
		if (worker_id == "Dennis")
		{
			cout << "Welcome back to your program, Dennis~";
			cout << endl;
			id = true;
			break;
		}
		else if (worker_id == "Alvin")
		{
			cout << "Welcome to Tar Cinemas Ticket System~";
			cout << endl;
			id = true;
			break;
		}
		else
		{
			cout << "Invalid Worker ID, please try again......";
			cout << endl;
		}
	}
	system("pause");
	int	   num_ctg_1, num_ctg_2, num_ctg_3, num_ctg_4, num_movie1, num_movie2, num_movie3, num_movie4, num_movie5, sales;
	num_ctg_1 = 0;
	num_ctg_2 = 0;
	num_ctg_3 = 0;
	num_ctg_4 = 0;
	num_movie1 = 0;
	num_movie2 = 0;
	num_movie3 = 0;
	num_movie4 = 0;
	num_movie5 = 0;
	sales = 0;
	function_menu(num_ctg_1, num_ctg_2, num_ctg_3, num_ctg_4, num_movie1, num_movie2, num_movie3, num_movie4, num_movie5, sales, worker_id);
}

void company_logo()
{
	system("CLS");
	//Tar Cinemas Ticket System Logo//
	cout << "***************************************************************************************" << endl;
	cout << "  _______              _____   _                                                       " << endl;
	cout << " |__   __|            / ____| (_)                                                      " << endl;
	cout << "    | |  __ _  _ __  | |       _  _ __    ___  _ __ ___    __ _  ___                   " << endl;
	cout << "    | | / _` || '__| | |      | || '_ \\  / _ \\| '_ ` _ \\  / _` |/ __|               " << endl;
	cout << "    | || (_| || |    | |____  | || | | ||  __/| | | | | || (_| |\\__ \\                " << endl;
	cout << "    |_| \\__,_||_|     \\_____| |_||_| |_| \\___||_| |_| |_| \\__,_||___/              " << endl;
	cout << " ________           _          _      _____              _                             " << endl;
	cout << " |__   __|(_)      | |        | |    / ____|            | |                            " << endl;
	cout << "    | |    _   ___ | | __ ___ | |_  | (___   _   _  ___ | |_   ___  _ __ ___           " << endl;
	cout << "    | |   | | / __|| |/ // _ \\| __|  \\___ \\ | | | |/ __|| __| / _ \\| '_ ` _ \\     " << endl;
	cout << "    | |   | || (__ |   <|  __/| |_   ____) || |_| |\\__ \\| |_ |  __/| | | | | |       " << endl;
	cout << "    |_|   |_| \\___||_|\\_\\\\___| \\__| |_____/  \\__, ||___/ \\__| \\___||_| |_| |_| " << endl;
	cout << "                                              __/ |                                    " << endl;
	cout << "                                             |___/                                     " << endl;
	cout << "                                                                   TAR Cinemax Sdn Bhd " << endl;
	cout << "***************************************************************************************" << endl;
	cout << "-------------------------Welcome to Tar Cinemas Ticket System!-------------------------" << endl;
}

void function_menu(int num_ctg_1, int num_ctg_2, int num_ctg_3, int num_ctg_4, int num_movie1, int num_movie2, int num_movie3, int num_movie4, int num_movie5, int sales, string worker_id)
{
	company_logo();
	cout << "Menu List " << endl;
	cout << "(A) Go to Admin function " << endl;
	cout << "(B) Go to Book  section  " << endl;
	cout << "(E) Exit				  " << endl;
	cout << "Please pick a function:  " << endl;
	string user_choice;
	bool choice = false;
	do
	{
		cin >> user_choice;
		if (user_choice.length() != 1)
		{
			cout << "invalid input......" << endl;
			choice = false;
		}
		else
		{
			char function_code = toupper(user_choice[0]);
			switch (function_code)
			{
			case 'A':
			{
				system("CLS");
				admin_section(num_ctg_1, num_ctg_2, num_ctg_3, num_ctg_4, num_movie1, num_movie2, num_movie3, num_movie4, num_movie5, sales, worker_id);
				choice = false;
				break;
			}
			case 'B':
			{
				system("CLS");

				booking_section(num_ctg_1, num_ctg_2, num_ctg_3, num_ctg_4, num_movie1, num_movie2, num_movie3, num_movie4, num_movie5, sales, worker_id);
				choice = false;
				break;
			}
			case 'E':
			{
				system("CLS");
				choice = true;
				break;
			}
			default:
			{
				cout << "Invalid input......" << endl;
				choice = false;
			}
			}
		}
	} while (choice == false);
	cout << endl;
}

void admin_section(int num_ctg_1, int num_ctg_2, int num_ctg_3, int num_ctg_4, int num_movie1, int num_movie2, int num_movie3, int num_movie4, int num_movie5, int sales, string worker_id)
{
	company_logo();
	//------------------------------------------------Variables Section----------------------------------------------//
	//company preset variables//
	string movie_available_1, movie_available_2, movie_available_3, movie_available_4, movie_available_5;
	string dates_available_1, dates_available_2, dates_available_3, dates_available_4, dates_available_5;
	string times_available_1, times_available_2, times_available_3, times_available_4, times_available_5;
	string class_available_1, class_available_2, class_available_3;
	string class_seat_1, class_seat_2, class_seat_3;
	string buyer_category_1, buyer_category_2, buyer_category_3, buyer_category_4;
	string price_c0_1, price_c0_2, price_c0_3, price_c0_4;
	string price_c1_1, price_c1_2, price_c1_3, price_c1_4;
	string price_c2_1, price_c2_2, price_c2_3, price_c2_4;

	//-----------------------------Default Defined company condition variables/constants----------------------//
	//Movies available this week//
	movie_available_1 = "Avengers Endgame";
	movie_available_2 = "Toy Story 4";
	movie_available_3 = "Spider-man: Far from home";
	movie_available_4 = "The Lion King";
	movie_available_5 = "Frozen 2";
	cout << "Movies available:		  " << endl;
	cout << " --------------------------------------------------------------------------------------------------" << endl;
	cout << "|" << "1      " << left << setw(90) << movie_available_1 << "|" << endl;
	cout << "|" << "2      " << left << setw(90) << movie_available_2 << "|" << endl;
	cout << "|" << "3      " << left << setw(90) << movie_available_3 << "|" << endl;
	cout << "|" << "4      " << left << setw(90) << movie_available_4 << "|" << endl;
	cout << "|" << "5      " << left << setw(90) << movie_available_5 << "|" << endl;
	cout << " --------------------------------------------------------------------------------------------------" << endl;
	//Dates available this week//
	dates_available_1 = "Friday";
	dates_available_2 = "Saturday";
	dates_available_3 = "Sunday";
	dates_available_4 = "Monday";
	dates_available_5 = "Tuesday";
	cout << "Dates  available: " << endl;
	cout << " --------------------------------------------------------------------------------------------------" << endl;
	cout << "|" << "1      " << left << setw(90) << dates_available_1 << "|" << endl;
	cout << "|" << "2      " << left << setw(90) << dates_available_2 << "|" << endl;
	cout << "|" << "3      " << left << setw(90) << dates_available_3 << "|" << endl;
	cout << "|" << "4      " << left << setw(90) << dates_available_4 << "|" << endl;
	cout << "|" << "5      " << left << setw(90) << dates_available_5 << "|" << endl;
	cout << " --------------------------------------------------------------------------------------------------" << endl;
	//Times available that day//
	times_available_1 = "10:00";
	times_available_2 = "11:00";
	times_available_3 = "14:00";
	times_available_4 = "15:00";
	times_available_5 = "18:00";
	cout << "Times  available: " << endl;
	cout << " --------------------------------------------------------------------------------------------------" << endl;
	cout << "|" << "1      " << left << setw(90) << times_available_1 << "|" << endl;
	cout << "|" << "2      " << left << setw(90) << times_available_2 << "|" << endl;
	cout << "|" << "3      " << left << setw(90) << times_available_3 << "|" << endl;
	cout << "|" << "4      " << left << setw(90) << times_available_4 << "|" << endl;
	cout << "|" << "5      " << left << setw(90) << times_available_5 << "|" << endl;
	cout << " --------------------------------------------------------------------------------------------------" << endl;
	//-----------------------------Fixed Defined condition variables/constants----------
	//Class available that day//
	class_available_1 = "Class 0(VIP)";
	class_seat_1 = "15";
	class_available_2 = "Class 1(Front)";
	class_seat_2 = "15";
	class_available_3 = "Class 2(Back)";
	class_seat_3 = "30";
	cout << "Class and Seat available:" << endl;
	cout << " --------------------------------------------------------------------------------------------------" << endl;
	cout << "|" << left << setw(45) << class_available_1 << class_seat_1 << right << setw(51) << "|" << endl;
	cout << "|" << left << setw(45) << class_available_2 << class_seat_2 << right << setw(51) << "|" << endl;
	cout << "|" << left << setw(45) << class_available_3 << class_seat_3 << right << setw(51) << "|" << endl;
	cout << " --------------------------------------------------------------------------------------------------" << endl;
	//Categories of tickets//
	buyer_category_1 = "Adult";
	buyer_category_2 = "Child(<12 years old)";
	buyer_category_3 = "Student(must show registration card)";
	buyer_category_4 = "Special group(OKU and more....)";
	//Price of tickets based on buyers categoory and class in RM//
	//Class 0//
	price_c0_1 = "20";
	price_c0_2 = "10";
	price_c0_3 = "12";
	price_c0_4 = "0";
	//Class 1//
	price_c1_1 = "16";
	price_c1_2 = "6";
	price_c1_3 = "8";
	price_c1_4 = "0";
	//Class 2//
	price_c2_1 = "18";
	price_c2_2 = "8";
	price_c2_3 = "10";
	price_c2_4 = "0";
	cout << "Ticket Price(RM): " << endl;
	cout << " --------------------------------------------------------------------------------------------------" << endl;
	cout << "|" << left << setw(40) << "" << left << setw(20) << class_available_1 << left << setw(20) << class_available_2 << left << setw(17) << class_available_2 << "|" << endl;
	cout << "|" << left << setw(40) << buyer_category_1 << right << setw(7) << price_c0_1 << right << setw(20) << price_c1_1 << right << setw(20) << price_c2_1 << "          |" << endl;
	cout << "|" << left << setw(40) << buyer_category_2 << right << setw(7) << price_c0_2 << right << setw(20) << price_c1_2 << right << setw(20) << price_c2_2 << "          |" << endl;
	cout << "|" << left << setw(40) << buyer_category_3 << right << setw(7) << price_c0_3 << right << setw(20) << price_c1_3 << right << setw(20) << price_c2_3 << "          |" << endl;
	cout << "|" << left << setw(40) << buyer_category_4 << right << setw(7) << price_c0_4 << right << setw(20) << price_c1_4 << right << setw(20) << price_c2_4 << "          |" << endl;
	cout << " --------------------------------------------------------------------------------------------------" << endl;
	system("pause");
	function_menu(num_ctg_1, num_ctg_2, num_ctg_3, num_ctg_4, num_movie1, num_movie2, num_movie3, num_movie4, num_movie5, sales, worker_id);
}

void booking_section(int num_ctg_1, int num_ctg_2, int num_ctg_3, int num_ctg_4, int num_movie1, int num_movie2, int num_movie3, int num_movie4, int num_movie5, int sales, string worker_id)
{
	//company preset variables//
	string movie_available_1, movie_available_2, movie_available_3, movie_available_4, movie_available_5;
	string dates_available_1, dates_available_2, dates_available_3, dates_available_4, dates_available_5;
	string times_available_1, times_available_2, times_available_3, times_available_4, times_available_5;
	string class_available_1, class_available_2, class_available_3;
	string class_seat_1, class_seat_2, class_seat_3;
	string buyer_category_1, buyer_category_2, buyer_category_3, buyer_category_4;
	string price_c0_1, price_c0_2, price_c0_3, price_c0_4;
	string price_c1_1, price_c1_2, price_c1_3, price_c1_4;
	string price_c2_1, price_c2_2, price_c2_3, price_c2_4;
	//new//
	string movie_selected, date_selected, time_selected, class_selected, seat_no, price, buyer_category;
	//Movies available this week//
	movie_available_1 = "Avengers Endgame";
	movie_available_2 = "Toy Story 4";
	movie_available_3 = "Spider-man: Far from home";
	movie_available_4 = "The Lion King";
	movie_available_5 = "Frozen 2";
	//Dates available this week//
	dates_available_1 = "Friday";
	dates_available_2 = "Saturday";
	dates_available_3 = "Sunday";
	dates_available_4 = "Monday";
	dates_available_5 = "Tuesday";
	//Times available that day//
	times_available_1 = "10:00";
	times_available_2 = "11:00";
	times_available_3 = "14:00";
	times_available_4 = "15:00";
	times_available_5 = "18:00";
	//-----------------------------Fixed Defined condition variables/constants----------
	//Class available that day//
	class_available_1 = "Class 0(VIP)";
	class_seat_1 = "15";
	class_available_2 = "Class 1(Front)";
	class_seat_2 = "15";
	class_available_3 = "Class 2(Back)";
	class_seat_3 = "30";
	//Categories of tickets//
	buyer_category_1 = "Adult";
	buyer_category_2 = "Child(<12 years old)";
	buyer_category_3 = "Student(must show registration card)";
	buyer_category_4 = "Special group(OKU and more....)";
	//Price of tickets based on buyers categoory and class in RM//
	//Class 0//
	price_c0_1 = "20";
	price_c0_2 = "10";
	price_c0_3 = "12";
	price_c0_4 = "0";
	//Class 1//
	price_c1_1 = "16";
	price_c1_2 = "6";
	price_c1_3 = "8";
	price_c1_4 = "0";
	//Class 2//
	price_c2_1 = "18";
	price_c2_2 = "8";
	price_c2_3 = "10";
	price_c2_4 = "0";
	string hall;
	hall = "";
	system("CLS");
	movie_selected = movie_selection(movie_available_1, movie_available_2, movie_available_3, movie_available_4, movie_available_5);
	if (movie_selected == movie_available_1)
	{
		num_movie1++;
		hall = "hall A";
		if (num_movie1 > 59)
		{
			cout << "There is no more seat left in this film......";
			do
			{
				movie_selected = movie_selection(movie_available_1, movie_available_2, movie_available_3, movie_available_4, movie_available_5);
			} while (movie_selected != movie_available_1);
		}
	}
	else if (movie_selected == movie_available_2)
	{
		num_movie2++;
		hall = "hall B";
		if (num_movie1 > 59)
		{
			cout << "There is no more seat left in this film......";
			do
			{
				movie_selected = movie_selection(movie_available_1, movie_available_2, movie_available_3, movie_available_4, movie_available_5);
			} while (movie_selected != movie_available_2);
		}
	}
	else if (movie_selected == movie_available_3)
	{
		num_movie1++;
		hall = "hall C";
		if (num_movie1 > 59)
		{
			cout << "There is no more seat left in this film......";
			do
			{
				movie_selected = movie_selection(movie_available_1, movie_available_2, movie_available_3, movie_available_4, movie_available_5);
			} while (movie_selected != movie_available_3);
		}
	}
	else if (movie_selected == movie_available_4)
	{
		num_movie1++;
		hall = "hall D";
		if (num_movie1 > 59)
		{
			cout << "There is no more seat left in this film......";
			do
			{
				movie_selected = movie_selection(movie_available_1, movie_available_2, movie_available_3, movie_available_4, movie_available_5);
			} while (movie_selected != movie_available_4);
		}
	}
	else
	{
		num_movie1++;
		hall = "hall E";
		if (num_movie1 > 59)
		{
			cout << "There is no more seat left in this film......";
			do
			{
				movie_selected = movie_selection(movie_available_1, movie_available_2, movie_available_3, movie_available_4, movie_available_5);
			} while (movie_selected != movie_available_5);
		}
	}

	date_selected = date_selection(dates_available_1, dates_available_2, dates_available_3, dates_available_4, dates_available_5);
	time_selected = time_selection(times_available_1, times_available_2, times_available_3, times_available_4, times_available_5);
	buyer_category = customer_category(buyer_category_1, buyer_category_2, buyer_category_3, buyer_category_4);
	if (buyer_category == buyer_category_1)
		num_ctg_1++;
	else if (buyer_category == buyer_category_2)
		num_ctg_2++;
	else if (buyer_category == buyer_category_3)
		num_ctg_3++;
	else
		num_ctg_4++;
	class_selected = class_selection(class_available_1, class_available_2, class_available_3);
	seat_no = seat_assign(class_selected, class_available_1, class_available_2, class_available_3);
	price = payment_section(buyer_category_1, buyer_category_2, buyer_category_3, buyer_category_4,
		buyer_category, class_available_1, class_available_2, class_available_3, class_selected,
		price_c0_1, price_c0_2, price_c0_3, price_c0_4,
		price_c1_1, price_c1_2, price_c1_3, price_c1_4,
		price_c2_1, price_c2_2, price_c2_3, price_c2_4);
	if (price == price_c0_1)
		sales = sales + 20;
	else if (price == price_c0_2)
		sales = sales + 10;
	else if (price == price_c0_3)
		sales = sales + 12;
	else if (price == price_c0_4)
		sales = sales + 0;
	else if (price == price_c1_1)
		sales = sales + 16;
	else if (price == price_c1_2)
		sales = sales + 6;
	else if (price == price_c1_3)
		sales = sales + 8;
	else if (price == price_c1_4)
		sales = sales + 0;
	else if (price == price_c2_1)
		sales = sales + 18;
	else if (price == price_c2_2)
		sales = sales + 8;
	else if (price == price_c2_3)
		sales = sales + 19;
	else
		sales = sales + 6;

	ticket_printing(movie_selected, date_selected, time_selected, class_selected, seat_no, price, buyer_category, hall);
	bool sale_re;
	string choice;
	do
	{
		cout << "Go to sales report?(Y/N)";
		cin >> choice;
		if (choice.length() != 1)
		{
			cout << "invalid input......" << endl;
			sale_re = false;
		}
		else
		{
			char function_code = toupper(choice[0]);
			switch (function_code)
			{
			case 'Y':
			{
				sale_re = true;
				sales_report(buyer_category_1, buyer_category_2, buyer_category_3, buyer_category_4, movie_available_1, movie_available_2, movie_available_3, movie_available_4, movie_available_5, num_movie5, num_movie4, num_movie3, num_movie2, num_movie1, num_ctg_1, num_ctg_2, num_ctg_3, num_ctg_4, sales, worker_id);
				break;
			}
			case 'N':
			{
				sale_re = true;
				break;
			}
			default:
			{
				cout << "Invalid input......" << endl;
				sale_re = false;
			}
			}
		}
	} while (false);
	void function_menu();
}

string movie_selection(string movie_available_1, string movie_available_2, string movie_available_3, string movie_available_4, string movie_available_5)
{
	company_logo();
	cout << "Page 1/7 " << endl;
	string topic, movie_selected;
	string content_1, content_2, content_3, content_4, content_5;
	string extra_1, extra_2, extra_3, extra_4, extra_5;
	topic = "Movies Available: ";
	content_1 = movie_available_1;
	content_2 = movie_available_2;
	content_3 = movie_available_3;
	content_4 = movie_available_4;
	content_5 = movie_available_5;
	extra_1 = "";
	extra_2 = "";
	extra_3 = "";
	extra_4 = "";
	extra_5 = "";
	cout << " ____________________________________________________ " << endl;
	cout << "|" << left << setw(52) << topic << "|" << endl;
	cout << "|____________________________________________________|" << endl;
	cout << "|                                                    |" << endl;
	cout << "|  (A)  " << left << setw(35) << content_1 << right << setw(5) << extra_1 << "     |" << endl;
	cout << "|  (B)  " << left << setw(35) << content_2 << right << setw(5) << extra_2 << "     |" << endl;
	cout << "|  (C)  " << left << setw(35) << content_3 << right << setw(5) << extra_3 << "     |" << endl;
	cout << "|  (D)  " << left << setw(35) << content_4 << right << setw(5) << extra_4 << "     |" << endl;
	cout << "|  (E)  " << left << setw(35) << content_5 << right << setw(5) << extra_5 << "     |" << endl;
	cout << "|____________________________________________________|" << endl;
	//-------------------------------------------User input section:-------------------------------------------//
	//a.Choosing the movie//
	cout << "Please select the movie by entering its movie code(A, B, C...) : ";
	string movie_code;
	bool choice = 1;
	do
	{
		cin >> movie_code;
		if (movie_code.length() != 1)
		{
			cout << "invalid input......" << endl;
			choice = false;
		}
		else
		{
			char function_code = toupper(movie_code[0]);
			switch (function_code)
			{
			case 'A':
			{
				movie_selected = content_1;
				choice = true;
				break;
			}
			case 'B':
			{
				movie_selected = content_2;
				choice = true;
				break;
			}
			case 'C':
			{
				movie_selected = content_3;
				choice = true;
				break;
			}
			case 'D':
			{
				movie_selected = content_4;
				choice = true;
				break;
			}
			case 'E':
			{
				movie_selected = content_5;
				choice = true;
				break;
			}
			default:
			{
				cout << "Invalid input......" << endl;
				choice = false;
			}
			}
		}
	} while (choice == false);
	cout << endl;
	system("CLS");
	return movie_selected;
}

string date_selection(string dates_available_1, string dates_available_2, string dates_available_3, string dates_available_4, string dates_available_5)       //Function8
{
	company_logo();
	cout << "Page 2/7" << endl;
	string topic, date_selected;
	string content_1, content_2, content_3, content_4, content_5;
	string extra_1, extra_2, extra_3, extra_4, extra_5;
	topic = "Date Available: ";
	content_1 = dates_available_1;
	content_2 = dates_available_2;
	content_3 = dates_available_3;
	content_4 = dates_available_4;
	content_5 = dates_available_5;
	extra_1 = "";
	extra_2 = "";
	extra_3 = "";
	extra_4 = "";
	extra_5 = "";
	cout << " ____________________________________________________ " << endl;
	cout << "|" << left << setw(52) << topic << "|" << endl;
	cout << "|____________________________________________________|" << endl;
	cout << "|                                                    |" << endl;
	cout << "|  (A)  " << left << setw(35) << content_1 << right << setw(5) << extra_1 << "     |" << endl;
	cout << "|  (B)  " << left << setw(35) << content_2 << right << setw(5) << extra_2 << "     |" << endl;
	cout << "|  (C)  " << left << setw(35) << content_3 << right << setw(5) << extra_3 << "     |" << endl;
	cout << "|  (D)  " << left << setw(35) << content_4 << right << setw(5) << extra_4 << "     |" << endl;
	cout << "|  (E)  " << left << setw(35) << content_5 << right << setw(5) << extra_5 << "     |" << endl;
	cout << "|____________________________________________________|" << endl;
	//-------------------------------------------User input section:-------------------------------------------//
	//a.Choosing the movie//
	cout << "Please select the date by entering its movie code(A, B, C...) : ";
	string date_code;
	bool choice = 1;
	do
	{
		cin >> date_code;
		if (date_code.length() != 1)
		{
			cout << "invalid input......" << endl;
			choice = false;
		}
		else
		{
			char function_code = toupper(date_code[0]);
			switch (function_code)
			{
			case 'A':
			{
				date_selected = content_1;
				choice = true;
				break;
			}
			case 'B':
			{
				date_selected = content_2;
				choice = true;
				break;
			}
			case 'C':
			{
				date_selected = content_3;
				choice = true;
				break;
			}
			case 'D':
			{
				date_selected = content_4;
				choice = true;
				break;
			}
			case 'E':
			{
				date_selected = content_5;
				choice = true;
				break;
			}
			default:
			{
				cout << "Invalid input......" << endl;
				choice = false;
			}
			}
		}
	} while (choice == false);
	cout << endl;
	system("CLS");
	return date_selected;
}

string time_selection(string times_available_1, string times_available_2, string times_available_3, string times_available_4, string times_available_5)       //Function9
{
	company_logo();
	cout << "Page 3/7" << endl;
	string topic, time_selected;
	string content_1, content_2, content_3, content_4, content_5;
	string extra_1, extra_2, extra_3, extra_4, extra_5;
	topic = "Time Available: ";
	content_1 = times_available_1;
	content_2 = times_available_2;
	content_3 = times_available_3;
	content_4 = times_available_4;
	content_5 = times_available_5;
	extra_1 = "";
	extra_2 = "";
	extra_3 = "";
	extra_4 = "";
	extra_5 = "";
	cout << " ____________________________________________________ " << endl;
	cout << "|" << left << setw(52) << topic << "|" << endl;
	cout << "|____________________________________________________|" << endl;
	cout << "|                                                    |" << endl;
	cout << "|  (A)  " << left << setw(35) << content_1 << right << setw(5) << extra_1 << "     |" << endl;
	cout << "|  (B)  " << left << setw(35) << content_2 << right << setw(5) << extra_2 << "     |" << endl;
	cout << "|  (C)  " << left << setw(35) << content_3 << right << setw(5) << extra_3 << "     |" << endl;
	cout << "|  (D)  " << left << setw(35) << content_4 << right << setw(5) << extra_4 << "     |" << endl;
	cout << "|  (E)  " << left << setw(35) << content_5 << right << setw(5) << extra_5 << "     |" << endl;
	cout << "|____________________________________________________|" << endl;
	//-------------------------------------------User input section:-------------------------------------------//
	//a.Choosing the movie//
	cout << "Please select the time by entering its movie code(A, B, C...) : ";
	string time_code;
	bool choice = 1;
	do
	{
		cin >> time_code;
		if (time_code.length() != 1)
		{
			cout << "invalid input......" << endl;
			choice = false;
		}
		else
		{
			char function_code = toupper(time_code[0]);
			switch (function_code)
			{
			case 'A':
			{
				time_selected = content_1;
				choice = true;
				break;
			}
			case 'B':
			{
				time_selected = content_2;
				choice = true;
				break;
			}
			case 'C':
			{
				time_selected = content_3;
				choice = true;
				break;
			}
			case 'D':
			{
				time_selected = content_4;
				choice = true;
				break;
			}
			case 'E':
			{
				time_selected = content_5;
				choice = true;
				break;
			}
			default:
			{
				cout << "Invalid input......" << endl;
				choice = false;
			}
			}
		}
	} while (choice == false);
	cout << endl;
	system("CLS");
	return time_selected;
}

string customer_category(string buyer_category_1, string buyer_category_2, string buyer_category_3, string buyer_category_4)
{
	company_logo();
	cout << "Page 4/7" << endl;
	string topic, buyer_category;
	string content_1, content_2, content_3, content_4, content_5;
	string extra_1, extra_2, extra_3, extra_4, extra_5;
	topic = "Customer Category: ";
	content_1 = buyer_category_1;
	content_2 = buyer_category_2;
	content_3 = buyer_category_3;
	content_4 = buyer_category_4;
	content_5 = "";
	extra_1 = "";
	extra_2 = "";
	extra_3 = "";
	extra_4 = "";
	extra_5 = "";
	cout << " ____________________________________________________ " << endl;
	cout << "|" << left << setw(52) << topic << "|" << endl;
	cout << "|____________________________________________________|" << endl;
	cout << "|                                                    |" << endl;
	cout << "|  (A)  " << left << setw(37) << content_1 << right << setw(3) << extra_1 << "     |" << endl;
	cout << "|  (B)  " << left << setw(37) << content_2 << right << setw(3) << extra_2 << "     |" << endl;
	cout << "|  (C)  " << left << setw(37) << content_3 << right << setw(3) << extra_3 << "     |" << endl;
	cout << "|  (D)  " << left << setw(37) << content_4 << right << setw(3) << extra_4 << "     |" << endl;
	cout << "|  (E)  " << left << setw(37) << content_5 << right << setw(3) << extra_5 << "     |" << endl;
	cout << "|____________________________________________________|" << endl;
	//-------------------------------------------User input section:-------------------------------------------//
	//a.Choosing the movie//
	cout << "Please enter the customer's category : " << endl;
	string category;
	bool choice = 1;
	do
	{
		cin >> category;
		if (category.length() != 1)
		{
			cout << "invalid input......" << endl;
			choice = false;
		}
		else
		{
			char function_code = toupper(category[0]);
			switch (function_code)
			{
			case 'A':
			{
				buyer_category = content_1;
				choice = true;
				break;
			}
			case 'B':
			{
				buyer_category = content_2;
				choice = true;
				break;
			}
			case 'C':
			{
				buyer_category = content_3;
				choice = true;
				break;
			}
			case 'D':
			{
				buyer_category = content_4;
				choice = true;
				break;
			}
			default:
			{
				cout << "Invalid input......" << endl;
				choice = false;
			}
			}
		}
	} while (choice == false);
	system("CLS");
	cout << endl;
	return buyer_category;
}

string class_selection(string class_available_1, string class_available_2, string class_available_3)       //Function11
{
	company_logo();
	cout << "Page 5/7" << endl;
	cout << " -----------------------------------------------------------------------------------------------------" << endl;
	cout << left << setw(60) << "| Class 0(VIP)    Seats   A| 01 | 02 | 03 | 04 | 05 | 06 | 07 | 08 | 09 | 10 | 11 | 12 | 13 | 14 | 15 | " << endl << endl;
	cout << left << setw(60) << "| Class 1(Front)  Seats   B| 01 | 02 | 03 | 04 | 05 | 06 | 07 | 08 | 09 | 10 | 11 | 12 | 13 | 14 | 15 | " << endl << endl;
	cout << left << setw(60) << "| Class 0(Back)   Seats   C| 01 | 02 | 03 | 04 | 05 | 06 | 07 | 08 | 09 | 10 | 11 | 12 | 13 | 14 | 15 | " << endl;
	cout << left << setw(60) << "|                          | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | 28 | 29 | 30 | " << endl;
	//-------------------------------------------User input section:-------------------------------------------//
	//a.Choosing the movie//
	cout << " -----------------------------------------------------------------------------------------------------" << endl;
	cout << " Management team have the right to change your seat class due to management purpose with ticket fee refund" << endl;
	cout << "Please select the seat class by entering code(A, B, C...) : ";
	string class_code, class_selected;
	bool choice = 1;
	do
	{
		cin >> class_code;
		if (class_code.length() != 1)
		{
			cout << "invalid input......" << endl;
			choice = false;
		}
		else
		{
			char function_code = toupper(class_code[0]);
			switch (function_code)
			{
			case 'A':
			{
				class_selected = class_available_1;
				choice = true;
				break;
			}
			case 'B':
			{
				class_selected = class_available_2;
				choice = true;
				break;
			}
			case 'C':
			{
				class_selected = class_available_3;
				choice = true;
				break;
			}
			default:
			{
				cout << "Invalid input......" << endl;
				choice = false;
			}
			}
		}
	} while (choice == false);
	cout << endl;
	system("CLS");
	return class_selected;
}

string seat_assign(string class_selected, string class_available_1, string class_available_2, string class_available_3)
{
	string seat_no;
	if (class_selected == class_available_1)
	{
		seat_no = "A(1-15)";
	}
	else if (class_selected == class_available_2)
	{
		seat_no = "B(1-15)";
	}
	else if (class_selected == class_available_3)
	{
		seat_no = "C(1-30)";
	}
	cout << endl;
	system("CLS");
	return seat_no;
}

string payment_section(string buyer_category_1, string buyer_category_2, string buyer_category_3, string buyer_category_4,
	string buyer_category, string class_available_1, string class_available_2, string class_available_3, string class_selected,
	string price_c0_1, string price_c0_2, string price_c0_3, string price_c0_4,
	string price_c1_1, string price_c1_2, string price_c1_3, string price_c1_4,
	string price_c2_1, string price_c2_2, string price_c2_3, string price_c2_4)      //Function12
{
	string price;
	company_logo();
	cout << "Page 6/7" << endl;
	cout << "Payment Section: ";
	cout << " --------------------------------------------------------------------------------------------------" << endl;
	if (class_selected == class_available_1)
	{
		if (buyer_category == buyer_category_1)
		{
			cout << "Please pay RM" << price_c0_1;
			price = price_c0_1;
		}
		else if (buyer_category == buyer_category_2)
		{
			cout << "Please pay RM" << price_c0_2;
			price = price_c0_2;
		}
		else if (buyer_category == buyer_category_3)
		{
			cout << "Please pay RM" << price_c0_3;
			price = price_c0_3;
		}
		else if (buyer_category == buyer_category_4)
		{
			cout << "Please pay RM" << price_c0_4;
			price = price_c0_4;
		}
	}
	else if (class_selected == class_available_2)
	{
		if (buyer_category == buyer_category_1)
		{
			cout << "Please pay RM" << price_c1_1;
			price = price_c1_1;
		}
		else if (buyer_category == buyer_category_2)
		{
			cout << "Please pay RM" << price_c1_2;
			price = price_c1_2;
		}
		else if (buyer_category == buyer_category_3)
		{
			cout << "Please pay RM" << price_c1_3;
			price = price_c1_3;
		}
		else if (buyer_category == buyer_category_4)
		{
			cout << "Please pay RM" << price_c1_4;
			price = price_c1_4;
		}
	}
	else if (class_selected == class_available_3)
	{
		if (buyer_category == buyer_category_1)
		{
			cout << "Please pay RM" << price_c2_1;
			price = price_c2_1;
		}
		else if (buyer_category == buyer_category_2)
		{
			cout << "Please pay RM" << price_c2_2;
			price = price_c2_2;
		}
		else if (buyer_category == buyer_category_3)
		{
			cout << "Please pay RM" << price_c2_3;
			price = price_c2_3;
		}
		else if (buyer_category == buyer_category_4)
		{
			cout << "Please pay RM" << price_c2_4;
			price = price_c2_4;
		}
	}
	cout << endl;
	system("pause");
	system("CLS");
	return price;
}

void ticket_printing(string movie_selected, string date_selected, string time_selected, string class_selected, string seat_no, string price, string buyer_category, string hall)      //Function13
{
	cout << " ---------------------------------------------------------------------------- " << endl;
	cout << "|   Tar Cinemax Movie Ticket " << right << setw(30) << hall << right << setw(18) << class_selected << "|" << endl;
	cout << "|   Movie      : " << left << setw(60) << movie_selected << "|" << endl;
	cout << "|   Date       : " << left << setw(60) << date_selected << "|" << endl;
	cout << "|   time       : " << left << setw(60) << time_selected << "|" << endl;
	cout << "|   Seat Zone  : " << left << setw(60) << seat_no << "|" << endl;
	cout << "|   Category   : " << left << setw(60) << buyer_category << "|" << endl;
	cout << "|   Price      : RM" << left << setw(58) << price << "|" << endl;
	cout << " ---------------------------------------------------------------------------- " << endl;
	cout << endl;
	system("pause");
	system("CLS");
}

void sales_report(string buyer_category_1, string buyer_category_2, string buyer_category_3, string buyer_category_4,
	string movie_available_1, string movie_available_2, string movie_available_3, string movie_available_4, string movie_available_5,
	int num_movie5, int  num_movie4, int  num_movie3, int  num_movie2, int  num_movie1,
	int  num_ctg_1, int  num_ctg_2, int  num_ctg_3, int  num_ctg_4, int sales, string worker_id)
{
	system("CLS");
	cout << "SALES REPORT (Staff " << worker_id << ")" << endl;
	cout << "-----------------------------------------" << endl;
	cout << left << setw(40) << movie_available_1 << " : " << num_movie1 << endl;
	cout << left << setw(40) << movie_available_2 << " : " << num_movie2 << endl;
	cout << left << setw(40) << movie_available_3 << " : " << num_movie3 << endl;
	cout << left << setw(40) << movie_available_4 << " : " << num_movie5 << endl;
	cout << left << setw(40) << movie_available_5 << " : " << num_movie5 << endl;
	cout << "-----------------------------------------" << endl;
	cout << left << setw(40) << buyer_category_1 << " : " << num_ctg_1 << endl;
	cout << left << setw(40) << buyer_category_2 << " : " << num_ctg_2 << endl;
	cout << left << setw(40) << buyer_category_3 << " : " << num_ctg_3 << endl;
	cout << left << setw(40) << buyer_category_4 << " : " << num_ctg_4 << endl;
	cout << "-----------------------------------------" << endl;
	cout << "Sales of the day		: RM" << sales << endl;
	cout << endl;
	system("pause");
	system("CLS");
	function_menu(num_ctg_1, num_ctg_2, num_ctg_3, num_ctg_4, num_movie1, num_movie2, num_movie3, num_movie4, num_movie5, sales, worker_id);
}

void	terminate_program()
{
	cout << "Well done today's work, have a good rest~ " << endl;
}