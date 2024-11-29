#include <stdio.h>

// Declare global arrays and variables for the super set, set A, set B, and their bit strings
int superSet[20], superSetSize = 0, // Array and size for the super set
    setA[20], setASize = 0,         // Array and size for set A
    setB[20], setBSize = 0,         // Array and size for set B
    bitStringA[20], bitStringB[20], // Bit strings representing set A and set B
    bitStringUnion[20], bitStringIntersection[20]; // Union and intersection bit string results

// Function to find the position of an element in the super set
// Returns the index if found, otherwise -1
int search(int arr[], int size, int elem) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == elem) return i;
    }
    return -1;
}

// Function to input a set from the user
void getSet(int arr[], int *size) {
    printf("Enter set size: ");
    scanf("%d", size); // Get the size of the set
    printf("Enter set elements: ");
    for (int i = 0; i < *size; i++) {
        scanf("%d", &arr[i]); // Input each element of the set
    }
}

// Function to print the elements of a set
void printSet(int arr[], int size) {
    printf("{ ");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]); // Print each element
        if (i < size - 1) printf(", ");
    }
    printf(" }\n");
}

// Function to print a bit string
void printBitString(int bitString[]) {
    printf("{ ");
    for (int i = 0; i < superSetSize; i++) {
        printf("%d", bitString[i]);
        if (i < superSetSize - 1) printf(", ");
    }
    printf(" }\n");
}

// Function to generate a bit string for a given set
void generateBitString(int set[], int setSize, int bitString[]) {
    for (int i = 0; i < superSetSize; i++) bitString[i] = 0;
    for (int i = 0; i < setSize; i++) {
        int pos = search(superSet, superSetSize, set[i]);
        if (pos >= 0) bitString[pos] = 1;
    }
}

// Function to generate bit strings for both sets A and B
void generateBitStrings() {
    generateBitString(setA, setASize, bitStringA);
    generateBitString(setB, setBSize, bitStringB);
    printf("\nSet A Bit String: ");
    printBitString(bitStringA);
    printf("Set B Bit String: ");
    printBitString(bitStringB);
}

// Function to compute the union of two bit strings (A and B)
void setUnion() {
    for (int i = 0; i < superSetSize; i++) {
        bitStringUnion[i] = bitStringA[i] | bitStringB[i];
    }
}

// Function to compute the intersection of two bit strings (A and B)
void setIntersection() {
    for (int i = 0; i < superSetSize; i++) {
        bitStringIntersection[i] = bitStringA[i] & bitStringB[i];
    }
}

// Function to print the result of a set operation based on a bit string
void printResultAsSet(int bitString[]) {
    printf("{ ");
    int first = 1;
    for (int i = 0; i < superSetSize; i++) {
        if (bitString[i]) {
            if (!first) printf(", ");
            printf("%d", superSet[i]);
            first = 0;
        }
    }
    printf(" }\n");
}

int main() {
    printf("Set Operations Using Bit Strings : Union and Intersection\n");
        printf("\n");

    // Input the super set from the user
    printf("Enter elements for Super Set\n");
    getSet(superSet, &superSetSize);
    printf("\n");

    // Input set A from the user
    printf("Enter elements for Set A\n");
    getSet(setA, &setASize);
    printf("\n");
    // Input set B from the user
    printf("Enter elements for Set B\n");
    getSet(setB, &setBSize);
    printf("\n");
    // Generate and print bit strings for set A and set B
    generateBitStrings();

    // Compute and print the union of sets A and B
    printf("\nSet Union: ");
    setUnion();
    printBitString(bitStringUnion);
    printf("Union as Set: ");
    printResultAsSet(bitStringUnion);

    // Compute and print the intersection of sets A and B
    printf("\nSet Intersection: ");
    setIntersection();
    printBitString(bitStringIntersection);
    printf("Intersection as Set: ");
    printResultAsSet(bitStringIntersection);

    return 0;
}
