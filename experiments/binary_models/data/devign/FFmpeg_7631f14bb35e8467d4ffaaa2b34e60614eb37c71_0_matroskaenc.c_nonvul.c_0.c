static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8)
{
    VAR3 *VAR9;
    VAR10 *VAR11;
    int VAR12, VAR13;
    VAR12 = FUN2(&VAR9);
    if (VAR12 < 0)
        return VAR12;
    if (VAR7)
    {
        VAR12 = FUN3(VAR2, VAR4, VAR6, VAR9);
    }
    else if (VAR6->VAR14 == VAR15)
    {
        if (VAR8)
        {
            if (!VAR6->VAR16)
                VAR6->VAR16 = FUN4(VAR17, VAR6->VAR18);
            if (FUN5(VAR17, VAR6->VAR16) == VAR6->VAR18 && (!VAR6->VAR19 || FUN5(VAR17, FUN6(VAR6->VAR20 + 4)) != VAR6->VAR18))
            {
                int VAR21;
                FUN7(VAR9, 0x5a + VAR6->VAR19);
                FUN8(VAR9, VAR6->VAR16);
                for (VAR21 = 0; VAR21 < 0x5a - 8; VAR21++)
                    FUN9(VAR9, 0);
            }
            FUN10(VAR9, VAR6->VAR20, VAR6->VAR19);
        }
        else
        {
            if (!FUN4(VAR22, VAR6->VAR18))
                FUN11(VAR2, VAR23, "", FUN12(VAR6->VAR18));
            if (!VAR6->VAR16)
                VAR6->VAR16 = FUN4(VAR22, VAR6->VAR18);
            if (!VAR6->VAR16 && VAR6->VAR18 != VAR24)
            {
                FUN11(VAR2, VAR25, "", FUN12(VAR6->VAR18));
                VAR12 = FUN13(VAR26);
            }
            FUN14(VAR9, VAR6, VAR22, 0, 0);
        }
    }
    else if (VAR6->VAR14 == VAR27)
    {
        unsigned int VAR28;
        VAR28 = FUN4(VAR29, VAR6->VAR18);
        if (!VAR28)
        {
            FUN11(VAR2, VAR25, "", FUN12(VAR6->VAR18));
            VAR12 = FUN13(VAR26);
        }
        if (!VAR6->VAR16)
            VAR6->VAR16 = VAR28;
        FUN15(VAR2, VAR9, VAR6, VAR30);
    }
    VAR13 = FUN16(VAR9, &VAR11);
    if (VAR13)
        FUN17(VAR4, VAR31, VAR11, VAR13);
    FUN18(VAR11);
    return VAR12;
}