#include <iostream>
#include <cstring>
#include <windows.h>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

#define TOTAL_VACCINE 400

class covid_management {
private:
    // User/Admin details
    string username, password, usn;
    int tm;

    // Vaccine centers
    string center1 = "Pusat Rawatan Warga Universiti Malaysia Sabah";
    string center2 = "Queen Elizabeth Hospital";
    string center3 = "KPJ Sabah Specialist";

    int sum_vaccine_c1 = 0;
    int sum_vaccine_c2 = 0;
    int sum_vaccine_c3 = 0;

    // Doctor Details
    string identification_id;
    char specialization[100];
    string center;

    // Patient / User Details
    char name[100];
    char gender[100];
    int age;
    string myKadNumber;
    int c;
    string phone_no, profession, address, vaccine_name;
    int dose;

public:
    // Main functions
    void menu();
    void admin();
    void admin_password();
    void user();
    void user_password();
    void valid(string str);

    // Admin features
    void add_vaccine_stock();
    void display_vaccine_stock();
    void show_patient_data();
    void show_data();
    void applied_vaccine();
    void add_doctor();
    void search_doctor_data();
    void display_doctor_data();
    void doctor_show_data();
    void search_by_myKadNumber();
    void search_by_age();
    void search_by_profession();
    void search_by_gender();

    // User features
    void search_center();
    void add_patient_data();
    void patient_show_data();
    void update_patient_data();
};

void covid_management::menu() {
    system("cls");
    int choice;

    cout << "\n\t\t\t*****************************************";
    cout << "\n\t\t\t * COVID19 VACCINE MANAGEMENT SYSTEM *";
    cout << "\n\t\t\t*****************************************";

    cout << "\n\n\t\t -->> MAIN MENU <<--";
    cout << "\n\n\t\t 1. ADMIN";
    cout << "\n\t\t 2. USER";
    cout << "\n\t\t 3. EXIT";

    cout << "\n\n\t\tEnter Choice: ";
    cin >> choice;

    switch (choice) {
        case 1: admin(); break;
        case 2: user(); break;
        case 3:
            system("cls");
            cout << "\n\n\t\t COVID19 VACCINE MANAGEMENT SYSTEM";
            Sleep(10);
            exit(0);
        default:
            cout << "\n\n\t\t Invalid Key... Please Try Again....";
            cout << "\n Press Any Key To Continue: ";
            getch();
            menu();
    }
}

void covid_management::admin() {
    admin_password();
A:
    system("cls");
    int admin_choice;

    cout << "\n\t\t\t*****************************************";
    cout << "\n\t\t\t * COVID19 VACCINE MANAGEMENT SYSTEM *";
    cout << "\n\t\t\t*****************************************";

    cout << "\n\n\t\t -->> ADMIN MENU <<--";
    cout << "\n\t\t 1. Add Vaccine Stock";
    cout << "\n\t\t 2. Show Vaccine Center";
    cout << "\n\t\t 3. Show Vaccine Stock";
    cout << "\n\t\t 4. Show Patient Data";
    cout << "\n\t\t 5. Show Total Number Of Vaccines Applied";
    cout << "\n\t\t 6. Add New Doctor Data";
    cout << "\n\t\t 7. Search Doctor Data";
    cout << "\n\t\t 8. Show Doctor Data";
    cout << "\n\t\t 9. LOG OUT";

    cout << "\n\n\t\tEnter Choice: ";
    cin >> admin_choice;

    switch (admin_choice) {
        case 1: add_vaccine_stock(); goto A;
        case 2: search_center(); goto A;
        case 3: display_vaccine_stock(); goto A;
        case 4: show_patient_data(); goto A;
        case 5: applied_vaccine(); goto A;
        case 6: add_doctor(); goto A;
        case 7: search_doctor_data(); goto A;
        case 8: display_doctor_data(); goto A;
        case 9: menu();
        default:
            cout << "\n\n\t\t Invalid Choice... Try Again...";
            cout << "\n Press Any Key To Continue: ";
            getch();
            goto A;
    }
}

