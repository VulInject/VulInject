FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = VAR2->VAR4;
    int VAR5 = FUN2(VAR4);
    if (VAR5 != VAR2->VAR6)
    {
        FUN3(VAR2->VAR7, FUN4(VAR4), (VAR5 & VAR8) ? VAR9 : NULL, (VAR5 & VAR10) ? VAR11 : NULL, VAR2);
        VAR2->VAR6 = VAR5;
    }
    if (!VAR5)
    {
        FUN5(VAR2->VAR12, FUN6(VAR13) + VAR14);
    }
}