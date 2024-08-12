static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(&VAR6->VAR9);
    VAR7 *VAR10 = FUN4(&VAR6->VAR11);
    VAR3 *VAR12 = NULL;
    FUN5(FUN6(VAR8), "", VAR13, (VAR14 **)&VAR8->VAR15, VAR16, VAR17, &VAR12);
    FUN5(FUN6(VAR10), "", VAR13, (VAR14 **)&VAR10->VAR15, VAR16, VAR17, &VAR12);
    if (VAR12)
    {
        goto VAR18;
    }
    FUN7(FUN6(VAR8), FUN6(VAR6), "", &VAR12);
    FUN7(FUN6(VAR10), FUN6(VAR6), "", &VAR12);
    if (VAR12)
    {
        goto VAR18;
    }
    int VAR19;
    for (VAR19 = 0; VAR19 < 2; VAR19++)
    {
        struct VAR20 *VAR21 = &VAR6->VAR22[VAR19];
        VAR21->VAR23 = VAR19;
        VAR21->VAR24 = FUN8(VAR25, VAR21);
        VAR21->VAR26 = FUN9(VAR21->VAR24, VAR27);
        FUN10(VAR21->VAR26, VAR6->VAR28);
    }
    return;
VAR18:
    if (!*VAR4)
    {
        *VAR4 = VAR12;
    }
}