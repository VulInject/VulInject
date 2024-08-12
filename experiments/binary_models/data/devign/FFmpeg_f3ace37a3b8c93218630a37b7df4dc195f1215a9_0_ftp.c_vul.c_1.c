static int FUN1(VAR1 *VAR2, char **VAR3, const int VAR4[])
{
    int VAR5, VAR6, VAR7 = 0, VAR8 = 0, VAR9 = 0;
    char VAR10[VAR11];
    AVBPrint VAR12;
    if (VAR3)
        FUN2(&VAR12, 0, VAR13);
    while (!VAR9 || VAR7)
    {
        if ((VAR5 = FUN3(VAR2, VAR10, sizeof(VAR10))) < 0)
        {
            FUN4(&VAR12, NULL);
            return VAR5;
        }
        FUN5(VAR2, VAR14, "", VAR10);
        if (strlen(VAR10) < 4)
            continue;
        VAR5 = 0;
        for (VAR6 = 0; VAR6 < 3; ++VAR6)
        {
            if (VAR10[VAR6] < '' || VAR10[VAR6] > '')
                continue;
            VAR5 *= 10;
            VAR5 += VAR10[VAR6] - '';
        }
        VAR7 = !!(VAR10[3] == '');
        for (VAR6 = 0; VAR4[VAR6]; ++VAR6)
        {
            if (VAR5 == VAR4[VAR6])
            {
                if (VAR3)
                    FUN6(&VAR12, "", VAR10);
                VAR9 = 1;
                VAR8 = VAR5;
                break;
            }
        }
    }
    if (VAR3)
        FUN4(&VAR12, VAR3);
    return VAR8;
}