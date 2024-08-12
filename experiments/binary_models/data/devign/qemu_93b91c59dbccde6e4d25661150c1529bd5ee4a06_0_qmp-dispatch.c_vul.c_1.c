VAR1 *FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    VAR1 *VAR5;
    VAR6 *VAR7;
    VAR5 = FUN2(VAR2, &VAR4);
    VAR7 = FUN3();
    if (VAR4)
    {
        FUN4(VAR7, "", FUN5(VAR4));
        FUN6(VAR4);
    }
    else if (VAR5)
    {
        FUN4(VAR7, "", VAR5);
    }
    else
    {
        FUN7(VAR7);
        return NULL;
    }
    return FUN8(VAR7);
}