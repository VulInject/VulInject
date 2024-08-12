void FUN1(const VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, VAR7 *VAR8, VAR7 *VAR9, VAR7 *VAR10, unsigned int VAR11, unsigned int VAR12)
{
    assert(!FUN2(VAR2));
    if (!VAR2->VAR13.VAR14 || VAR2->VAR15.VAR16->VAR17)
    {
        FUN3(VAR2, VAR4, VAR5, VAR6, VAR8, VAR9, VAR10, VAR11, VAR12);
        return;
    }
    FUN4(VAR2, VAR4, VAR5, VAR6, VAR8, VAR9, VAR10, VAR11, VAR12, VAR2->VAR18);
    if (VAR2->VAR18)
    {
        FUN4(VAR2, VAR4, VAR5, VAR6, VAR8, VAR9, VAR10, VAR11, VAR12, 1);
    }
    else
    {
        FUN4(VAR2, VAR4, VAR5, VAR6, VAR8, VAR9, VAR10, VAR11, VAR12, 0);
    }
}