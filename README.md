# course-_project_1

## Expenses Income Management 


### Abstract

The Expense and Income Management System is a console-based application developed in the C programming language to help users manage their personal financial records efficiently. The system allows users to record income and expenses along with their categories, enabling easy organization of daily financial activities. All the transaction details are stored in a text file, ensuring data persistence even after the program terminates.

Users can add new transactions, view the complete list of records, and generate a summary showing total income, total expenses, and the remaining balance. The program uses a menu-driven approach for ease of operation and file handling techniques for storing and retrieving data. This simple yet effective tool enables users to track their financial status and maintain better budget control. The application is lightweight, user-friendly, and suitable for beginner-level financial management solutions.

### Functional Requirements

Add Transaction

The system must allow users to enter a transaction with:

Type (Income / Expense)

Amount

Category

The system must save the transaction into a file (data.txt).

View All Transactions

The system must read and display all stored transactions.

Each transaction must show:

Type

Amount

Category

Show Summary

The system must calculate and display:

Total Income

Total Expense

Balance (Income − Expense)

The system must correctly differentiate between income and expense records.

Data Storage

The system must store transaction data persistently in a text file (data.txt).

The system must append new transactions without deleting previous data.

Menu-driven Operations

The system must display a menu with options:

Add Transaction

View All Transactions

Show Summary

Exit

The system must allow the user to perform operations repeatedly until Exit is chosen.

Exit Program

The system must terminate program execution safely when the user selects Exit.

Input Handling

The system must take user input from the keyboard for choices and transaction details.


### Features of the Expense & Income Manager Program


Add Income & Expense Records

Users can add financial transactions with type, amount, and category.

File-based Data Storage

All records are saved in a text file (data.txt) to keep data even after program exit.

View All Transactions

Users can view the complete list of stored financial records in a tabular format.

Financial Summary Report

Automatically calculates:

Total Income

Total Expense

Remaining Balance

Simple & User-friendly Menu

Easy navigation using a numbered choice system.

Case-insensitive Transaction Type Handling

Accepts both "income" and "Income" correctly.

Continuous Execution Loop

Program allows multiple operations until the user chooses to exit.

Basic Input Validation

Displays error message for invalid menu choice.

Lightweight & Fast Execution

Uses minimal system resources and works on any C compiler.

### How to Run the Project

✔ Requirements

To run this C program, you need any C compiler such as:

GCC (MinGW for Windows)

Turbo C / Turbo C++

Code::Blocks

Dev-C++

Visual Studio Code with a C extension

🖥 Steps to Run
Method 1: Using Command Line (GCC Compiler)

Save the program in a file named:
👉 main.c

Open Terminal / Command Prompt

Navigate to the folder where main.c is saved

Compile the program using:

gcc main.c -o manager


Run the program using:

./manager


(Windows users: manager.exe)

Method 2: Using Code::Blocks

Open Code::Blocks

Create a new Console Application → Select C language

Replace default code with the provided program

Click Build & Run (F9)

The program will start running in a console window

Method 3: Using Turbo C / Dev-C++

Create a new source file

Paste the full code

Save as main.c

Compile → Run (Shortcut: Ctrl + F9 in TurboC)

📌 Important Notes

The program will create or update a file named data.txt in the same folder to store transactions.

Do not delete data.txt unless you want to remove all saved records.

Ensure the executable and data file are in the same directory.

🏁 Sample Execution

Program shows menu like:

===== Expense & Income Manager =====
1. Add Transaction
2. View All Transactions
3. Show Summary
4. Exit
Enter your choice:







