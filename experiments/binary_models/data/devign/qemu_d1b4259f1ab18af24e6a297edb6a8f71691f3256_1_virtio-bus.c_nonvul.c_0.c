void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(FUN4(VAR6));
    VAR9 *VAR10 = FUN5(VAR8);
    VAR11 *VAR12 = FUN6(VAR10);
    VAR13 *VAR14 = FUN7(VAR2);
    FUN8("", VAR8->VAR15);
    if (VAR12->VAR16 != NULL)
    {
        VAR12->FUN9(VAR8->VAR17, VAR4);
    }
    assert(VAR14->VAR18 != NULL);
    VAR2->VAR19 = VAR14->FUN10(VAR2, VAR2->VAR19, VAR4);
    if (VAR12->VAR20 != NULL)
    {
        VAR12->FUN11(VAR8->VAR17, VAR4);
    }
}