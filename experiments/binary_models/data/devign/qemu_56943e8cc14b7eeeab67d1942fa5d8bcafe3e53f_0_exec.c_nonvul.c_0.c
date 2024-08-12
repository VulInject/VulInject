void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    int VAR7;
    VAR3 *VAR8 = NULL;
    VAR2->VAR9 = NULL;
    VAR2->VAR10 = FUN3();
    FUN4();
    VAR7 = VAR2->VAR7 = FUN5(&VAR8);
    if (VAR8)
    {
        FUN6(VAR4, VAR8);
        FUN7();
        return;
    }
    FUN8(&VAR11, VAR2, VAR12);
    FUN7();
    if (FUN9(FUN10(VAR2)) == NULL)
    {
        FUN11(NULL, VAR7, &VAR13, VAR2);
    }
    FUN12(NULL, "", VAR7, VAR14, VAR15, VAR16, VAR2->VAR17);
    assert(VAR6->VAR18 == NULL);
    assert(FUN9(FUN10(VAR2)) == NULL);
    if (VAR6->VAR18 != NULL)
    {
        FUN11(NULL, VAR7, VAR6->VAR18, VAR2);
    }
}