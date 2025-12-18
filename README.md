# COVID-19 Vaccine Management System (C++ | Object-Oriented Programming)

A console-based COVID-19 Vaccine Management System developed using C++ and Object-Oriented Programming (OOP) principles.  
This project was built as part of the SV20303 – Object Oriented Programming course at Universiti Malaysia Sabah (UMS).

The system provides both Admin and User functionalities, including vaccine stock management, patient registration, doctor information management, and center-based vaccination application.

---

## 🚀 Features

### 🔐 Admin Module
- Secure admin login with password masking and CAPTCHA verification  
- Add vaccine stock to vaccination centers  
- View vaccine availability  
- Display and search patient records  
- Add and search doctor information  
- View vaccination statistics  
- Log-out functionality  

### 👤 User Module
- Create user account  
- User login  
- Apply for first and second vaccine dose  
- View vaccination details  
- Search available vaccination centers  

---

## 🧠 Technical Concepts Used
- Object-Oriented Programming (Classes, Methods, Encapsulation)  
- Input validation & error handling  
- Menu-driven console application  
- File handling (for storing patient & doctor information)  
- Simple authentication system  
- Formatted terminal UI  

---

## 📂 Project Structure

```
OOP-Vaccine-Management-System/
│── src/
│   └── main.cpp
│── diagrams/
│   ├── flowchart.png
│   ├── class_diagram.png
│── docs/
│   └── VaccineManagementSystem_Report.pdf
│── README.md
│── LICENSE
│── .gitignore
```

---

## 📊 Diagrams

### Flowchart
![Flowchart](diagrams/flowchart.png)

### Class Diagram
![Class Diagram](diagrams/class_diagram.png)

---

## 📸 Sample Output Screens
Screenshots are taken from the console application:

- Login & Registration  
- Admin Menu  
- Vaccine Center Selection  
- User Menu  
- Apply for Vaccine Dose  

(Refer to the docs/VaccineManagementSystem_Report.pdf for full screenshots and explanation.)

---

## ▶️ How to Run the Program

### Using g++
```bash
g++ src/main.cpp -o vaccine_system
./vaccine_system
```

### Using Dev-C++ / CodeBlocks / VSCode
1. Create a new C++ project  
2. Add `main.cpp`  
3. Build & Run  

---

## 🌟 Future Improvements
- Separate classes into multiple `.h` and `.cpp` files  
- Replace GOTOs with loops & switch control  
- Store data in JSON/CSV files  
- Add a GUI using Qt or Python PyQt5  
- Implement OOP inheritance for Admin & User  

---

## 👩‍💻 Author
**Surekadevi A/P Shanmuganathan**  
Bachelor of Science (Hons.) Mathematics with Computer Graphics  
Universiti Malaysia Sabah (UMS)

---

## 📜 License
This project is released under the **MIT License**.
