static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    int64_t VAR6 = FUN2(VAR4) + VAR5.VAR7;
    VAR8 *VAR9 = NULL, *VAR10 = NULL, *VAR11 = NULL;
    int VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    if (VAR2->VAR17->VAR18 < 1)
        return 0;
    VAR14 = VAR2->VAR17->VAR19[VAR2->VAR17->VAR18 - 1];
    VAR16 = VAR14->VAR20;
    for (VAR12 = 0; VAR12 < 3; VAR12++)
    {
        VAR8 **VAR21;
        uint32_t VAR22, VAR23;
        int VAR24;
        if (VAR6 - FUN2(VAR4) <= 12)
            break;
        VAR22 = FUN3(VAR4);
        VAR23 = FUN4(VAR4);
        FUN5(VAR4, 4);
        if (VAR22 < 12 || VAR22 - 12 > VAR6 - FUN2(VAR4))
            break;
        VAR22 -= 12;
        if (VAR23 == FUN6('', '', '', ''))
            VAR21 = &VAR11;
        else if (VAR23 == FUN6('', '', '', ''))
            VAR21 = &VAR9;
        else if (VAR23 == FUN6('', '', '', '') && VAR22 > 4)
        {
            FUN5(VAR4, 4);
            VAR22 -= 4;
            VAR21 = &VAR10;
        }
        else
            break;
        *VAR21 = FUN7(VAR22 + 1);
        if (!*VAR21)
            break;
        VAR24 = FUN8(VAR4, *VAR21, VAR22);
        if (VAR24 < 0)
        {
            FUN9(VAR21);
            return VAR24;
        }
        (*VAR21)[VAR22] = 0;
    }
    if (VAR11 && VAR9 && VAR10)
    {
        if (strcmp(VAR9, "") == 0)
        {
            int VAR25, VAR26, VAR27;
            if (sscanf(VAR10, "", &VAR25, &VAR26, &VAR27) == 3)
            {
                if (VAR25 > 0 && VAR25 < 16384)
                    VAR16->VAR28 = VAR25;
            }
        }
        if (strcmp(VAR9, "") != 0)
        {
            FUN10(&VAR2->VAR17->VAR29, VAR9, VAR10, VAR30 | VAR31);
            VAR9 = VAR10 = NULL;
        }
    }
    else
    {
        FUN11(VAR2->VAR17, VAR32, "" VAR33 "", VAR5.VAR7);
    }
    FUN12(VAR4, VAR6, VAR34);
    FUN9(&VAR9);
    FUN9(&VAR10);
    FUN9(&VAR11);
    return 0;
}