static int FUN1(VAR1 **VAR2, char *VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    if (VAR5->VAR8 > 0 && VAR5->VAR9 > 0 && VAR5->VAR10[0] != '')
    {
        char VAR11[1024];
        char *VAR12;
        int VAR13, VAR14;
        VAR12 = strrchr(VAR3, '');
        if (VAR12)
            VAR12++;
        else
            VAR12 = VAR3;
        for (VAR13 = 0, VAR14 = strlen(VAR5->VAR10) - 1; VAR14 >= 0; VAR14--)
            if (VAR5->VAR10[VAR14] == '')
            {
                if (VAR13 == VAR5->VAR8 - 1)
                    break;
                else
                    VAR13++;
            }
        if (VAR13 == VAR5->VAR8 - 1 && VAR12 - VAR3 < sizeof(VAR11))
        {
            memcpy(VAR11, VAR3, VAR12 - VAR3);
            VAR11[VAR12 - VAR3] = 0;
            for (VAR13 = 1; VAR13 < VAR5->VAR9; VAR13++)
                FUN2(VAR11, "", 1024);
            FUN2(VAR11, VAR5->VAR10 + VAR14 + 1, 1024);
            if (!FUN3(VAR2, VAR11, VAR15, VAR7, NULL))
                return 0;
        }
    }
    return FUN4(VAR16);
}