void covid_management::admin_password() {
    system("cls");

    char a_name[20];
    char a_password[20];
    int ch, i = 0, capt = 0, capta = 0;

    cout << "\n\t\t\t*****************************************";
    cout << "\n\t\t\t * COVID19 VACCINE MANAGEMENT SYSTEM *";
    cout << "\n\t\t\t*****************************************";

    cout << "\n\n\t\t -->> LOGIN ADMIN <<--";
    cout << "\n\n\t\tEnter Your Name: ";
    cin >> a_name;

    cout << "\n\t\tEnter Your Password: ";
    while ((ch = getch()) != 13) {
        cout << "*";
        a_password[i] = ch;
        i++;
    }
    a_password[i] = '\0';

    srand(time(0));
    capt = rand();

    cout << "\n\n\t\tCaptcha: " << capt;
    cout << "\n\t\tEnter Valid Captcha: ";
    cin >> capta;

    if ((strcmp(a_name, "sureka") == 0) && (strcmp(a_password, "12345") == 0) && (capt == capta)) {
        cout << "\n\n\t\t Access Granted...";
        Sleep(500);
    } else {
        cout << "\n\n\t\t Access Denied...";
        Sleep(800);
        menu();
    }
}

void covid_management::user() {
    user_password();
}

void covid_management::user_password() {
    system("cls");

    cout << "\n\t\t -->> USER LOGIN <<--";
    cout << "\n\t\t1. Create Account";
    cout << "\n\t\t2. Login";
    cout << "\n\t\t3. Back";

    int ch;
    cout << "\n\nEnter choice: ";
    cin >> ch;

    switch (ch) {
        case 1: add_patient_data(); break;
        case 2: patient_show_data(); break;
        case 3: menu(); break;
        default:
            cout << "\n Invalid choice";
            user_password();
    }
}

void covid_management::add_vaccine_stock() {
    system("cls");

    int center_no, add;

    cout << "\n\t\t -->> ADD VACCINE IN CENTER <<--";
    cout << "\n\t\t1. " << center1;
    cout << "\n\t\t2. " << center2;
    cout << "\n\t\t3. " << center3;

    cout << "\n\nEnter Choice: ";
    cin >> center_no;

    cout << "Enter Number Of Vaccines To Add: ";
    cin >> add;

    if (center_no == 1) sum_vaccine_c1 += add;
    else if (center_no == 2) sum_vaccine_c2 += add;
    else if (center_no == 3) sum_vaccine_c3 += add;

    cout << "\n Stock Updated Successfully!";
    getch();
}

void covid_management::display_vaccine_stock() {
    system("cls");
    cout << "\n\t\t -->> CURRENT VACCINE STOCK <<--";

    cout << "\n1. " << center1 << ": " << sum_vaccine_c1;
    cout << "\n2. " << center2 << ": " << sum_vaccine_c2;
    cout << "\n3. " << center3 << ": " << sum_vaccine_c3;

    cout << "\n\nPress Any Key To Continue...";
    getch();
}

void covid_management::search_center() {
    display_vaccine_stock();
}

void covid_management::add_patient_data() {
    system("cls");

    cout << "\n\t-->> REGISTRATION USER <<--";
    cout << "\nEnter Your Name: ";
    cin >> name;
    cout << "Enter Username: ";
    cin >> usn;
    cout << "Enter Password: ";
    cin >> password;

    cout << "\nYou are successfully registered!";
    getch();
}

void covid_management::patient_show_data() {
    system("cls");
    cout << "\n\tPatient Login Feature Coming Soon!";
    getch();
}

void covid_management::show_patient_data() {
    cout << "\n\tPatient Data Feature Coming Soon!";
}

void covid_management::show_data() {}
void covid_management::applied_vaccine() {}
void covid_management::add_doctor() {}
void covid_management::search_doctor_data() {}
void covid_management::display_doctor_data() {}
void covid_management::doctor_show_data() {}
void covid_management::search_by_myKadNumber() {}
void covid_management::search_by_age() {}
void covid_management::search_by_profession() {}
void covid_management::search_by_gender() {}

int main() {
    system("color B");
    covid_management system;
    system.menu();
    return 0;
}
