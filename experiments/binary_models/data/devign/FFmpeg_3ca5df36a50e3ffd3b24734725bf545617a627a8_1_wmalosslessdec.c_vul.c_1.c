static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = &VAR8->VAR12;
    const VAR13 *VAR14 = VAR6->VAR3;
    int VAR15 = VAR6->VAR16;
    int VAR17, VAR18, VAR19;
    VAR8->VAR20.VAR21 = 0;
    if (VAR8->VAR22 || VAR8->VAR23)
    {
        VAR8->VAR22 = 0;
        if (VAR15 < VAR2->VAR24)
            return 0;
        VAR8->VAR25 = VAR15 - VAR2->VAR24;
        VAR15 = VAR2->VAR24;
        VAR8->VAR26 = VAR15 << 3;
        FUN2(VAR11, VAR14, VAR8->VAR26);
        VAR18 = FUN3(VAR11, 4);
        FUN4(VAR11, 1);
        VAR19 = FUN5(VAR11);
        if (VAR19)
            FUN6(VAR2, "");
        VAR17 = FUN3(VAR11, VAR8->VAR27);
        if (!VAR8->VAR23 && ((VAR8->VAR18 + 1) & 0xF) != VAR18)
        {
            VAR8->VAR23 = 1;
            FUN7(VAR2, VAR28, "", VAR8->VAR18, VAR18);
        }
        VAR8->VAR18 = VAR18;
        if (VAR17 > 0)
        {
            int VAR29 = VAR8->VAR26 - FUN8(VAR11);
            if (VAR17 >= VAR29)
            {
                VAR17 = VAR29;
                VAR8->VAR22 = 1;
            }
            FUN9(VAR8, VAR11, VAR17, 1);
            if (VAR17 < VAR29 && !VAR8->VAR23)
                FUN10(VAR8);
        }
        else if (VAR8->VAR30 - VAR8->VAR31)
        {
            FUN11(VAR2, "", VAR8->VAR30 - VAR8->VAR31);
        }
        if (VAR8->VAR23)
        {
            VAR8->VAR30 = 0;
            VAR8->VAR23 = 0;
            FUN12(&VAR8->VAR32, VAR8->VAR33, VAR34);
        }
    }
    else
    {
        int VAR35;
        VAR8->VAR26 = (VAR6->VAR16 - VAR8->VAR25) << 3;
        FUN2(VAR11, VAR6->VAR3, VAR8->VAR26);
        FUN4(VAR11, VAR8->VAR36);
        if (VAR8->VAR37 && FUN13(VAR8, VAR11) > VAR8->VAR27 && (VAR35 = FUN14(VAR11, VAR8->VAR27)) && VAR35 <= FUN13(VAR8, VAR11))
        {
            FUN9(VAR8, VAR11, VAR35, 0);
            VAR8->VAR22 = !FUN10(VAR8);
        }
        else if (!VAR8->VAR37 && VAR8->VAR30 > FUN8(&VAR8->VAR11))
        {
            VAR8->VAR22 = !FUN10(VAR8);
        }
        else
        {
            VAR8->VAR22 = 1;
        }
    }
    if (VAR8->VAR22 && !VAR8->VAR23 && FUN13(VAR8, VAR11) > 0)
    {
        FUN9(VAR8, VAR11, FUN13(VAR8, VAR11), 0);
    }
    *(VAR38 *)VAR3 = VAR8->VAR20;
    *VAR4 = VAR8->VAR20.VAR21 > 0;
    VAR8->VAR36 = FUN8(VAR11) & 7;
    return (VAR8->VAR23) ? VAR39 : FUN8(VAR11) >> 3;
}