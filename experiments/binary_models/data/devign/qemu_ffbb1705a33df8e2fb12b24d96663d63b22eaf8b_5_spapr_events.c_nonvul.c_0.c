void FUN1(VAR1 *VAR2)
{
    FUN2(&VAR2->VAR3);
    VAR2->VAR4 = FUN3();
    FUN4(VAR2->VAR4, VAR5, FUN5(VAR2->VAR6, 0, false, &VAR7));
    if (VAR2->VAR8)
    {
        FUN4(VAR2->VAR4, VAR9, FUN5(VAR2->VAR6, 0, false, &VAR7));
    }
    VAR2->VAR10.VAR11 = VAR12;
    FUN6(&VAR2->VAR10);
    FUN7(VAR13, "", VAR14);
    FUN7(VAR15, "", VAR16);
}