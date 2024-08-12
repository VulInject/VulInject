FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    char VAR6[256];
    int VAR7;
    VAR5 = VAR8;
    if (VAR9 < 0 || VAR5->VAR10 < 0)
        return VAR3;
    FUN2(VAR2, 0);
    FUN3(VAR2);
    if (VAR3 != 0)
    {
        snprintf(VAR6, sizeof(VAR6), "", VAR3);
        FUN4(VAR5, VAR6);
    }
    if (VAR5->VAR10 < 0)
        return VAR3;
    VAR3 = 0;
    VAR5->VAR11 = VAR12;
    VAR5->VAR13 = 0;
    while (VAR5->VAR13 == 0)
    {
        VAR7 = read(VAR5->VAR10, VAR6, 256);
        if (VAR7 > 0)
        {
            int VAR14;
            for (VAR14 = 0; VAR14 < VAR7; VAR14++)
                FUN5(VAR5, VAR6[VAR14]);
        }
        else if (VAR7 == 0 || VAR15 != VAR16)
        {
            return VAR3;
        }
    }
    VAR3 = VAR5->signal;
    VAR5->signal = 0;
    return VAR3;
}