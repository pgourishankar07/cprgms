for (int i = 2; i < n; i++) {
  int count = 0;
  for (int j = 1; j < n; j++) {
    if (arr[j] % i == 0 && count == 0) {
      count++;
      continue;
    }
    if (arr[j] % i == 0) {
      cout << endl << "______" << arr[j] << "______" << endl;
      arr[j] = 0;
    }
  }
}