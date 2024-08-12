void FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR6);
    struct DisasContext VAR9, *VAR10 = &VAR9;
    uint32_t VAR11;
    uint32_t VAR12;
    int VAR13;
    int VAR14;
    VAR11 = VAR4->VAR15;
    VAR10->VAR4 = VAR4;
    VAR10->VAR16 = VAR17;
    VAR10->VAR18 = VAR11;
    VAR10->VAR15 = VAR11;
    VAR10->VAR19 = VAR6->VAR2.VAR20;
    VAR10->VAR21 = FUN4(&VAR6->VAR2, false);
    VAR10->VAR22 = VAR10->VAR23 = VAR4->VAR19;
    VAR10->VAR24 = !!(VAR10->VAR23 & VAR25);
    VAR10->VAR26 = VAR8->VAR26;
    VAR12 = (VAR11 & VAR27) + VAR28;
    VAR13 = 0;
    VAR14 = VAR4->VAR29 & VAR30;
    if (VAR14 == 0)
    {
        VAR14 = VAR30;
    }
    if (VAR14 > VAR31)
    {
        VAR14 = VAR31;
    }
    if (FUN5(VAR32) && FUN6(VAR11))
    {
        FUN7();
        FUN8("");
        FUN8("", FUN9(VAR11));
    }
    FUN10(VAR4);
    do
    {
        FUN11(VAR10->VAR15);
        VAR13++;
        if (FUN12(FUN13(VAR8, VAR10->VAR15, VAR33)))
        {
            FUN14(VAR34, VAR10->VAR15);
            FUN15(VAR10, VAR35);
            VAR10->VAR16 = VAR36;
            VAR10->VAR15 += 4;
            break;
        }
        if (VAR13 == VAR14 && (VAR4->VAR29 & VAR37))
        {
            FUN16();
        }
        VAR10->VAR18 = VAR10->VAR15 - 4;
        VAR10->VAR38 = VAR10->VAR15 + 4;
        FUN14(VAR39, VAR10->VAR18);
        FUN14(VAR40, VAR10->VAR38);
        FUN17(VAR10, VAR6);
        VAR10->VAR15 = VAR10->VAR38;
        if (VAR10->VAR24)
        {
            VAR10->VAR24--;
            if (!VAR10->VAR24)
            {
                VAR10->VAR23 &= ~VAR25;
                FUN18(VAR10);
                FUN19(VAR34, VAR41);
                FUN19(VAR40, VAR41);
                FUN14(VAR41, 0);
                FUN20(0);
                VAR10->VAR16 = VAR42;
                break;
            }
        }
    } while (!VAR10->VAR16 && !FUN21() && !VAR8->VAR26 && !VAR43 && (VAR10->VAR15 < VAR12) && VAR13 < VAR14);
    if (VAR4->VAR29 & VAR37)
    {
        FUN22();
    }
    if (VAR10->VAR16 == VAR17)
    {
        VAR10->VAR16 = VAR36;
        FUN14(VAR34, VAR10->VAR15);
    }
    if (FUN12(VAR8->VAR26))
    {
        if (VAR10->VAR16 == VAR17)
        {
            FUN14(VAR34, VAR10->VAR15);
        }
        FUN15(VAR10, VAR35);
    }
    else
    {
        switch (VAR10->VAR16)
        {
        case VAR17:
            FUN23(VAR10, 0, VAR10->VAR15);
            break;
        default:
        case VAR42:
            break;
        case VAR36:
            FUN20(0);
            break;
        case VAR44:
            break;
        }
    }
    FUN24(VAR4, VAR13);
    VAR4->VAR45 = VAR10->VAR15 - VAR11;
    VAR4->VAR46 = VAR13;
    if (FUN5(VAR32) && FUN6(VAR11))
    {
        FUN25(VAR8, VAR11, VAR4->VAR45, 0);
        FUN8("");
        FUN26();
    }
}