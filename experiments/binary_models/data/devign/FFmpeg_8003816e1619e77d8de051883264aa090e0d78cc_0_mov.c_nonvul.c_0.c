static int FUN1(VAR1 **VAR2, const char *VAR3, VAR4 *VAR5, VAR6 *VAR7, int VAR8, VAR9 *VAR10)
{
    if (VAR5->VAR11 > 0 && VAR5->VAR12 > 0)
    {
        char VAR13[1025];
        const char *VAR14;
        int VAR15, VAR16;
        VAR14 = strrchr(VAR3, '');
        if (VAR14)
            VAR14++;
        else
            VAR14 = VAR3;
        for (VAR15 = 0, VAR16 = strlen(VAR5->VAR17) - 1; VAR16 >= 0; VAR16--)
            if (VAR5->VAR17[VAR16] == '')
            {
                if (VAR15 == VAR5->VAR11 - 1)
                    break;
                else
                    VAR15++;
            }
        if (VAR15 == VAR5->VAR11 - 1 && VAR14 - VAR3 < sizeof(VAR13))
        {
            memcpy(VAR13, VAR3, VAR14 - VAR3);
            VAR13[VAR14 - VAR3] = 0;
            for (VAR15 = 1; VAR15 < VAR5->VAR12; VAR15++)
                FUN2(VAR13, "", sizeof(VAR13));
            FUN2(VAR13, VAR5->VAR17 + VAR16 + 1, sizeof(VAR13));
            if (strlen(VAR13) + 1 == sizeof(VAR13))
                return FUN3(VAR18);
            if (!FUN4(VAR2, VAR13, VAR19, VAR7, NULL))
                return 0;
        }
    }
    else if (VAR8)
    {
        FUN5(VAR10, VAR20, ""
                                   "");
        if (!FUN4(VAR2, VAR5->VAR17, VAR19, VAR7, NULL))
            return 0;
    }
    return FUN3(VAR18);
}