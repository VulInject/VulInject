int FUN1(VAR1 *VAR2)
{
    VAR2->VAR3 = FUN2(VAR4, VAR5 | VAR6);
    if (VAR2->VAR3 == -1)
    {
        FUN3("", VAR7, strerror(VAR8));
        return -1;
    }
    if (!FUN4(VAR2->VAR3, VAR2))
    {
        return -1;
    }
    VAR2->VAR9 = FUN5(0, VAR10);
    if (VAR2->VAR9 == -1)
    {
        FUN3("", VAR7, strerror(VAR8));
        close(VAR2->VAR3);
        return -1;
    }
    FUN6(&VAR2->VAR11, 0);
    FUN7(&VAR2->VAR12, "", VAR13, VAR2, VAR14);
    FUN8(&VAR2->VAR11);
    FUN9(&VAR2->VAR11);
    VAR2->VAR15 = true;
    if (FUN10(VAR16, VAR2))
    {
        return -1;
    }
    FUN11(true);
    FUN12();
    return 0;
}