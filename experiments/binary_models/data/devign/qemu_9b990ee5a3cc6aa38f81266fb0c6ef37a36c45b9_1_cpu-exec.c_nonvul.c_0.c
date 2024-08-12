static inline bool FUN1(VAR1 *VAR2, int *VAR3)
{
    if (VAR2->VAR4 >= 0)
    {
        if (VAR2->VAR4 >= VAR5)
        {
            *VAR3 = VAR2->VAR4;
            if (*VAR3 == VAR6)
            {
                FUN2(VAR2);
            }
            VAR2->VAR4 = -1;
            return true;
        }
        else
        {
            VAR7 *VAR8 = FUN3(VAR2);
            VAR8->FUN4(VAR2);
            *VAR3 = VAR2->VAR4;
            VAR2->VAR4 = -1;
            return true;
            if (FUN5())
            {
                VAR7 *VAR8 = FUN3(VAR2);
                FUN6();
                VAR8->FUN4(VAR2);
                FUN7();
                VAR2->VAR4 = -1;
            }
            else if (!FUN8())
            {
                *VAR3 = VAR5;
                return true;
            }
        }
    }
    else if (FUN9() && VAR2->VAR9.VAR10.VAR11 + VAR2->VAR12 == 0)
    {
        FUN10(VAR2, 1, FUN11(VAR2, NULL, 0, FUN12()), true);
        *VAR3 = -1;
        return true;
    }
    return false;
}