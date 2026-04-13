🚆 Railway Reservation System (C++)
Online GDB https://onlinegdb.com/957s04wlu
📌 Overview

This is a simple Railway Reservation System implemented in C++ using Object-Oriented Programming (OOP) concepts. The program allows users to manage train details such as adding, displaying, and searching trains.

✨ Features
➕ Add new train details
📋 Display all trains
🔍 Search train by train number
📊 Track total number of trains using static members
🛠️ Technologies Used
C++
STL (vector)
OOP Concepts:
Classes & Objects
Constructors & Destructor
Copy Constructor
Static Members
📂 Project Structure
RailwayReservationSystem.cpp
README.md
🚀 How to Run
1. Compile the Program
g++ RailwayReservationSystem.cpp -o railway
2. Run the Executable
./railway
📖 Usage

After running the program, you will see a menu:

1. Add Train
2. Display Trains
3. Search Train
4. Exit
➤ Add Train
Enter train number, name, source, destination, and time.
➤ Display Trains
Shows all stored train details.
➤ Search Train
Enter train number to find a specific train.
🧠 Concepts Demonstrated
Encapsulation: Private data members with public methods
Constructor Overloading
Static Variable (Traincount) to track object count
Dynamic Storage using vector
⚠️ Limitations
Data is not saved permanently (no file/database storage)
No validation for duplicate train numbers
Console-based UI only
🔮 Future Improvements
💾 Add file handling for persistent storage
🧾 Ticket booking functionality
🔐 User authentication system
🌐 GUI or Web-based interface
👨‍💻 Author
Your Name
📜 License

This project is open-source and free to use for learning purposes.
