# Practical No. 5

## Title
Circular Queue Implementation Using Array for Parcel Handling System

## Algorithm

1. **Start**
2. Declare a static array to store parcels and initialize `front = -1` and `rear = -1`.
3. Display the menu:

   * Add Parcel
   * Delete Parcel
   * Display Queue
   * Exit
4. For **Add Parcel**:

   * Check whether the circular queue is full.
   * If full, display **"Queue Overflow"**.
   * Otherwise, insert the parcel at the rear.
   * Update `rear = (rear + 1) % size`.
5. For **Delete Parcel**:

   * Check whether the queue is empty.
   * If empty, display **"Queue Underflow"**.
   * Otherwise, remove the parcel from the front.
   * Update `front = (front + 1) % size`.
6. For **Display Queue**:

   * Check whether the queue is empty.
   * If not empty, traverse the queue from `front` to `rear` using circular indexing.
   * Display all parcels.
7. Repeat the menu until the user selects **Exit**.
8. **Stop**.
