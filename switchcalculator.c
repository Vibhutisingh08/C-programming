int calculator(int choice, int a, int b) {
    switch (choice) {
        case 1:
            return a + b;

        case 2:
            return a - b;

        case 3:
            return a * b;

        case 4:
            if (b != 0)
                return a / b;
            return 0;

        default:
            return 0;
    }
}