static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR2, VAR2);
    VAR7 *VAR8;
    VAR9 *VAR10, *VAR11;
    VAR3 *VAR12 = NULL;
    assert(VAR2->VAR13->VAR14 == VAR15);
    VAR8 = VAR2->VAR13->VAR16.VAR17.VAR18;
    VAR10 = FUN3(VAR8->VAR19);
    if (!VAR10)
    {
        FUN4(VAR4, "", VAR8->VAR19);
        return;
    }
    if (!FUN5(VAR10))
    {
        FUN4(VAR4, VAR20, VAR8->VAR19);
        return;
    }
    VAR11 = FUN3(VAR8->VAR11);
    if (!VAR11)
    {
        FUN4(VAR4, "", VAR8->VAR11);
        return;
    }
    VAR6->VAR21 = FUN6(VAR10);
    if (VAR6->VAR21 != FUN6(VAR11))
    {
        VAR6->VAR21 = NULL;
        FUN4(VAR4, "");
        return;
    }
    FUN7(VAR6->VAR21);
    VAR6->VAR22 = FUN8(VAR10);
    FUN9(VAR6->VAR22);
    FUN10(VAR8->VAR19, VAR8->VAR11, VAR8->VAR23, VAR8->VAR24, VAR8->VAR25, VAR8->VAR26, VAR8->VAR27, VAR8->VAR28, VAR8->VAR29, VAR2->VAR30, &VAR12);
    if (VAR12)
    {
        FUN11(VAR4, VAR12);
        return;
    }
    VAR6->VAR31 = VAR6->VAR22->VAR31;
}