*This project has been created as part of the 42 curriculum by vabatist.*
#
```text
    
██████╗                     
██╔════╝     ██╗       ██╗  
██║       ████████╗ ████████╗
██║       ╚══██╔══╝ ╚══██╔══╝
╚██████╗     ██║       ██║  
 ╚═════╝     ╚═╝       ╚═╝

```

# 42_CPP

## Table of Contents

- [Introduction](#introduction)
- [General Rules](#general-rules)
- [AI Instructions](#ai-instructions)
- [Modules](#modules)
  <details open>
    <summary><strong>Module 00</strong></summary>

    - [ex00: Megaphone](#ex00-megaphone)
    - [ex01: My Awesome PhoneBook](#ex01-my-awesome-phonebook)
  </details>
  <details>
    <summary><strong>Module 01</strong> (Coming soon)</summary>

    - [ex00: ...](#)
    - [ex01: ...](#)
  </details>
  <details>
    <summary><strong>Module 02</strong> (Coming soon)</summary>
  </details>
  <details>
    <summary><strong>Module 03</strong> (Coming soon)</summary>
  </details>
  <details>
    <summary><strong>Module 04</strong> (Coming soon)</summary>
  </details>
  <details>
    <summary><strong>Module 05</strong> (Coming soon)</summary>
  </details>
  <details>
    <summary><strong>Module 06</strong> (Coming soon)</summary>
  </details>
  <details>
    <summary><strong>Module 07</strong> (Coming soon)</summary>
  </details>
  <details>
    <summary><strong>Module 08</strong> (Coming soon)</summary>
  </details>
  <details>
    <summary><strong>Module 09</strong> (Coming soon)</summary>
  </details>

---

## Introduction

C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension to the C programming language.  
This series of modules is intended to provide a practical, hands-on introduction to C++ and Object-Oriented Programming using the C++98 standard. Each module contains several coding exercises increasing in complexity.

---

## General Rules

- Compile with: `c++ -Wall -Wextra -Werror -std=c++98`
- Use exercise directories named `ex00`, `ex01`, etc.
- Class names in UpperCamelCase. Files named after the class, e.g., `ClassName.hpp`, `ClassName.cpp`.
- Outputs must end with a newline and go to standard output.
- No enforced coding style, but write clean and understandable code.
- Allowed: Most of the C++ Standard Library (except STL containers/algorithms until Module 08).
- Forbidden:
  - Using C++11/14/17 or external libraries (incl. Boost)
  - `using namespace <ns_name>` and `friend` unless otherwise stated
  - STL containers/algorithms before Module 08
  - Functions like `*printf()`, `*alloc()`, and `free()`
- Add include guards to every header file.
- Do not implement functions (except templates) in header files.
- Makefiles follow standard rules as in C projects.
- No dynamic allocation is allowed unless specified.

---

## AI Instructions

- Use AI tools thoughtfully—build your foundational skills yourself before asking for help.
- Don't ask AI for solutions; instead, use it to clarify concepts if necessary.
- No AI assistance during exams; make sure you understand everything you implement.
- Peer learning is encouraged—discuss, ask questions, and solve problems together.

---

## Modules

---

### Module 00

_Basics of C++: namespaces, classes, member functions, stdio streams, initialization lists, static, const, and more._

---

#### ex00: Megaphone

**Directory:** `ex00`  
**Files:**

```
ex00/
├── Makefile         # Build rules to compile megaphone.cpp into the executable
└── megaphone.cpp    # Main source file: prints uppercased arguments or a default message
```

**Description:**  
Write a program that echoes its command-line arguments in uppercase letters.  
If no arguments are provided, it should output:  
`* LOUD AND UNBEARABLE FEEDBACK NOISE *`

**Usage:**
```sh
cd ex00
make              # Builds the megaphone executable
./megaphone ...   # Replace ... with your arguments
```
_Examples:_
```
./megaphone Hello world!
HELLO WORLD!

./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
```

---

#### ex01: My Awesome PhoneBook

**Directory:** `ex01`  
**Files:**

```
ex01/
├── Makefile           # Build rules to compile the phonebook application
├── Contact.hpp        # Declaration of the Contact class and its member functions
├── Contact.cpp        # Implementation of the Contact class methods
├── PhoneBook.hpp      # Declaration of the PhoneBook class and its member functions
├── PhoneBook.cpp      # Implementation of the PhoneBook class methods
└── main.cpp           # Program entry point: handles command loop and user input
```

**Description:**  
A tiny terminal-based phonebook supporting these commands:
- `ADD`: Add a new contact (max 8 contacts, oldest overwritten if full).
- `SEARCH`: Display a formatted list of contacts and show details for a selected one.
- `EXIT`: Quit the program.

**Usage:**
```sh
cd ex01
make              # Builds the phonebook executable (default name usually phonebook)
./phonebook
```
_Then within the program, type any of:_
- `ADD` &rarr; add new contact fields
- `SEARCH` &rarr; display list, enter an index to show a contact's detail
- `EXIT` &rarr; exit the program

**Requirements:**
- Two classes: `PhoneBook` (stores contacts) and `Contact` (holds contact fields).
- No dynamic allocation.
- Use `iomanip` for column formatting.
- Respect 42 guidelines on formatting and code structure.

For more details, refer to your module's subject PDF or intranet.

---

### Module 01 (Coming soon)

**Description and exercises will be added once this module is started.**

**Expected structure (example):**
```
ex00/
  ├── ...
ex01/
  ├── ...
```

---

### Module 02 (Coming soon)

...

### Module 03 (Coming soon)

...

### Module 04 (Coming soon)

...

### Module 05 (Coming soon)

...

### Module 06 (Coming soon)

...

### Module 07 (Coming soon)

...

### Module 08 (Coming soon)

...

### Module 09 (Coming soon)

...

---
