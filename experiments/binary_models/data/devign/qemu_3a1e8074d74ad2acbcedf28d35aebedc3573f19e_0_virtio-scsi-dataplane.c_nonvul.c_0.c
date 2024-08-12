static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7, int VAR8)
{
    VAR9 *VAR10 = FUN2(FUN3(FUN4(VAR3)));
    VAR11 *VAR12 = FUN5(VAR10);
    VAR1 *VAR13;
    int VAR14;
    VAR14 = VAR12->FUN6(VAR10->VAR15, VAR8, true);
    if (VAR14 != 0)
    {
        fprintf(VAR16, "", VAR14);
        VAR3->VAR17 = true;
        return NULL;
    }
    VAR13 = FUN7(VAR1, 1);
    VAR13->VAR18 = *FUN8(VAR5);
    VAR13->VAR19 = *FUN9(VAR5);
    FUN10(VAR3->VAR20, &VAR13->VAR18, true, VAR7);
    VAR13->VAR15 = VAR3;
    if (!FUN11(&VAR13->VAR21, FUN12(VAR3), VAR8))
    {
        fprintf(VAR16, "");
        goto VAR22;
    }
    return VAR13;
VAR22:
    FUN10(VAR3->VAR20, &VAR13->VAR18, true, NULL);
    VAR12->FUN6(VAR10->VAR15, VAR8, false);
    FUN13(VAR13);
    return NULL;
}