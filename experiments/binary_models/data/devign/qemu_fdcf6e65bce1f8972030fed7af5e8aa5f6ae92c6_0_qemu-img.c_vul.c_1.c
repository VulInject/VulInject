static int FUN1(char *VAR1, int VAR2)
{
    int VAR3, VAR4;
    FUN2("");
    FUN3(VAR5);
    VAR4 = 0;
    for (;;)
    {
        VAR3 = getchar();
        if (VAR3 == '')
            break;
        if (VAR4 < (VAR2 - 1))
            VAR1[VAR4++] = VAR3;
    }
    VAR1[VAR4] = '';
    return 0;
}