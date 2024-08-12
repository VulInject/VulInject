static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR6 = FUN3(VAR9);
    VAR8 = VAR6 ? FUN4(VAR6) : NULL;
    VAR4->VAR10 = FUN5(VAR8, false);
    if (VAR4->VAR10 == NULL)
    {
        return -1;
    }
    VAR4->VAR11 = VAR8 && FUN6(VAR8);
    FUN7(&VAR4->VAR12, FUN8(VAR4), &VAR13, VAR4, "", VAR14 * 4);
    FUN9(VAR2, &VAR4->VAR12);
    return 0;
}