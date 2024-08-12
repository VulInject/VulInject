static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = &VAR8->VAR12;
    const VAR13 *VAR14 = VAR6->VAR3;
    int VAR15 = VAR6->VAR16;
    int VAR17;
    int VAR18;
    *VAR4 = 0;
    if (VAR8->VAR19 || VAR8->VAR20)
    {
        VAR8->VAR19 = 0;
        if (VAR15 < VAR2->VAR21)
        {
            FUN2(VAR2, VAR22, "", VAR15, VAR2->VAR21);
            return VAR23;
        }
        VAR8->VAR24 = VAR15 - VAR2->VAR21;
        VAR15 = VAR2->VAR21;
        VAR8->VAR25 = VAR15 << 3;
        FUN3(VAR11, VAR14, VAR8->VAR25);
        VAR18 = FUN4(VAR11, 4);
        FUN5(VAR11, 2);
        VAR17 = FUN4(VAR11, VAR8->VAR26);
        FUN6(VAR2, "", VAR2->VAR27, VAR17);
        if (!VAR8->VAR20 && ((VAR8->VAR18 + 1) & 0xF) != VAR18)
        {
            VAR8->VAR20 = 1;
            FUN2(VAR2, VAR22, "", VAR8->VAR18, VAR18);
        }
        VAR8->VAR18 = VAR18;
        if (VAR17 > 0)
        {
            int VAR28 = VAR8->VAR25 - FUN7(VAR11);
            if (VAR17 >= VAR28)
            {
                VAR17 = VAR28;
                VAR8->VAR19 = 1;
            }
            FUN8(VAR8, VAR11, VAR17, 1);
            FUN6(VAR2, "", VAR8->VAR29 - VAR8->VAR30);
            if (!VAR8->VAR20)
                FUN9(VAR8, VAR3, VAR4);
        }
        else if (VAR8->VAR29 - VAR8->VAR30)
        {
            FUN6(VAR2, "", VAR8->VAR29 - VAR8->VAR30);
        }
        if (VAR8->VAR20)
        {
            VAR8->VAR29 = 0;
            VAR8->VAR20 = 0;
        }
    }
    else
    {
        int VAR31;
        VAR8->VAR25 = (VAR6->VAR16 - VAR8->VAR24) << 3;
        FUN3(VAR11, VAR6->VAR3, VAR8->VAR25);
        FUN5(VAR11, VAR8->VAR32);
        if (VAR8->VAR33 && FUN10(VAR8, VAR11) > VAR8->VAR26 && (VAR31 = FUN11(VAR11, VAR8->VAR26)) && VAR31 <= FUN10(VAR8, VAR11))
        {
            FUN8(VAR8, VAR11, VAR31, 0);
            VAR8->VAR19 = !FUN9(VAR8, VAR3, VAR4);
        }
        else if (!VAR8->VAR33 && VAR8->VAR29 > FUN7(&VAR8->VAR11))
        {
            VAR8->VAR19 = !FUN9(VAR8, VAR3, VAR4);
        }
        else
            VAR8->VAR19 = 1;
    }
    if (VAR8->VAR19 && !VAR8->VAR20 && FUN10(VAR8, VAR11) > 0)
    {
        FUN8(VAR8, VAR11, FUN10(VAR8, VAR11), 0);
    }
    VAR8->VAR32 = FUN7(VAR11) & 7;
    if (VAR8->VAR20)
        return VAR23;
    return FUN7(VAR11) >> 3;
}