static void FUN1(VAR1 *VAR2, uint32_t VAR3, bool VAR4, unsigned int VAR5, unsigned int VAR6, unsigned int VAR7, unsigned int VAR8, unsigned int VAR9, unsigned int VAR10)
{
    const VAR11 *VAR12;
    TCGv_i64 VAR13;
    VAR12 = FUN2(VAR2->VAR14, FUN3(VAR15, VAR8, VAR9, VAR5, VAR6, VAR7));
    if (!VAR12)
    {
        FUN4(VAR16, ""
                                 "",
                      VAR4 ? "" : "", VAR5, VAR6, VAR8, VAR9, VAR7);
        FUN5(VAR2);
        return;
    }
    if (!FUN6(VAR2->VAR17, VAR12, VAR4))
    {
        FUN5(VAR2);
        return;
    }
    if (VAR12->VAR18)
    {
        TCGv_ptr VAR19;
        FUN7(VAR2->VAR20 - 4);
        VAR19 = FUN8(VAR12);
        FUN9(VAR21, VAR19);
        FUN10(VAR19);
    }
    switch (VAR12->VAR22 & ~(VAR23 & ~VAR24))
    {
    case VAR25:
        return;
    case VAR26:
        VAR13 = FUN11(VAR2, VAR10);
        if (VAR4)
        {
            FUN12(VAR13);
        }
        else
        {
            FUN13(VAR13);
        }
        return;
    case VAR27:
        VAR13 = FUN11(VAR2, VAR10);
        FUN14(VAR13, VAR2->VAR17 << 2);
        return;
    default:
        break;
    }
    if (VAR28 && (VAR12->VAR22 & VAR29))
    {
        FUN15();
    }
    VAR13 = FUN11(VAR2, VAR10);
    if (VAR4)
    {
        if (VAR12->VAR22 & VAR30)
        {
            FUN14(VAR13, VAR12->VAR31);
        }
        else if (VAR12->VAR32)
        {
            TCGv_ptr VAR19;
            VAR19 = FUN8(VAR12);
            FUN16(VAR13, VAR21, VAR19);
            FUN10(VAR19);
        }
        else
        {
            FUN17(VAR13, VAR21, VAR12->VAR33);
        }
    }
    else
    {
        if (VAR12->VAR22 & VAR30)
        {
            return;
        }
        else if (VAR12->VAR34)
        {
            TCGv_ptr VAR19;
            VAR19 = FUN8(VAR12);
            FUN18(VAR21, VAR19, VAR13);
            FUN10(VAR19);
        }
        else
        {
            FUN19(VAR13, VAR21, VAR12->VAR33);
        }
    }
    if (VAR28 && (VAR12->VAR22 & VAR29))
    {
        FUN20();
        VAR2->VAR35 = VAR36;
    }
    else if (!VAR4 && !(VAR12->VAR22 & VAR37))
    {
        VAR2->VAR35 = VAR36;
    }
}