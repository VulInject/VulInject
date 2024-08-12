static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOV_atom_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8->VAR9[VAR2->VAR8->VAR10 - 1];
    int VAR11, VAR12;
    FUN2(VAR4);
    VAR12 = FUN3(VAR2, VAR4, &VAR11);
    if (VAR11 == VAR13)
    {
        FUN4(VAR4);
        FUN5(VAR4);
    }
    else
        FUN4(VAR4);
    VAR12 = FUN3(VAR2, VAR4, &VAR11);
    if (VAR11 == VAR14)
    {
        int VAR15 = FUN5(VAR4);
        FUN5(VAR4);
        FUN6(VAR4);
        FUN2(VAR4);
        FUN2(VAR4);
        VAR7->VAR16->VAR17 = FUN7(VAR18, VAR15);
        FUN8(VAR2->VAR8, "", VAR15);
        VAR12 = FUN3(VAR2, VAR4, &VAR11);
        if (VAR11 == VAR19)
        {
            FUN8(VAR2->VAR8, "", VAR12);
            VAR7->VAR16->VAR20 = FUN9(VAR12 + VAR21);
            if (!VAR7->VAR16->VAR20)
                return FUN10(VAR22);
            FUN11(VAR4, VAR7->VAR16->VAR20, VAR12);
            VAR7->VAR16->VAR23 = VAR12;
            if ((*VAR7->VAR16->VAR20 >> 3) == 29)
            {
                VAR7->VAR16->VAR17 = VAR24;
            }
        }
    }
    return 0;