#include <iostream>
#include <algorithm> // Not strictly necessary for this solution, but good practice

void appendArray() {
    // Original arrays
    int size0 = 5;
    int size1 = 3;
    
    int* arr0 = new int[size0] {2, 4, 6, 7, 9};
    int* arr1 = new int[size1] {9, 7, 0};

    // Calculate the size of the new array
    int new_size = size0 + size1; // 5 + 3 = 8
    
    // Step 1: Create the new, larger array
    int* new_arr = new int[new_size];

    // --- Step 2: Copy the original arr0 elements using a loop ---
    std::cout << "Copying arr0 into new_arr..." << std::endl;
    for (int i = 0; i < size0; i++) {
        new_arr[i] = arr0[i];
    }

    // --- Step 3: Append arr1 elements using a loop ---
    std::cout << "Appending arr1 to new_arr..." << std::endl;
    for (int i = 0; i < size1; i++) {
        // The destination index starts where arr0 left off (at size0)
        // new_arr[5] = arr1[0]
        // new_arr[6] = arr1[1]
        // new_arr[7] = arr1[2]
        new_arr[size0 + i] = arr1[i];
    }
    
    // --- Step 4: Clean up old arrays and reassign (optional but recommended) ---
    delete[] arr0; // Free the memory of the original, smaller array
    delete[] arr1; // Free the memory of arr1

    // Reassign arr0 to point to the new, larger array
    arr0 = new_arr; 
    size0 = new_size; // Update the size variable for arr0

    // --- Step 5: Display the result ---
    std::cout << "Resulting arr0 (Size: " << size0 << "): ";
    for (int i = 0; i < size0; i++) {
        std::cout << arr0[i] << (i == size0 - 1 ? "" : ", ");
    }
    std::cout << std::endl; // Output: 2, 4, 6, 7, 9, 9, 7, 0
    
    // Final cleanup of the dynamically allocated array
    delete[] arr0;
}

int main() {
    appendArray();
    return 0;
}