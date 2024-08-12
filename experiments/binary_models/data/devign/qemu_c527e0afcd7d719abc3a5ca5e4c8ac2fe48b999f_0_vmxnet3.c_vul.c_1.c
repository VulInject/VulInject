FUN1(VAR1 *VAR2, int VAR3, struct VAR4 *VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9 = &VAR2->VAR10[VAR3].VAR11;
    VAR12 *VAR13 = FUN2(VAR2);
    FUN3(VAR13, VAR9, VAR5);
    if (VAR5->VAR14 == FUN4(VAR9))
    {
        FUN5();
        FUN3(VAR13, VAR9, VAR5);
        FUN6(VAR15, "", VAR3, VAR9);
        *VAR7 = FUN7(VAR9);
        FUN8(VAR2, VAR3);
        return true;
    }
    return false;
}