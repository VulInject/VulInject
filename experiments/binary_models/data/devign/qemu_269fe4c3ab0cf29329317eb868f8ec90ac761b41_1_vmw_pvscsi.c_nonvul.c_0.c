FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    bool VAR5 = VAR2->VAR6 & VAR2->VAR7;
    FUN3(VAR5, VAR2->VAR6, VAR2->VAR7);
    if (FUN4(VAR4))
    {
        if (VAR5)
        {
            FUN5();
            FUN6(VAR4, VAR8);
        }
        return;
    }
    FUN7(VAR4, !!VAR5);
}