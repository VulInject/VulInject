static inline bool FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3)
    {
        if ((VAR2->VAR4 & VAR5) && FUN2())
        {
            VAR6 *VAR7 = FUN3(VAR2);
            FUN4();
            FUN5(VAR7->VAR8);
            FUN6(VAR2, VAR5);
            FUN7();
        }
        if (!FUN8(VAR2))
        {
            VAR9 = NULL;
            return true;
        }
        VAR2->VAR3 = 0;
    }
    return false;
}