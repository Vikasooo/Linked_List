#include <LinkedList.h>

LinkedList<int> myList;

void setup() {
  Serial.begin(115200);

  // Adding elements to the list
  myList.add(42);
  myList.add(123);
  myList.add(56);

  Serial.println("");
  // Printing the initial list
  Serial.println("Initial List:");
  printList();

  // Inserting an element at index 1
  myList.add(1, 99);
  Serial.println("\nAfter inserting 99 at index 1:");
  printList();

  // Retrieving and printing the element at index 2
  int value = myList.get(2);
  Serial.print("\nElement at index 2: ");
  Serial.println(value);

  // Changing the first element to 777
  myList.set(0, 777);
  Serial.println("\nAfter changing the first element to 777:");
  printList();

  // Removing the element at index 3
  myList.remove(3);
  Serial.println("\nAfter removing element at index 3:");
  printList();
 
  // Changing the last element to 999
  myList.set(myList.size() - 1, 999);
  Serial.println("\nAfter changing the last element to 999:");
  printList();

  // Clearing the list
  myList.clear();
  Serial.println("\nAfter clearing the list:");
  printList();
}

void loop() {
  // Nothing to do in the loop for this example
}

void printList() {
  int size = myList.size();
  Serial.print("List size: ");
  Serial.println(size);

  Serial.print("Elements: ");
  for (int i = 0; i < size; ++i) {
    Serial.print(myList.get(i));
    Serial.print(" ");
  }
  Serial.println();
}

