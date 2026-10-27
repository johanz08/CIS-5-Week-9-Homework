#include <iostream>

// Homework 9 — Johan Zuniga
// CIS 5 Week 09 · Menu on the lab

void printMenu() {
  std::cout << "1) Average  2) High  3) Quit\n";
}

double average(const int a[], int n) {
  if (n == 0) {
    return 0;
  }

  int total = 0;

  for (int i = 0; i < n; i++) {
    total += a[i];
  }

  return static_cast<double>(total) / n;
}

void printSummary(double avg) {
  std::cout << "Average: " << avg << "\n";
}

int high(const int a[], int n) {
  int highest = a[0];

  for (int i = 1; i < n; i++) {
    if (a[i] > highest) {
      highest = a[i];
    }
  }

  return highest;
}

int main() {
  const int N = 4;
  int scores[N] = {80, 90, 70, 100};
  int choice = 0;

  do {
    printMenu();
    std::cout << "Choice: ";
    std::cin >> choice;

    if (choice == 1) {
      double avg = average(scores, N);
      printSummary(avg);
    } else if (choice == 2) {
      int top = high(scores, N);
      std::cout << "High: " << top << "\n";
    }
  } while (choice != 3);

  return 0;
}
