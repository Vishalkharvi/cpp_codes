// Question
// Write a program that calculates number of words,
// number of sentences, number of uppercase,number of lowercase,
// number of digits from files of text.

#include <iostream>
using namespace std;

enum Identifiers
{
    UPPER,
    LOWER,
    DIGIT,
    EOW,
    EOS,
    IGNORE
};

struct number
{
    int upper = 0;
    int lower = 0;
    int digit = 0;
    int eow = 0;
    int eos = 0;
};

Identifiers decode(char c);
void counters(char c, number &n, bool &EowCheck, bool &EosCheck);
void print(number &n);

int main()
{
    number n;
    char c;
    static bool EosCheck = true;
    static bool EowCheck = true;
    FILE *fr;
    fr = fopen("fname.txt", "r");
    if (fr == NULL)
    {
        cout << "No file exists!";
        exit(0);
    }
    c = fgetc(fr);
    while (c != EOF)
    {
        counters(c, n, EowCheck, EosCheck);
        c = fgetc(fr);
    }
    fclose(fr);
    print(n);
}

Identifiers decode(char c)
{
    if (isupper(c))
    {
        return UPPER;
    }
    else if (islower(c))
    {
        return LOWER;
    }
    else if (isspace(c))
    {
        return EOW;
    }
    else if (c == '.' || c == '?' || c == '!')
    {
        return EOS;
    }
    else if (isdigit(c))
    {
        return DIGIT;
    }
    return IGNORE;
}

void counters(char c, number &n, bool &EowCheck, bool &EosCheck)
{
    Identifiers id = decode(c);
    switch (id)
    {
    case UPPER:
        n.upper++;
        EosCheck = true;
        EowCheck = true;
        break;
    case LOWER:
        n.lower++;
        EosCheck = true;
        EowCheck = true;
        break;
    case DIGIT:
        n.digit++;
        EosCheck = true;
        EowCheck = true;
        break;
    case EOW:
        if (EowCheck == true)
        {
            n.eow++;
            EowCheck = false;
        }
        EosCheck = true;
        break;
    case EOS:
        if (EosCheck == true)
        {
            n.eos++;
            EosCheck = false;
        }
        EowCheck = true;
        break;
    }
}

void print(number &n)
{
    cout << "Number of upper char= " << n.upper << endl;
    cout << "Number of lower char= " << n.lower << endl;
    cout << "Number of digit= " << n.digit << endl;
    cout << "Number of sentences= " << n.eos << endl;
    cout << "Number of words= " << n.eow + 1 << endl;
}
