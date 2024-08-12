void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    int VAR6 = VAR3 >= VAR2->VAR7->VAR8 - VAR5;
    FUN2(VAR2, VAR3, VAR4);
    if (VAR2->VAR7->VAR9)
    {
        int VAR10 = VAR4 >= VAR2->VAR7->VAR11 - VAR5;
        if (VAR4 && VAR3)
            FUN3(VAR2, VAR3 - VAR5, VAR4 - VAR5);
        if (VAR3 && VAR10)
            FUN3(VAR2, VAR3 - VAR5, VAR4);
        if (VAR4 && VAR6)
        {
            FUN3(VAR2, VAR3, VAR4 - VAR5);
            if (VAR2->VAR12 & VAR13)
                FUN4(&VAR2->VAR14->VAR15, VAR4, 0);
        }
        if (VAR6 && VAR10)
        {
            FUN3(VAR2, VAR3, VAR4);
            if (VAR2->VAR12 & VAR13)
                FUN4(&VAR2->VAR14->VAR15, VAR4 + VAR5, 0);
        }
    }
    else if (VAR2->VAR12 & VAR13 && VAR6)
        FUN4(&VAR2->VAR14->VAR15, VAR4 + VAR5 - 4, 0);
}