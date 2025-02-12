#include <stdio.h>

// The function prototypes everything
void PrintAllRecords();
void AddRecord();
void DeleteLastRecord();
void PrintNumRecords();
void PrintDatabaseSize();
void PrintNumChanges();

int main() {
    int choice;
    // it loops the Main menu 
    while (1) {
        // Displays the menu
        printf("\n--- Menu ---\n");
        printf("1. Print all records\n");
        printf("2. Add record\n");
        printf("3. Delete the last record\n");
        printf("4. Print number of records\n");
        printf("5. Print database size\n");
        printf("6. Print number of changes\n");
        printf("7. Exit\n");
        printf("enter your choice (1-7): ");
        scanf("%d", &choice);
        // Finds the user choice
        switch (choice) {
            case 1:
                PrintAllRecords();
                break;  // The break stops a fall through
            case 2:
                AddRecord();
                break;  // The break stops a fall through
            case 3:
                DeleteLastRecord();
                break;  // The break stops a fall through
            case 4:
                PrintNumRecords();
                break;  // The break stops a fall through
            case 5:
                PrintDatabaseSize();
                break;  // The break stops a fall through
            case 6:
                PrintNumChanges();
                break;  // The break stops a fall through
            case 7:
                printf("Exiting the program \n");
                return 0;  // Stops and exits the program
            default:
                printf("Wrong choice. enter a number between 1 and 7.\n");
        }
    }

    return 0;
}

// prints all of the records
void PrintAllRecords() {
    printf("You selected: Print all records\n");
    printf("(This function will print all records)\n");
}

// adds a record 
void AddRecord() {
    int partNumber;
    char partName[50];
    float partSize;
    char partSizeMetric[10];
    float partCost;

    printf("Selected: Add record\n");
    printf("Enter Part Number: ");
    scanf("%d", &partNumber);
    printf("Enter Part Name: ");
    scanf("%s", partName); // No spaces on it
    printf("Enter Part Size: ");
    scanf("%f", &partSize);
    printf("Enter Part Size Metric (e.g., mm, lbs): ");
    scanf("%s", partSizeMetric);
    printf("Enter Part Cost: ");
    scanf("%f", &partCost);

    printf("\nYou entered:\n");
    printf("Part Number: %d\n", partNumber);
    printf("Part Name: %s\n", partName);
    printf("Part Size: %.2f\n", partSize);
    printf("Part Size Metric: %s\n", partSizeMetric);
    printf("Part Cost: $%.2f\n", partCost);
}

// deletes the last record
void DeleteLastRecord() {
    printf("Selected: Delete the last record\n");
    printf("(This function will delete the last record.)\n");
}

// prints the number of records
void PrintNumRecords() {
    printf("Selected: Print number of records\n");
    printf("(This function will print the number of records.)\n");
}

// prints the database size
void PrintDatabaseSize() {
    printf("Selected: Print database size\n");
    printf("(This function will print the database size.)\n");
}

// prints the number of changes
void PrintNumChanges() {
    printf("Selected: Print number of changes\n");
    printf("(This function will print the number of changes.)\n");
}