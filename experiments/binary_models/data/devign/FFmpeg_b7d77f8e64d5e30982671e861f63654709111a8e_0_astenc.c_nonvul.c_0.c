static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    VAR8 *VAR9;
    unsigned int VAR10;
    if (VAR2->VAR11 == 1)
    {
        VAR9 = VAR2->VAR12[0]->VAR13;
    }
    else
    {
        FUN2(VAR2, VAR14, "");
        return FUN3(VAR15);
    }
    if (VAR9->VAR16 == VAR17)
    {
        FUN2(VAR2, VAR14, "");
        return VAR18;
    }
    VAR10 = FUN4(VAR19, VAR9->VAR16);
    if (!VAR10)
    {
        FUN2(VAR2, VAR14, "");
        return FUN3(VAR15);
    }
    if (VAR4->VAR20 > 0 && VAR4->VAR21 >= VAR4->VAR20)
    {
        FUN2(VAR2, VAR14, "");
        return FUN3(VAR15);
    }
    FUN5(VAR22)
    FUN5(VAR23) FUN6(VAR7, "");
    VAR4->VAR24 = FUN7(VAR7);
    FUN8(VAR7, 0);
    FUN9(VAR7, VAR10);
    FUN9(VAR7, 16);
    FUN9(VAR7, VAR9->VAR25);
    FUN9(VAR7, 0);
    FUN8(VAR7, VAR9->VAR26);
    VAR4->VAR27 = FUN7(VAR7);
    FUN8(VAR7, 0);
    FUN8(VAR7, 0);
    FUN8(VAR7, 0);
    FUN8(VAR7, 0);
    FUN8(VAR7, 0);
    FUN10(VAR7, 0x7F);
    FUN11(VAR7, 0);
    FUN11(VAR7, 0);
    FUN8(VAR7, 0);
    FUN12(VAR7);
    return 0;
}