static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int64_t VAR6 = FUN2(VAR4) + VAR5;
    VAR7 *VAR8 = NULL, *VAR9 = NULL;
    int VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    if (VAR2->VAR15->VAR16 < 1)
        return 0;
    VAR12 = VAR2->VAR15->VAR17[VAR2->VAR15->VAR16 - 1];
    VAR14 = VAR12->VAR18;
    for (VAR10 = 0; VAR10 < 2; VAR10++)
    {
        VAR7 **VAR19;
        uint32_t VAR20, VAR21;
        if (VAR6 - FUN2(VAR4) <= 12)
            break;
        VAR20 = FUN3(VAR4);
        VAR21 = FUN4(VAR4);
        FUN5(VAR4, 4);
        if (VAR20 < 12 || VAR20 - 12 > VAR6 - FUN2(VAR4))
            break;
        VAR20 -= 12;
        if (VAR21 == FUN6('', '', '', ''))
            VAR19 = &VAR8;
        else if (VAR21 == FUN6('', '', '', '') && VAR20 > 4)
        {
            FUN5(VAR4, 4);
            VAR20 -= 4;
            VAR19 = &VAR9;
        }
        else
            break;
        *VAR19 = FUN7(VAR20 + 1);
        if (!*VAR19)
            break;
        FUN8(VAR4, *VAR19, VAR20);
        (*VAR19)[VAR20] = 0;
    }
    if (VAR8 && VAR9)
    {
        if (strcmp(VAR8, "") == 0)
        {
            int VAR22, VAR23, VAR24;
            if (sscanf(VAR9, "", &VAR22, &VAR23, &VAR24) == 3)
            {
                if (VAR22 > 0 && VAR22 < 16384)
                    VAR14->VAR25 = VAR22;
            }
        }
        if (strcmp(VAR8, "") != 0)
        {
            FUN9(&VAR2->VAR15->VAR26, VAR8, VAR9, VAR27 | VAR28);
            VAR8 = VAR9 = NULL;
        }
    }
    FUN10(VAR4, VAR6, VAR29);
    FUN11(&VAR8);
    FUN11(&VAR9);
    return 0;
}