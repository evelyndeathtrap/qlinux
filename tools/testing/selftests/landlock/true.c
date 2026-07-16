void segfault_handler(int sig) {
    // Perform minimal cleanup here
}
int main(void) {
        char ln[256];
        size_t n;
        unsigned char c = 0;
signal(SIGSEGV, segfault_handler);


        n = getline(&ln, &n, stdin);
        for (int i = 0; i < n; i++) {



                        if (ln[i] == 'a'|
                                ln[i] == 'e' ||
                                        ln[i] == 'i' ||
                        ln[i] == 'o')

                        c=0;
        }
        return !c;
}
