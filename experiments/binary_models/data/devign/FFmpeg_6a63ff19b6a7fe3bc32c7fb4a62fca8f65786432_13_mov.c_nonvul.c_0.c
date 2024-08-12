static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    int VAR8, VAR9;
    if (VAR2->VAR10->VAR11 < 1)
        return 0;
    VAR7 = VAR2->VAR10->VAR12[VAR2->VAR10->VAR11 - 1];
    FUN2(VAR4);
    VAR9 = FUN3(VAR2, VAR4, &VAR8);
    if (VAR8 == VAR13)
    {
        FUN4(VAR4);
        FUN5(VAR4);
    }
    else
        FUN4(VAR4);
    VAR9 = FUN3(VAR2, VAR4, &VAR8);
    if (VAR8 == VAR14)
    {
        int VAR15 = FUN5(VAR4);
        FUN5(VAR4);
        FUN6(VAR4);
        FUN2(VAR4);
        FUN2(VAR4);
        VAR7->VAR16->VAR17 = FUN7(VAR18, VAR15);
        FUN8(VAR2->VAR10, "", VAR15);
        VAR9 = FUN3(VAR2, VAR4, &VAR8);
        if (VAR8 == VAR19)
        {
            FUN8(VAR2->VAR10, "", VAR9);
            if ((VAR20)VAR9 > (1 << 30))
                return -1;
            VAR7->VAR16->VAR21 = FUN9(VAR9 + VAR22);
            if (!VAR7->VAR16->VAR21)
                return FUN10(VAR23);
            FUN11(VAR4, VAR7->VAR16->VAR21, VAR9);
            VAR7->VAR16->VAR24 = VAR9;
            if (VAR7->VAR16->VAR17 == VAR25)
            {
                MPEG4AudioConfig VAR26;
                FUN12(&VAR26, VAR7->VAR16->VAR21, VAR7->VAR16->VAR24);
                if (VAR26.VAR27 > 7)
                    return -1;
                VAR7->VAR16->VAR28 = VAR29[VAR26.VAR27];
                if (VAR26.VAR30 == 29 && VAR26.VAR31 < 3)
                    VAR7->VAR16->VAR32 = VAR33[VAR26.VAR31];
                else
                    VAR7->VAR16->VAR32 = VAR26.VAR32;
                FUN8(VAR2->VAR10, ""
                               "",
                        VAR7->VAR16->VAR28, VAR26.VAR30, VAR26.VAR34, VAR26.VAR32, VAR26.VAR35);
                if (!(VAR7->VAR16->VAR17 = FUN7(VAR36, VAR26.VAR30)))
                    VAR7->VAR16->VAR17 = VAR25;
            }
        }
    }
    return 0;
}