void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    DisasContext VAR8, *VAR9 = &VAR8;
    target_ulong VAR10;
    int VAR11;
    int VAR12;
    int VAR13;
    VAR10 = VAR4->VAR14;
    VAR9->VAR4 = VAR4;
    VAR9->VAR6 = VAR6;
    VAR9->VAR15 = VAR16;
    VAR9->VAR14 = VAR10;
    VAR9->VAR17 = VAR18;
    VAR9->VAR19 = 1;
    VAR9->VAR20 = VAR2->VAR20;
    VAR9->VAR21 = (VAR6->VAR22 & VAR23) == 0;
    VAR9->VAR24 = 0;
    VAR9->VAR25 = 0;
    VAR12 = 0;
    VAR13 = VAR4->VAR26 & VAR27;
    if (VAR13 == 0)
    {
        VAR13 = VAR27;
    }
    if (VAR13 > VAR28)
    {
        VAR13 = VAR28;
    }
    FUN2(VAR4);
    do
    {
        VAR11 = VAR9->VAR14 - VAR10;
        VAR29 = NULL;
        FUN3(VAR9->VAR14, VAR9->VAR17);
        VAR12++;
        if (FUN4(FUN5(VAR2, VAR9->VAR14, VAR30)))
        {
            FUN6(VAR9, VAR9->VAR14, VAR31);
            VAR9->VAR15 = VAR32;
            VAR9->VAR14 += 2;
            break;
        }
        if (VAR12 == VAR13 && (VAR4->VAR26 & VAR33))
        {
            FUN7();
        }
        VAR9->VAR34 = VAR9->VAR14;
        FUN8(VAR6, VAR9);
    } while (!VAR9->VAR15 && !FUN9() && !VAR2->VAR20 && !VAR35 && (VAR11) < (VAR36 - 32) && VAR12 < VAR13);
    if (VAR4->VAR26 & VAR33)
        FUN10();
    if (FUN4(VAR2->VAR20))
    {
        if (!VAR9->VAR15)
        {
            FUN11(VAR9);
            FUN12(VAR37, VAR9->VAR14);
        }
        FUN13(VAR38, FUN14(VAR31));
    }
    else
    {
        switch (VAR9->VAR15)
        {
        case VAR16:
            FUN11(VAR9);
            FUN15(VAR9, 0, VAR9->VAR14);
            break;
        default:
        case VAR32:
        case VAR39:
            FUN11(VAR9);
            FUN16(0);
            break;
        case VAR40:
            break;
        }
    }
    FUN17(VAR4, VAR12);
    if (FUN18(VAR41) && FUN19(VAR10))
    {
        FUN20();
        FUN21("");
        FUN21("", FUN22(VAR10));
        FUN23(VAR2, VAR10, VAR9->VAR14 - VAR10, 0);
        FUN21("");
        FUN24();
    }
    VAR4->VAR42 = VAR9->VAR14 - VAR10;
    VAR4->VAR43 = VAR12;
}