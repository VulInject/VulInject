static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2, VAR5, VAR2);
    hwaddr VAR7, VAR8;
    Int128 VAR9, VAR10;
    void *VAR11;
    int VAR12;
    VAR13 *VAR14;
    bool VAR15;
    if (FUN3(VAR4))
    {
        FUN4(VAR4->VAR16, VAR4->VAR16 + FUN5(FUN6(VAR4->VAR17, FUN7())));
        return;
    }
    if (FUN8((VAR4->VAR16 & ~VAR18) != (VAR4->VAR19 & ~VAR18)))
    {
        FUN9("", VAR20);
        return;
    }
    VAR7 = FUN10(VAR4->VAR16);
    VAR9 = FUN11(VAR4->VAR16);
    VAR9 = FUN12(VAR9, VAR4->VAR17);
    VAR9 = FUN13(VAR9, FUN14(VAR18));
    if (FUN15(FUN11(VAR7), VAR9))
    {
        return;
    }
    VAR8 = FUN5(FUN6(VAR9, FUN7()));
    if (VAR6->VAR21 == VAR22)
    {
        VAR13 *VAR14;
        hwaddr VAR23 = 0;
        FUN16(VAR14, &VAR6->VAR24, VAR25)
        {
            if (FUN17(VAR14->VAR26, VAR14->VAR27 - VAR14->VAR26 + 1, VAR4->VAR16, FUN5(VAR4->VAR17)))
            {
                VAR12 = -1;
                goto VAR28;
            }
        }
        VAR12 = FUN18(VAR6, VAR4, &VAR23);
        if (VAR12)
        {
            goto VAR28;
        }
        FUN19(VAR6, VAR4->VAR16, VAR4->VAR16 + FUN5(VAR4->VAR17) - 1, VAR23);
    }
    VAR15 = false;
    FUN16(VAR14, &VAR6->VAR24, VAR25)
    {
        if (VAR14->VAR26 <= VAR7 && VAR8 <= VAR14->VAR27)
        {
            VAR15 = true;
            break;
        }
    }
    if (!VAR15)
    {
        FUN9(""
                     "" VAR29 "" VAR29,
                     VAR6, VAR7, VAR8);
        VAR12 = -VAR30;
        goto VAR28;
    }
    FUN20(VAR4->VAR31);
    if (FUN21(VAR4->VAR31))
    {
        VAR32 *VAR33;
        FUN22(VAR7, VAR8);
        VAR33 = FUN23(sizeof(*VAR33));
        VAR33->VAR34 = VAR4->VAR31;
        VAR33->VAR35 = VAR4->VAR16 - VAR4->VAR19;
        VAR33->VAR6 = VAR6;
        VAR9 = FUN12(FUN11(VAR4->VAR19), VAR4->VAR17);
        VAR9 = FUN6(VAR9, FUN7());
        FUN24(&VAR33->VAR36, VAR37, VAR38, VAR4->VAR19, FUN5(VAR9));
        FUN25(&VAR6->VAR39, VAR33, VAR40);
        FUN26(VAR33->VAR34, &VAR33->VAR36);
        FUN27(VAR33->VAR34, &VAR33->VAR36, false);
        return;
    }
    VAR11 = FUN28(VAR4->VAR31) + VAR4->VAR19 + (VAR7 - VAR4->VAR16);
    FUN29(VAR7, VAR8, VAR11);
    VAR10 = FUN6(VAR9, FUN11(VAR7));
    VAR12 = FUN30(VAR6, VAR7, FUN5(VAR10), VAR11, VAR4->VAR41);
    if (VAR12)
    {
        FUN9("" VAR29 ""
                     "" VAR29 "",
                     VAR6, VAR7, FUN5(VAR10), VAR11, VAR12);
        goto VAR28;
    }
    return;
VAR28:
    if (!VAR6->VAR42)
    {
        if (!VAR6->VAR43)
        {
            VAR6->VAR43 = VAR12;
        }
    }
    else
    {
        FUN31("");
    }
}