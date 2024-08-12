static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR9 *VAR10 = FUN4(VAR2);
    VAR11 *VAR12 = &VAR8->VAR12;
    VAR3 *VAR13 = NULL;
    static bool VAR14;
    if (VAR10->VAR15 && !FUN5())
    {
        char *VAR16 = FUN6(VAR10);
        FUN7(&VAR13, "", VAR16);
        FUN8(VAR16);
        goto VAR17;
    }
    if (VAR8->VAR18 == VAR19)
    {
        FUN7(VAR4, "");
        return;
    }
    FUN9(VAR8, &VAR13);
    if (VAR13)
    {
        goto VAR17;
    }
    if (FUN10(VAR8) && (VAR8->VAR20 || VAR8->VAR21))
    {
        FUN11(VAR8);
        if (VAR8->VAR21)
        {
            FUN7(&VAR13, FUN5() ? "" : "");
            goto VAR17;
        }
    }
    if (FUN12(VAR12))
    {
        VAR12->VAR22[VAR23] &= ~VAR24;
        VAR12->VAR22[VAR23] |= (VAR12->VAR22[VAR25] & VAR24);
    }
    if (VAR12->VAR22[VAR23] & VAR26)
    {
        if (FUN5())
        {
            uint32_t VAR27 = FUN13();
            static bool VAR28;
            if (VAR8->VAR27)
            {
                VAR8->VAR29 = VAR27;
            }
            if (VAR8->VAR29 != VAR27 && VAR8->VAR29 != 0 && !VAR28)
            {
                FUN14(""
                            "",
                            VAR27, VAR8->VAR29);
                VAR28 = true;
            }
            if (VAR8->VAR29 && (VAR8->VAR29 > VAR30 || VAR8->VAR29 < 32))
            {
                FUN7(VAR4, ""
                                 "",
                           VAR30, VAR8->VAR29);
                return;
            }
        }
        else
        {
            if (VAR8->VAR29 && VAR8->VAR29 != VAR31)
            {
                FUN7(VAR4, "", VAR31);
                return;
            }
        }
        if (VAR8->VAR29 == 0)
        {
            VAR8->VAR29 = VAR31;
        }
    }
    else
    {
        if (VAR8->VAR29 != 0)
        {
            FUN7(VAR4, "");
            return;
        }
        if (VAR12->VAR22[VAR25] & VAR32)
        {
            VAR8->VAR29 = 36;
        }
        else
        {
            VAR8->VAR29 = 32;
        }
    }
    FUN15(VAR6, &VAR13);
    if (VAR13 != NULL)
    {
        FUN16(VAR4, VAR13);
        return;
    }
    if (FUN17())
    {
        FUN18();
    }
    FUN19(VAR33, VAR8);
    if (VAR8->VAR12.VAR22[VAR25] & VAR34 || VAR35 > 1)
    {
        FUN20(VAR8, &VAR13);
        if (VAR13 != NULL)
        {
            goto VAR17;
        }
    }
    FUN21(VAR8);
    if (FUN17())
    {
        VAR36 *VAR37 = FUN22(VAR6->VAR38, "");
        VAR36 *VAR39 = FUN23(VAR36, 1);
        VAR8->VAR40 = FUN23(VAR41, 1);
        VAR8->VAR42 = FUN23(VAR41, 1);
        FUN24(VAR8->VAR42, FUN25(VAR8), "", ~0ull);
        FUN26(VAR8->VAR42, true);
        FUN27(VAR8->VAR40, FUN25(VAR8), "", FUN28(), 0, ~0ull);
        FUN29(VAR8->VAR42, 0, VAR8->VAR40, 0);
        FUN26(VAR8->VAR40, true);
        FUN30(VAR39, VAR8->VAR42, "");
        VAR6->VAR43 = 2;
        FUN31(VAR6, VAR37, 0);
        FUN31(VAR6, VAR39, 1);
        VAR8->VAR44.VAR45 = VAR46;
        FUN32(&VAR8->VAR44);
    }
    FUN33(VAR6);
    if (!FUN34(VAR12) && VAR6->VAR47 > 1 && !VAR14)
    {
        FUN35(""
                     "");
        VAR14 = true;
    }
    FUN36(VAR8, &VAR13);
    if (VAR13 != NULL)
    {
        goto VAR17;
    }
    FUN37(VAR6);
    VAR10->FUN38(VAR2, &VAR13);
VAR17:
    if (VAR13 != NULL)
    {
        FUN16(VAR4, VAR13);
        return;
    }
}