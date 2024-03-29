#include <stdio.h>

void ReadWriteChar()
{
    int ch1, ch2;

    ch1 = getchar();
    ch2 = fgetc(stdin);

    putchar(ch1);
    fputc(ch2, stdout);
}

void ConsoleEOF()
{
    int ch;
    while (1)
    {
        ch = getchar();
        if (ch == EOF)
        {
            break;
        }
        putchar(ch);
    }
}

void WriteString()
{
    char *str = "Simple String";
    printf("1. puts test ------ \n");
    puts(str);
    puts("So Simple String");

    printf("2. fputs test ------ \n");
    fputs(str, stdout);
    printf("\n");
    fputs("So Simple String", stdout);
    printf("\n");

    printf("3. end of main ------ \n");
}

void ReadString()
{
    char str[7];
    int i;

    for (i = 0; i < 4; i++)
    {
        fgets(str, sizeof(str), stdin);
        printf("Read %d: %s  \n", i + 1, str);
    }
}

void NeedInputBufFlush()
{
    char perID[7];
    char name[10];

    fputs("input your personal id: ", stdout);
    fgets(perID, sizeof(perID), stdin);

    while (getchar() != '\n')
        ;

    fputs("input your name: ", stdout);
    fgets(name, sizeof(name), stdin);

    printf("personal id: %s \n", perID);
    printf("name: %s\n", name);
}

int main(int argc, char const *argv[])
{
    // ReadWriteChar();

    // ConsoleEOF();

    // WriteString();

    // ReadString();

    NeedInputBufFlush();
}