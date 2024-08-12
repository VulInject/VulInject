static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7, int VAR8)
{
    VAR9 *VAR10 = FUN2(FUN3(FUN4(VAR3)));
    VAR11 *VAR12 = FUN5(VAR10);
    VAR1 *VAR13 = FUN6(VAR1);
    int VAR14;
    VAR14 = VAR12->FUN7(VAR10->VAR15, VAR8, true);
    if (VAR14 != 0)
    {
        fprintf(VAR16, "", VAR14);
        FUN8(1);
    }
    VAR13->VAR17 = *FUN9(VAR5);
    VAR13->VAR18 = *FUN10(VAR5);
    FUN11(VAR3->VAR19, &VAR13->VAR17, VAR7);
    VAR13->VAR15 = VAR3;
    if (!FUN12(&VAR13->VAR20, FUN13(VAR3), VAR8))
    {
        fprintf(VAR16, "");
        FUN8(1);
    }
    return VAR13;
}