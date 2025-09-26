# Library Management System

A simple console-based Library Management System written in C that allows librarians to manage books and members efficiently.

## Features

- **Password Protection**: Secure access with password authentication
- **View Books**: Display all available books with details (title, author, copies)
- **View Members**: Show all registered library members
- **Add Books**: Add new books to the library collection
- **Add Members**: Register new library members
- **File-based Storage**: All data persisted in text files

## Project Structure

```
LibraryManagementSystem/
├── LMS.c           # Main source code
├── books.txt       # Book database
├── members.txt     # Member database  
├── password.txt    # System password
├── README.md       # This file
├── LMS.exe         # Compiled executable
└── LMS.o           # Object file
```

## Getting Started

### Prerequisites

- GCC compiler or any C compiler
- Windows/Linux/macOS environment

### Compilation

```bash
gcc -o LMS LMS.c
```

### Running the Program

```bash
./LMS
```

## Usage

1. **Login**: Enter the system password (default: `lms.c`)
2. **Main Menu**: Choose from 5 options:
   - `1` - View all available books
   - `2` - View all registered members  
   - `3` - Add a new book
   - `4` - Add a new member
   - `5` - Exit the program

### Sample Book Entry
```
Book: "Electrical_Engineering:_Principles_and_Applications"
Author: "A.R._Hambley"
Copies: 05
```

### Sample Member Entry
```
Name: A.Sivatheevan
Student_ID: 083
```

## Functions

- [`showbooks()`](LMS.c) - Displays all books from [books.txt](books.txt)
- [`showmembers()`](LMS.c) - Shows all members from [members.txt](members.txt)
- [`addbook()`](LMS.c) - Adds new books to the collection
- [`addmember()`](LMS.c) - Registers new library members
- [`main()`](LMS.c) - Main program with authentication and menu system

## Data Files

- **[books.txt](books.txt)**: Stores book information (title, author, available copies)
- **[members.txt](members.txt)**: Stores member details (name, student ID)
- **[password.txt](password.txt)**: Contains the system access password

## Current Library Collection

The system currently manages:
- 6 different books with varying copy counts
- 5 registered members
- Engineering and Computer Science focused collection

## Security

- Password-protected access
- Maximum 10 login attempts
- Simple authentication system using [password.txt](password.txt)

## Limitations

- Text-based user interface
- No data validation for duplicate entries
- Basic file handling without error recovery
- No book borrowing/return functionality
- No search capabilities

## Future Enhancements

- [ ] Book borrowing and return system
- [ ] Search functionality for books and members
- [ ] Data validation and duplicate prevention
- [ ] Better error handling
- [ ] GUI implementation
- [ ] Database integration

## Author

University Assignment - Library Management System

## License

This project is for educational purposes as part of university coursework.


