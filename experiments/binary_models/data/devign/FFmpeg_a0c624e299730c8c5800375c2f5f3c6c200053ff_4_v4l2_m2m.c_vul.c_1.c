int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    VAR6 = FUN2(&VAR4->VAR7, VAR8);
    if (VAR6)
        FUN3(VAR2, VAR9, "", VAR4->VAR7.VAR10);
    VAR6 = FUN2(&VAR4->VAR11, VAR8);
    if (VAR6)
        FUN3(VAR2, VAR9, "", VAR4->VAR11.VAR10);
    FUN4(&VAR4->VAR7);
    if (FUN5(&VAR4->VAR12))
        FUN3(VAR2, VAR9, "");
    FUN4(&VAR4->VAR11);
    FUN6(&VAR4->VAR13);
    if (close(VAR4->VAR14) < 0)
        FUN3(VAR2, VAR9, "", VAR4->VAR15, FUN7(FUN8(VAR16)));
    VAR4->VAR14 = -1;
    return 0;
}