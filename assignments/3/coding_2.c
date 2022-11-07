//
// Created by haoyu on 10/9/2022.
//

#include <stdlib.h>
#include <stdio.h>

typedef struct string {
    char *s;
    int len, cap;
} String;


String *append_string(String *s, char c) {
    if (s->cap == s->len) {
        s->cap <<= 1;
        s->s = (char *) realloc(s->s, s->cap);
    }
    s->s[s->len++] = c;
    s->s[s->len] = 0;
    return s;
}

char *getLine(String *s) {
    s->len = 0;
    char c;
    while (1) {
        c = getchar();
        if (c == -1 || c == '\n') return s->s;
        append_string(s, c);
    }
}

long solution(int l, char *S) {
    /*Complete this function*/
    long left = -1 - l, right = l << 1, res = 0, dp[l];
    memset(&dp, 0, l * sizeof (long ));
//  or using a for loop
//  for (int i = 0; i < l; i++) dp[i] = 0;

    for (int i = 0; S[i]; i++) {
        if (S[i] == '1') left = i;
        dp[i] = i - left;
    }
    for (int i = l - 1; i >= 0; i--) {
        if (S[i] == '1') right = i;
        if (dp[i] > right - i) dp[i] = right - i;
    }
    for (int i = 0; S[i]; i++) res += dp[i];
    return res;
}

int main(int argc, char *argv[]) {
    int t, D, C, M, L;
    String s1 = {malloc(10), 0, 10},
            s2 = {malloc(10), 0, 10};
    t = atoi(getLine(&s1));
    for (int i = 1; i <= t; ++i) {
        getLine(&s1);
        getLine(&s2);
        // sscanf(s1.s, "%d %d %d %d", &L, &D, &C, &M);
        if (argc == 1) {
            printf("Case #%d: %ld\n", i, solution(atoi(s1.s), s2.s));
        } else if (atoi(argv[1]) == i) {
            // printf("s1: %s\n", s1.s);
            printf("s: %s\n", s2.s);
        }
        s1.len = 0;
        s2.len = 0;
    }
    return 0;
}
