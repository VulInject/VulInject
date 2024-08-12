static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR1 *VAR8 = VAR6->VAR9[0];
    VAR10 *VAR11 = VAR6->VAR12;
    VAR3 *VAR13 = NULL;
    int VAR14;
    FUN2(VAR11, VAR15, "" VAR16 "", FUN3(VAR4->VAR17), VAR4->VAR18, VAR4->VAR19, VAR4->VAR20);
    VAR13 = FUN4();
    if (!VAR13)
    {
        VAR14 = FUN5(VAR21);
        goto VAR22;
    }
    VAR13->VAR17 = VAR8->VAR17;
    VAR13->VAR23 = FUN6(VAR11->VAR24);
    if (!VAR13->VAR23)
    {
        VAR14 = FUN5(VAR21);
        goto VAR22;
    }
    if (VAR11->VAR25 && !VAR4->VAR23)
    {
        VAR4->VAR23 = FUN6(VAR11->VAR24);
        if (!VAR4->VAR23)
        {
            VAR14 = FUN5(VAR21);
            goto VAR22;
        }
    }
    VAR14 = FUN7(VAR13, VAR4, VAR11->VAR26);
    if (VAR14 < 0)
    {
        FUN2(VAR6, VAR27, "", VAR14);
        goto VAR22;
    }
    VAR14 = FUN8(VAR13, VAR4);
    if (VAR14 < 0)
        goto VAR22;
    FUN9(&VAR4);
    FUN2(VAR11, VAR15, "" VAR16 "", FUN3(VAR13->VAR17), VAR13->VAR18, VAR13->VAR19, VAR13->VAR20);
    return FUN10(VAR8, VAR13);
VAR22:
    FUN9(&VAR4);
    FUN9(&VAR13);
    return VAR14;
}