#include <iostream>
#include <vector>
using namespace std;

// ---------------- MIN HEAP ----------------
class MinHeap {
public:
    vector<int> heap;

    // Function to insert a new element
    void insert(int value) {
        heap.push_back(value);
        int i = heap.size() - 1;

        // Up-Heapify (bubble up)
        while (i > 0 && heap[(i - 1) / 2] > heap[i]) {
            swap(heap[i], heap[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
    }

    // Function to delete root (minimum element)
    void deleteRoot() {
        if (heap.empty()) {
            cout << "Heap is empty!\n";
            return;
        }

        heap[0] = heap.back();
        heap.pop_back();

        int i = 0;

        // Down-Heapify
        while (true) {
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            int smallest = i;

            if (left < heap.size() && heap[left] < heap[smallest])
                smallest = left;
            if (right < heap.size() && heap[right] < heap[smallest])
                smallest = right;

            if (smallest == i)
                break;

            swap(heap[i], heap[smallest]);
            i = smallest;
        }
    }

    void display() {
        cout << "Min-Heap: ";
        for (int x : heap) cout << x << " ";
        cout << "\n";
    }
};

// ---------------- MAX HEAP ----------------
class MaxHeap {
public:
    vector<int> heap;

    void insert(int value) {
        heap.push_back(value);
        int i = heap.size() - 1;

        // Bubble up
        while (i > 0 && heap[(i - 1) / 2] < heap[i]) {
            swap(heap[i], heap[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
    }

    void deleteRoot() {
        if (heap.empty()) {
            cout << "Heap is empty!\n";
            return;
        }

        heap[0] = heap.back();
