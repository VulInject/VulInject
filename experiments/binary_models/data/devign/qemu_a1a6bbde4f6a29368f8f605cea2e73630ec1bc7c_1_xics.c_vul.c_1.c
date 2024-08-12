static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR9 *VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    VAR3 *VAR15 = NULL;
    VAR14 = FUN4(FUN5(VAR2), VAR16, &VAR15);
    if (!VAR14)
    {
        FUN6(VAR4, "" VAR16 "", VAR17, FUN7(VAR15));
        return;
    }
    VAR6->VAR18 = FUN8(VAR14);
    VAR14 = FUN4(FUN5(VAR2), VAR19, &VAR15);
    if (!VAR14)
    {
        FUN6(VAR4, "" VAR19 "", VAR17, FUN7(VAR15));
        return;
    }
    VAR10 = FUN9(VAR14);
    VAR10->VAR20 = FUN5(VAR6);
    VAR6->VAR21 = FUN10(VAR14);
    VAR12 = &VAR10->VAR12;
    switch (FUN11(VAR12))
    {
    case VAR22:
        VAR6->VAR23 = VAR12->VAR24[VAR25];
        break;
    case VAR26:
        VAR6->VAR23 = VAR12->VAR24[VAR27];
        break;
    default:
        FUN6(VAR4, "");
        return;
    }
    if (VAR8->VAR28)
    {
        VAR8->FUN12(VAR6, VAR4);
    }
    FUN13(VAR29, VAR2);
    FUN14(NULL, VAR6->VAR21->VAR30, &VAR31, VAR6);
}