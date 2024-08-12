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
        VAR19 = FUN9((VAR26)VAR19 + VAR21);
    }
    else
    {
        if (VAR9->VAR27)
        {
            int VAR28 = FUN10(VAR21, -VAR9->VAR29, VAR9->VAR29);
            FUN8(VAR6, VAR24, "", VAR28);
            FUN11(VAR9->VAR22, VAR28, VAR2->VAR30);
        }
        VAR21 = 0;
    }
    if (VAR19 > 0)
    {
        VAR3 *VAR31 = FUN12(VAR11, VAR32, VAR19);
        if (!VAR31)
        {
            VAR20 = FUN13(VAR33);
            goto VAR34;
        }
        FUN14(VAR9->VAR22, VAR31->VAR35, VAR19);
        VAR31->VAR16 = VAR9->VAR16;
        if (VAR21 > 0)
        {
            FUN15(VAR31->VAR35, VAR19 - VAR21, VAR21, VAR13, VAR4->VAR36);
        }
        VAR20 = FUN16(VAR11, VAR31);
        if (VAR20 < 0)
            goto VAR34;
        VAR9->VAR37 = 1;
    }
    else
    {
        FUN8(VAR6, VAR38, ""
                                    "");
    }
    FUN14(VAR9->VAR22, NULL, FUN6(VAR9->VAR22));
    VAR9->VAR16 = VAR16 - FUN17(VAR9->VAR22);
    VAR20 = FUN18(VAR9->VAR22, NULL, 0, 0, VAR4->VAR35, VAR4->VAR39[0], VAR4->VAR14->VAR40);
VAR34:
    FUN19(VAR4);
    return VAR20;
}