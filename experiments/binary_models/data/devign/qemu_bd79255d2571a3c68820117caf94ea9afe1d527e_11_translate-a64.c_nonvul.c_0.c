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
        TCGv_i32 VAR20;
        uint32_t VAR21;
        FUN7(VAR2->VAR22 - 4);
        VAR19 = FUN8(VAR12);
        VAR21 = FUN9(VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR4);
        VAR20 = FUN10(VAR21);
        FUN11(VAR23, VAR19, VAR20);
        FUN12(VAR19);
        FUN13(VAR20);
    }
    switch (VAR12->VAR24 & ~(VAR25 & ~VAR26))
    {
    case VAR27:
        return;
    case VAR28:
        VAR13 = FUN14(VAR2, VAR10);
        if (VAR4)
        {
            FUN15(VAR13);
        }
        else
        {
            FUN16(VAR13);
        }
        return;
    case VAR29:
        VAR13 = FUN14(VAR2, VAR10);
        FUN17(VAR13, VAR2->VAR17 << 2);
        return;
    case VAR30:
        VAR13 = FUN14(VAR2, VAR10);
        FUN18(VAR23, VAR13);
        return;
    default:
        break;
    }
    if ((VAR2->VAR31->VAR32 & VAR33) && (VAR12->VAR24 & VAR34))
    {
        FUN19();
    }
    VAR13 = FUN14(VAR2, VAR10);
    if (VAR4)
    {
        if (VAR12->VAR24 & VAR35)
        {
            FUN17(VAR13, VAR12->VAR36);
        }
        else if (VAR12->VAR37)
        {
            TCGv_ptr VAR19;
            VAR19 = FUN8(VAR12);
            FUN20(VAR13, VAR23, VAR19);
            FUN12(VAR19);
        }
        else
        {
            FUN21(VAR13, VAR23, VAR12->VAR38);
        }
    }
    else
    {
        if (VAR12->VAR24 & VAR35)
        {
            return;
        }
        else if (VAR12->VAR39)
        {
            TCGv_ptr VAR19;
            VAR19 = FUN8(VAR12);
            FUN22(VAR23, VAR19, VAR13);
            FUN12(VAR19);
        }
        else
        {
            FUN23(VAR13, VAR23, VAR12->VAR38);
        }
    }
    if ((VAR2->VAR31->VAR32 & VAR33) && (VAR12->VAR24 & VAR34))
    {
        FUN24();
        VAR2->VAR40 = VAR41;
    }
    else if (!VAR4 && !(VAR12->VAR24 & VAR42))
    {
        VAR2->VAR40 = VAR41;
    }
}