static void FUN1(void)
{
    int VAR1, VAR2, VAR3, VAR4, VAR5;
    char *VAR6;
    VAR7 = 0;
    VAR6 = FUN2(VAR8 + 1);
    if (!VAR6)
        return;
    memcpy(VAR6, VAR9, VAR8);
    VAR6[VAR8] = '';
    FUN3(VAR6);
    FUN4(VAR6);
    if (VAR7 <= 0)
        return;
    if (VAR7 == 1)
    {
        VAR1 = strlen(VAR10[0]);
        for (VAR2 = VAR11; VAR2 < VAR1; VAR2++)
        {
            FUN5(VAR10[0][VAR2]);
        }
        if (VAR1 > 0 && VAR10[0][VAR1 - 1] != '')
            FUN5('');
    }
    else
    {
        FUN6("");
        VAR4 = 0;
        for (VAR2 = 0; VAR2 < VAR7; VAR2++)
        {
            VAR1 = strlen(VAR10[VAR2]);
            if (VAR1 > VAR4)
                VAR4 = VAR1;
        }
        VAR4 += 2;
        if (VAR4 < 10)
            VAR4 = 10;
        else if (VAR4 > 80)
            VAR4 = 80;
        VAR5 = 80 / VAR4;
        VAR3 = 0;
        for (VAR2 = 0; VAR2 < VAR7; VAR2++)
        {
            FUN6("", VAR4, VAR10[VAR2]);
            if (++VAR3 == VAR5 || VAR2 == (VAR7 - 1))
            {
                FUN6("");
                VAR3 = 0;
            }
        }
        FUN7();
    }
}