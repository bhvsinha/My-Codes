#include<stdio.h>
#include<cs50.h>
#include <ctype.h>
#include<string.h>

const int n = 26;
int sc(string s, int v[n]) {
    int score = 0;
    for (int i=0, z = strlen(s); i<z; i++) {
        if (isupper(s[i]))
        {
            score += v[s[i]-'A'];
        }
    }
        return score;
    }

int main()
{   char character[n];
    string s1 = get_string("Player 1: ");
    string s2 = get_string("Player 2: ");
    for (int i=0, z = strlen(s1); i<z; i++) {
        s1[i] = toupper(s1[i]);
        s2[i] = toupper(s2[i]);
    }
    char i = 'A';
    int j = 0;
    while(i <= 'Z' && j < n) {
        character[j] = i;
        i++;
        j++;
    }
    int value[] =  {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int score1 = sc(s1, value);
    int score2 = sc(s2, value);
    if (score1 > score2) {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2) {
        printf("Player 2 wins!\n");
    }
    else {
        printf("It's a tie!\n");
    }
}
