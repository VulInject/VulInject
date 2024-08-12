static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR10;
    VAR1 *VAR11 = VAR6->VAR12[0];
    int VAR13 = FUN2(VAR4->VAR14->VAR15);
    int64_t VAR16 = (VAR4->VAR16 == VAR17) ? VAR4->VAR16 : FUN3(VAR4->VAR16, VAR2->VAR18, VAR11->VAR18);
    int VAR19, VAR20;
    int64_t VAR21;
    if (VAR9->VAR16 == VAR17)
    {
        if (VAR16 != VAR17)
        {
            VAR9->VAR16 = VAR16 - FUN4(VAR9);
        }
        return FUN5(VAR9, VAR4);
    }
    if (VAR16 == VAR17)
    {
        return FUN5(VAR9, VAR4);
    }
    VAR21 = VAR16 - VAR9->VAR16 - FUN4(VAR9);
    VAR19 = FUN6(VAR9->VAR22);
    if (FUN7(VAR21) > VAR9->VAR23)
    {
        FUN8(VAR6, VAR24, "" VAR25 "", VAR21);
        VAR19 += VAR21;
    }
    else
    {
        if (VAR9->VAR26)
        {
            int VAR27 = FUN9(VAR21, -VAR9->VAR28, VAR9->VAR28);
            FUN8(VAR6, VAR24, "", VAR27);
            FUN10(VAR9->VAR22, VAR21, VAR2->VAR29);
        }
        VAR21 = 0;
    }
    if (VAR19 > 0)
    {
        VAR3 *VAR30 = FUN11(VAR11, VAR31, VAR19);
        if (!VAR30)
        {
            VAR20 = FUN12(VAR32);
            goto VAR33;
        }
        FUN13(VAR9->VAR22, (void **)VAR30->VAR34, VAR19);
        VAR30->VAR16 = VAR9->VAR16;
        if (VAR21 > 0)
        {
            FUN14(VAR30->VAR34, VAR19 - VAR21, VAR21, VAR13, VAR4->VAR35);
        }
        VAR20 = FUN15(VAR11, VAR30);
        if (VAR20 < 0)
            goto VAR33;
        VAR9->VAR36 = 1;
    }
    else
    {
        FUN8(VAR6, VAR37, ""
                                    "");
    }
    FUN13(VAR9->VAR22, NULL, FUN6(VAR9->VAR22));
    VAR9->VAR16 = VAR16 - FUN16(VAR9->VAR22);
    VAR20 = FUN17(VAR9->VAR22, NULL, 0, 0, (void **)VAR4->VAR34, VAR4->VAR38[0], VAR4->VAR14->VAR39);
VAR33:
    FUN18(VAR4);
    return VAR20;
}