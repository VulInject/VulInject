int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    int VAR8, VAR9;
    if (VAR2->VAR10 < 1)
        return 0;
    VAR7 = VAR2->VAR11[VAR2->VAR10 - 1];
    FUN2(VAR4);
    VAR9 = FUN3(VAR2, VAR4, &VAR8);
    if (VAR8 == VAR12)
    {
        FUN4(VAR4);
        FUN5(VAR4);
    }
    else
        FUN4(VAR4);
    VAR9 = FUN3(VAR2, VAR4, &VAR8);
    if (VAR8 == VAR13)
    {
        int VAR14 = FUN5(VAR4);
        FUN5(VAR4);
        FUN6(VAR4);
        FUN2(VAR4);
        FUN2(VAR4);
        VAR7->VAR15->VAR16 = FUN7(VAR17, VAR14);
        FUN8(VAR2, "", VAR14);
        VAR9 = FUN3(VAR2, VAR4, &VAR8);
        if (VAR8 == VAR18)
        {
            FUN8(VAR2, "", VAR9);
            if ((VAR19)VAR9 > (1 << 30))
                return -1;
            VAR7->VAR15->VAR20 = FUN9(VAR9 + VAR21);
            if (!VAR7->VAR15->VAR20)
                return FUN10(VAR22);
            FUN11(VAR4, VAR7->VAR15->VAR20, VAR9);
            VAR7->VAR15->VAR23 = VAR9;
            if (VAR7->VAR15->VAR16 == VAR24)
            {
                MPEG4AudioConfig VAR25;
                FUN12(&VAR25, VAR7->VAR15->VAR20, VAR7->VAR15->VAR23);
                VAR7->VAR15->VAR26 = VAR25.VAR26;
                if (VAR25.VAR27 == 29 && VAR25.VAR28 < 3)
                    VAR7->VAR15->VAR29 = VAR30[VAR25.VAR28];
                else if (VAR25.VAR31)
                    VAR7->VAR15->VAR29 = VAR25.VAR31;
                else
                    VAR7->VAR15->VAR29 = VAR25.VAR29;
                FUN8(VAR2, ""
                            "",
                        VAR7->VAR15->VAR26, VAR25.VAR27, VAR25.VAR32, VAR25.VAR29, VAR25.VAR31);
                if (!(VAR7->VAR15->VAR16 = FUN7(VAR33, VAR25.VAR27)))
                    VAR7->VAR15->VAR16 = VAR24;
            }
        }
    }
    return 0;