#include <stdio.h>
#include "mstring.h"

int mstrlen(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        i = i + 1;
    }
    return i;
}

void mstrcpy(char dest[], char orig[]) {
    int i = 0;
    while (orig[i] != '\0') {
        dest[i] = orig[i];
        i = i + 1;
    }
    dest[i] = '\0';
}

void mstrcat(char dest[], char orig[]) {
    int i = 0;
    int j = 0;
    
    while (dest[i] != '\0') {
        i = i + 1;
    }
    
    while (orig[j] != '\0') {
        dest[i] = orig[j];
        i = i + 1;
        j = j + 1;
    }
    dest[i] = '\0';
}

int mstrcmp(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] < b[i]) return -1;
        if (a[i] > b[i]) return 1;
        i = i + 1;
    }
    if (a[i] == '\0' && b[i] == '\0') return 0;
    if (a[i] == '\0') return -1;
    return 1;
}

void mstrupper(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
        i = i + 1;
    }
}

void mstrlower(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
        i = i + 1;
    }
}

int mcount_vogais(char s[]) {
    int i = 0, cont = 0;
    while (s[i] != '\0') {
        char c = s[i];
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            cont = cont + 1;
        }
        i = i + 1;
    }
    return cont;
}

int meh_palindromo(char s[]) {
    int inicio = 0;
    int fim = mstrlen(s) - 1;
    
    while (inicio < fim) {
        if (s[inicio] != s[fim]) {
            return 0;
        }
        inicio = inicio + 1;
        fim = fim - 1;
    }
    return 1;
}

void mremove_espacos(char s[]) {
    int i = 0, j = 0;
    
    while (s[i] != '\0') {
        if (s[i] != ' ') {
            s[j] = s[i];
            j = j + 1;
        }
        i = i + 1;
    }
    s[j] = '\0';
}