// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    // поместить сюда текст реализации алгоритма (на C++)
    if (b == 0)
        return a;
    return gcd(b, a % b)
}
