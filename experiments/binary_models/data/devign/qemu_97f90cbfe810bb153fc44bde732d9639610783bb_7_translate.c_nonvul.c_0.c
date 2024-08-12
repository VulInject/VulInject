static void FUN1(VAR1 *VAR2)
{
    TCGv VAR3, *VAR4;
    unsigned int VAR5;
    VAR5 = 1 << (VAR2->VAR6 & 3);
    if (VAR5 > 4 && (VAR2->VAR7 & VAR8) && (VAR2->VAR9->VAR10.VAR11[2] & VAR12))
    {
        FUN2(VAR13[VAR14], VAR15);
        FUN3(VAR2, VAR16);
        return;
    }
    FUN4("", VAR5, VAR2->VAR17 ? "" : "");
    FUN5(VAR2);
    FUN6(VAR2);
    VAR4 = FUN7(VAR2, &VAR3);
    if ((VAR2->VAR9->VAR10.VAR11[2] & VAR18) && VAR5 > 1)
    {
        FUN8(*VAR4, FUN9(VAR2->VAR19), FUN9(1), FUN9(VAR5 - 1));
    }
    FUN10(VAR2, *VAR4, VAR20[VAR2->VAR19], VAR5);
    if (VAR4 == &VAR3)
        FUN11(VAR3);
}