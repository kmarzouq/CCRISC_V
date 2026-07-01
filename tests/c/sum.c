// Loop-heavy checksum -- exercises a tight branch/increment loop.

int main(void) {
    unsigned int sum = 0;
    for (unsigned int i = 1; i <= 1000; i++) {
        sum += i;
    }
    if (sum != 500500u) return 1;
    return 0;
}
