LAB1 code by Abdirizak Abdullahi and Abdimajid

My Program Description:
This acts kind of like a database management system where users can use a menu to do actions like printing all records, adding records, deleting records, and printing statistics about the database.

What the menu does:
The program gives these options to the user:

1. Print all records
2. Add record
3. Delete last record
4. Print number of records
5. Print database size
6. Print number of changes
7. Exit
Users choose an option by entering a number(1-7) number. The program continues to loop through the menu until the user selects "Exit."
What each function does:

PrintAllRecords(): Shows a placeholder message for printing all records.
AddRecord(): Asks the user to add details (part number, part name, size, etc.) and prints the entered values.
DeleteLastRecord(): Placeholder function to delete the last record.
PrintNumRecords(): Placeholder function to print the number of records.
PrintDatabaseSize(): Placeholder function to print the database size.
PrintNumChanges(): Prints the number of changes to the database.

Input Types:

AddRecord(): Takes number inputs for part details (part number, size, cost, etc.)
PrintNumChanges(): Accepts to either print or increment the number of changes.

Output Types:

PrintAllRecords(), DeleteLastRecord(), PrintNumRecords(), PrintDatabaseSize(): Print a message to the user.
AddRecord(): Prints the entered part details.
PrintNumChanges(): Prints the number of changes to the database.

Algorithm:
Display menu.
Accept user input for choice.
Call corresponding function based on whats put in.
loop through the menu until the user exits.

Files Required:
lab1.c: Contains the main program and function that is implemented.
README.txt: Design document.
stdio.h: (for input/output operations)