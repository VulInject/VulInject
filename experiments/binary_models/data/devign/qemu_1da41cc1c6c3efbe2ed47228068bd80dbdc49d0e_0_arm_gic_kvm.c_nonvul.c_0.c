static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5;
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = FUN3(VAR2);
    VAR10 *VAR11 = FUN4(VAR7);
    int VAR12;
    VAR11->FUN5(VAR2, VAR4);
    if (FUN6(VAR4))
    {
        return;
    }
    VAR5 = VAR7->VAR13 - VAR14;
    VAR5 += (VAR14 * VAR7->VAR15);
    FUN7(VAR2, VAR16, VAR5);
    for (VAR5 = 0; VAR5 < VAR7->VAR15; VAR5++)
    {
        FUN8(VAR9, &VAR7->VAR17[VAR5]);
    }
    VAR7->VAR18 = -1;
    VAR12 = FUN9(VAR19, VAR20, false);
    if (VAR12 >= 0)
    {
        VAR7->VAR18 = VAR12;
    }
    else if (VAR12 != -VAR21 && VAR12 != -VAR22)
    {
        FUN10(VAR4, -VAR12, "");
        return;
    }
    FUN11(&VAR7->VAR23, FUN12(VAR7), "", 0x1000);
    FUN13(VAR9, &VAR7->VAR23);
    FUN14(&VAR7->VAR23, (VAR24 << VAR25) | VAR26, VAR27, VAR26, VAR7->VAR18);
    FUN11(&VAR7->VAR28[0], FUN12(VAR7), "", 0x1000);
    FUN13(VAR9, &VAR7->VAR28[0]);
    FUN14(&VAR7->VAR28[0], (VAR24 << VAR25) | VAR29, VAR27, VAR29, VAR7->VAR18);
}