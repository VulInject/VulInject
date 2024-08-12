static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR2, VAR2);
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR3 *VAR11 = NULL;
    assert(VAR2->VAR12->VAR13 == VAR14);
    VAR10 = VAR2->VAR12->VAR15.VAR16.VAR17;
    VAR8 = FUN3(VAR10->VAR18, VAR4);
    if (!VAR8)
    {
        return;
    }
    VAR6->VAR19 = FUN4(VAR8);
    FUN5(VAR6->VAR19);
    FUN6(VAR8);
    VAR6->VAR8 = VAR8;
    FUN7(VAR10, VAR2->VAR20, &VAR11);
    if (VAR11)
    {
        FUN8(VAR4, VAR11);
        return;
    }
    VAR6->VAR21 = VAR6->VAR8->VAR21;
}