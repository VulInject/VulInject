static int FUN1(VAR1 **VAR2, char *VAR3, VAR4 *VAR5)
{
    if (!FUN2(VAR2, VAR5->VAR6, VAR7))
        return 0;
    if (VAR5->VAR8 > 0 && VAR5->VAR9 > 0)
    {
        char VAR10[1024];
        char *VAR11;
        int VAR12, VAR13;
        VAR11 = strrchr(VAR3, '');
        if (VAR11)
            VAR11++;
        else
            VAR11 = VAR3;
        for (VAR12 = 0, VAR13 = strlen(VAR5->VAR6) - 1; VAR13 >= 0; VAR13--)
            if (VAR5->VAR6[VAR13] == '')
            {
                if (VAR12 == VAR5->VAR8 - 1)
                    break;
                else
                    VAR12++;
            }
        if (VAR12 == VAR5->VAR8 - 1)
        {
            memcpy(VAR10, VAR3, VAR11 - VAR3);
            VAR10[VAR11 - VAR3] = 0;
            for (VAR12 = 1; VAR12 < VAR5->VAR9; VAR12++)
                FUN3(VAR10, "", 1024);
            FUN3(VAR10, VAR5->VAR6 + VAR13 + 1, 1024);
            if (!FUN2(VAR2, VAR10, VAR7))
                return 0;
        }
    }
    return FUN4(VAR14);
};