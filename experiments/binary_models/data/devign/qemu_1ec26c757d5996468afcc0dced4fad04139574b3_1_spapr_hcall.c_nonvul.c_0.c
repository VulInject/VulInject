static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    target_ulong VAR8 = FUN2(VAR7[0]);
    target_ulong VAR9;
    uint32_t VAR10;
    VAR11 *VAR12, *VAR13, *VAR14, *VAR15;
    bool VAR16;
    VAR17 *VAR18 = NULL;
    bool VAR19 = false;
    VAR10 = FUN3(VAR5, VAR3, &VAR8, &VAR19, &VAR18);
    if (VAR18)
    {
        FUN4(VAR18);
        return VAR20;
    }
    if (VAR3->VAR21 != VAR10)
    {
        FUN5(VAR10, &VAR18);
        if (VAR18)
        {
            if (!VAR19)
            {
                FUN4(VAR18);
                return VAR20;
            }
            VAR18 = NULL;
        }
    }
    VAR9 = VAR8;
    VAR12 = FUN6(VAR9, 1);
    VAR13 = FUN6(VAR9, 5);
    if (FUN7(VAR13, VAR22))
    {
        FUN8("");
        FUN9(VAR23);
    }
    VAR16 = FUN7(VAR13, VAR24);
    FUN10(VAR13, VAR24);
    if (!VAR16 && !FUN7(VAR13, VAR25))
    {
        int VAR26 = FUN11(FUN12(VAR5)->VAR27);
        if (VAR5->VAR28 == VAR29)
        {
            FUN8("");
            FUN9(1);
        }
        if (VAR5->VAR30 < VAR26)
        {
            FUN13(VAR5, VAR26, &VAR31);
            FUN14(VAR5);
        }
    }
    VAR14 = FUN15(VAR5->VAR32);
    FUN10(VAR14, VAR24);
    FUN16(VAR5->VAR32, VAR5->VAR33, VAR13);
    FUN17(VAR13);
    VAR15 = FUN18();
    VAR5->VAR34 = FUN19(VAR15, VAR14, VAR5->VAR32);
    if (VAR16)
    {
        if (FUN20() && !FUN21())
        {
            FUN8("");
            FUN9(VAR23);
        }
        FUN22(VAR5->VAR32, VAR24);
    }
    else
    {
        if (FUN20() && FUN21() && !FUN23())
        {
            FUN8("");
            FUN9(VAR23);
        }
    }
    VAR5->VAR35 = !FUN7(VAR12, VAR36);
    if (!VAR5->VAR34)
    {
        VAR5->VAR34 = (FUN24(VAR5, VAR7[1], VAR7[2], VAR15) != 0);
    }
    FUN17(VAR15);
    if (VAR5->VAR34)
    {
        FUN25(VAR37);
    }
    else
    {
        if ((VAR5->VAR38 & VAR39) && !VAR16)
        {
            FUN26(VAR5);
        }
    }
    return VAR40;
}