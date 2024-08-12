static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR9 *VAR10 = FUN4(VAR2);
    VAR11 *VAR12 = &VAR10->VAR12;
    VAR3 *VAR13 = NULL;
    if (VAR10->VAR14 >= VAR15)
    {
        FUN5(&VAR13, "" VAR16 "", VAR10->VAR14, VAR15 - 1);
        goto VAR17;
    }
    if (FUN6(VAR10->VAR14))
    {
        FUN5(&VAR13, "" VAR16 "", VAR10->VAR14);
        goto VAR17;
    }
    if (VAR10->VAR14 != VAR8->VAR18)
    {
        FUN5(&VAR13, "" VAR16 "" VAR16, VAR10->VAR14, VAR8->VAR18);
        goto VAR17;
    }
    FUN7(VAR6, &VAR13);
    if (VAR13 != NULL)
    {
        goto VAR17;
    }
    VAR8->VAR18++;
    FUN8(VAR19, VAR10);
    VAR12->VAR20 = VAR10->VAR14;
    FUN9(VAR6);
    FUN10(VAR6);
    FUN11(VAR6, VAR21, VAR6);
    FUN12(VAR6);
    VAR8->FUN13(VAR2, &VAR13);
VAR17:
    FUN14(VAR4, VAR13);
}