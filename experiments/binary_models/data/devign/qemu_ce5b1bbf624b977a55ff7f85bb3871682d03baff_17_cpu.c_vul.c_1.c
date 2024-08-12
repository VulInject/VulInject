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
    FUN15(VAR6, &VAR33);
    if (FUN16())
    {
        FUN17();
    }
    FUN18(VAR34, VAR8);
    if (VAR8->VAR12.VAR22[VAR25] & VAR35 || VAR36 > 1)
    {
        FUN19(VAR8, &VAR13);
        if (VAR13 != NULL)
        {
            goto VAR17;
        }
    }
    FUN20(VAR8);
    if (FUN16())
    {
        VAR37 *VAR38 = FUN21(VAR37, 1);
        VAR8->VAR39 = FUN21(VAR40, 1);
        VAR8->VAR41 = FUN21(VAR40, 1);
        FUN22(VAR8->VAR41, FUN23(VAR8), "", ~0ull);
        FUN24(VAR8->VAR41, true);
        FUN25(VAR8->VAR39, FUN23(VAR8), "", FUN26(), 0, ~0ull);
        FUN27(VAR8->VAR41, 0, VAR8->VAR39, 0);
        FUN24(VAR8->VAR39, true);
        FUN28(VAR38, VAR8->VAR41, "");
        VAR6->VAR42 = 1;
        FUN29(VAR6, VAR38, 0);
        VAR8->VAR43.VAR44 = VAR45;
        FUN30(&VAR8->VAR43);
    }
    FUN31(VAR6);
    if (!FUN32(VAR12) && VAR6->VAR46 > 1 && !VAR14)
    {
        FUN14(""
                     "");
        VAR14 = true;
    }
    FUN33(VAR8, &VAR13);
    if (VAR13 != NULL)
    {
        goto VAR17;
    }
    FUN34(VAR6);
    VAR10->FUN35(VAR2, &VAR13);
VAR17:
    if (VAR13 != NULL)
    {
        FUN36(VAR4, VAR13);
        return;
    }
}