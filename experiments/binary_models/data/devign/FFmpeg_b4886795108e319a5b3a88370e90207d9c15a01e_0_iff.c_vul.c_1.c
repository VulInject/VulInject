static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    const VAR10 *VAR11 = VAR6->VAR12 >= 2 ? VAR6->VAR3 + FUN2(VAR6->VAR3) : NULL;
    const int VAR13 = VAR6->VAR12 >= 2 ? VAR6->VAR12 - FUN2(VAR6->VAR3) : 0;
    const VAR10 *VAR14 = VAR11 + VAR13;
    int VAR15, VAR16, VAR17;
    if ((VAR17 = FUN3(VAR2, VAR6)) < 0)
        return VAR17;
    if (VAR8->VAR18)
    {
        if ((VAR17 = VAR2->FUN4(VAR2, &VAR8->VAR19)) < 0)
        {
            FUN5(VAR2, VAR20, "");
            return VAR17;
        }
    }
    else if ((VAR17 = VAR2->FUN6(VAR2, &VAR8->VAR19)) < 0)
    {
        FUN5(VAR2, VAR20, "");
        return VAR17;
    }
    else if (VAR2->VAR21 <= 8 && VAR2->VAR22 != VAR23)
    {
        if ((VAR17 = FUN7(VAR2, (VAR24 *)VAR8->VAR19.VAR3[1])) < 0)
            return VAR17;
    }
    VAR8->VAR18 = 1;
    if (VAR2->VAR25 == FUN8('', '', '', ''))
    {
        if (VAR2->VAR22 == VAR26 || VAR2->VAR22 == VAR23)
        {
            for (VAR15 = 0; VAR15 < VAR2->VAR27; VAR15++)
            {
                VAR10 *VAR28 = &VAR8->VAR19.VAR3[0][VAR15 * VAR8->VAR19.VAR29[0]];
                memset(VAR28, 0, VAR2->VAR30);
                for (VAR16 = 0; VAR16 < VAR8->VAR31; VAR16++)
                {
                    VAR11 += FUN9(VAR8->VAR32, VAR8->VAR33, VAR11, VAR14);
                    FUN10(VAR28, VAR8->VAR32, VAR8->VAR33, VAR16);
                }
            }
        }
        else if (VAR8->VAR34)
        {
            for (VAR15 = 0; VAR15 < VAR2->VAR27; VAR15++)
            {
                VAR10 *VAR28 = &VAR8->VAR19.VAR3[0][VAR15 * VAR8->VAR19.VAR29[0]];
                memset(VAR8->VAR35, 0, VAR2->VAR30);
                for (VAR16 = 0; VAR16 < VAR8->VAR31; VAR16++)
                {
                    VAR11 += FUN9(VAR8->VAR32, VAR8->VAR33, VAR11, VAR14);
                    FUN10(VAR8->VAR35, VAR8->VAR32, VAR8->VAR33, VAR16);
                }
                FUN11((VAR24 *)VAR28, VAR8->VAR35, VAR8->VAR36, VAR8->VAR33);
            }
        }
        else
        {
            for (VAR15 = 0; VAR15 < VAR2->VAR27; VAR15++)
            {
                VAR10 *VAR28 = &VAR8->VAR19.VAR3[0][VAR15 * VAR8->VAR19.VAR29[0]];
                memset(VAR28, 0, VAR2->VAR30 << 2);
                for (VAR16 = 0; VAR16 < VAR8->VAR31; VAR16++)
                {
                    VAR11 += FUN9(VAR8->VAR32, VAR8->VAR33, VAR11, VAR14);
                    FUN12((VAR24 *)VAR28, VAR8->VAR32, VAR8->VAR33, VAR16);
                }
            }
        }
    }
    else if (VAR2->VAR22 == VAR26 || VAR2->VAR22 == VAR23)
    {
        for (VAR15 = 0; VAR15 < VAR2->VAR27; VAR15++)
        {
            VAR10 *VAR28 = &VAR8->VAR19.VAR3[0][VAR15 * VAR8->VAR19.VAR29[0]];
            VAR11 += FUN9(VAR28, VAR2->VAR30, VAR11, VAR14);
        }
    }
    else
    {
        for (VAR15 = 0; VAR15 < VAR2->VAR27; VAR15++)
        {
            VAR10 *VAR28 = &VAR8->VAR19.VAR3[0][VAR15 * VAR8->VAR19.VAR29[0]];
            VAR11 += FUN9(VAR8->VAR35, VAR2->VAR30, VAR11, VAR14);
            FUN11((VAR24 *)VAR28, VAR8->VAR35, VAR8->VAR36, VAR2->VAR30);
        }
    }
    *VAR4 = sizeof(VAR37);
    *(VAR37 *)VAR3 = VAR8->VAR19;
    return VAR13;
}