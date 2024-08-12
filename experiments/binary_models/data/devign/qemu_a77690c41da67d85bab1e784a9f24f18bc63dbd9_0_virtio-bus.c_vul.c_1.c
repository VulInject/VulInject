void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(FUN4(VAR6));
    VAR9 *VAR10 = FUN5(VAR8);
    VAR11 *VAR12 = FUN6(VAR10);
    VAR13 *VAR14 = FUN7(VAR2);
    bool VAR15 = FUN8(VAR2, VAR16);
    FUN9("", VAR8->VAR17);
    if (VAR12->VAR18 != NULL)
    {
        VAR12->FUN10(VAR8->VAR19, VAR4);
    }
    assert(VAR14->VAR20 != NULL);
    VAR2->VAR21 = VAR14->FUN11(VAR2, VAR2->VAR21, VAR4);
    if (VAR12->VAR22 != NULL)
    {
        VAR12->FUN12(VAR8->VAR19, VAR4);
    }
    if (VAR12->VAR23 != NULL && VAR15)
    {
        FUN13(&VAR2->VAR21, VAR16);
        VAR2->VAR24 = VAR12->FUN14(VAR8->VAR19);
    }
    else
    {
        VAR2->VAR24 = &VAR25;
    }
}