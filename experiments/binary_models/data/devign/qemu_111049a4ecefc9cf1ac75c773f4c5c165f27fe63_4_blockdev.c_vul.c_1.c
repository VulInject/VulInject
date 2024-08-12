static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR2, VAR2);
    VAR7 *VAR8;
    VAR9 *VAR10, *VAR11;
    VAR3 *VAR12 = NULL;
    assert(VAR2->VAR13->VAR14 == VAR15);
    VAR8 = VAR2->VAR13->VAR16.VAR17.VAR18;
    VAR10 = FUN3(VAR8->VAR19, VAR4);
    if (!VAR10)
    {
        return;
    }
    VAR11 = FUN4(VAR8->VAR11, VAR8->VAR11, VAR4);
    if (!VAR11)
    {
        return;
    }
    VAR6->VAR20 = FUN5(VAR10);
    if (VAR6->VAR20 != FUN5(VAR11))
    {
        VAR6->VAR20 = NULL;
        FUN6(VAR4, "");
        return;
    }
    FUN7(VAR6->VAR20);
    VAR6->VAR10 = VAR10;
    FUN8(VAR6->VAR10);
    FUN9(VAR8, VAR2->VAR21, &VAR12);
    if (VAR12)
    {
        FUN10(VAR4, VAR12);
        return;
    }
    VAR6->VAR22 = VAR6->VAR10->VAR22;
}