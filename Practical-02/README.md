# Practical No. 2

## Title

Student Result Database Management Using Array of Structures

## Algorithm

1. **Start**

2. Define a structure `Student` containing:

   * Roll number
   * Name
   * Program
   * Course
   * Subject marks
   * Total marks
   * Average

3. Declare an array of `Student` structures.

4. Display a menu with the following operations:

   * Add student record
   * Update student record
   * Search student record
   * Display all records
   * Sort records by total marks/average
   * Exit

5. **Add Record:**

   * Accept student details and subject marks.
   * Calculate total marks.
   * Calculate average marks.
   * Store the record in the array.

6. **Update Record:**

   * Accept the roll number of the student.
   * Search for the corresponding record.
   * If found, update the required details and recalculate total and average.

7. **Search Record:**

   * Accept a roll number or student name.
   * Search the array for the matching record.
   * Display the record if found; otherwise display "Record not found".

8. **Display Records:**

   * Traverse the array.
   * Display all stored student records along with total and average marks.

9. **Sort Records:**

   * Compare the total marks or average marks of students.
   * Arrange the records in ascending or descending order.

10. Repeat the menu until the user selects **Exit**.

11. **Stop**.
