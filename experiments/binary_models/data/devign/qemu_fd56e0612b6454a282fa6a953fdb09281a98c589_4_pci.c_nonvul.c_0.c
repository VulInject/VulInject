static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    VAR7 *VAR8 = FUN2(VAR6);
    VAR3 *VAR9 = NULL;
    bool VAR10;
    if (VAR8->VAR11)
    {
        VAR6->VAR12 |= VAR13;
    }
    VAR6 = FUN3(VAR6, FUN4(FUN5(VAR2)), VAR6->VAR14, VAR4);
    if (VAR6 == NULL)
        return;
    if (VAR8->VAR15)
    {
        VAR8->FUN6(VAR6, &VAR9);
        if (VAR9)
        {
            FUN7(VAR4, VAR9);
            FUN8(VAR6);
            return;
        }
    }
    VAR10 = false;
    if (VAR6->VAR16 == NULL && VAR8->VAR16 != NULL)
    {
        VAR6->VAR16 = FUN9(VAR8->VAR16);
        VAR10 = true;
    }
    FUN10(VAR6, VAR10, &VAR9);
    if (VAR9)
    {
        FUN7(VAR4, VAR9);
        FUN11(FUN12(VAR6), NULL);
        return;
    }
}