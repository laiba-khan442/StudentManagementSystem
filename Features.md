# Student Management System — Roadmap

## Goal
Build a console-based Student Management System in C++ using:
- OOP
- Clean Architecture
- File Persistence
- Scalable Design

---

# Project Structure

```txt
src/
├── models/
├── services/
├── repositories/
├── ui/
├── utils/
└── main.cpp
```

---

# Architecture Layers

## Models
Entities only.
- Student
- Course
- Enrollment
- Admin

---

## Services
Business logic.
- Validation
- Enrollment rules
- GPA calculation
- Authentication

---

## Repositories
Data handling.
- Save
- Load
- Update
- Delete

---

## UI
Console interaction.
- Menus
- Input
- Output

---

# Phase 1 — MVP

## Student Management
- Add student
- Update student
- Delete student
- Search student
- View all students

---

## Course Management
- Add course
- Update course
- Delete course
- Search course
- View all courses

---

## Enrollment System
- Enroll student
- Drop course
- View enrollments

---

## Authentication
- Admin login
- Logout

---

## File Persistence

Files:
- students.txt
- courses.txt
- enrollments.txt
- admins.txt

---

## Reports
- Total students
- Highest CGPA
- Students per department
- Most enrolled course

---

# Phase 2 — Validation & Error Handling

## Validation
- Unique IDs
- Valid email
- CGPA range
- Duplicate enrollment prevention

---

## Error Handling
- try/catch
- File handling errors
- Invalid input handling

---

# Phase 3 — Intermediate Features

## Attendance
- Mark attendance
- Attendance percentage

---

## Grading
- Assign marks
- Calculate GPA
- Generate transcript

---

## Instructor Management
- Add instructor
- Assign instructor to course

---

## Department Management
- Add departments
- Assign students/courses

---

# Phase 4 — Advanced OOP

Learn:
- Inheritance
- Polymorphism
- Abstract classes
- Composition

---

# Phase 5 — Database Migration

Replace file storage with:
- SQLite
- MySQL/PostgreSQL

Goal:
- Only repositories should change

---

# Phase 6 — API Development

Learn:
- REST APIs
- JSON
- HTTP

Possible Frameworks:
- Crow
- Drogon
- Pistache

---

# Phase 7 — Frontend/UI

Possible Upgrades:
- Qt
- React
- Web frontend

---

# Important Rules

## Models
Should NOT:
- Handle files
- Contain UI logic

---

## Services
Should contain:
- Business rules
- Validation
- Calculations

---

## Repositories
Should ONLY:
- Save/load/update/delete data

---

## UI
Should ONLY:
- Take input
- Show output

---

# Recommended Development Order

1. Student CRUD
2. File persistence
3. Separate folders/classes
4. Add services
5. Add courses
6. Add enrollments
7. Add validation
8. Add reports
9. Refactor/improve architecture

---