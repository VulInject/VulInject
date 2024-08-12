static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR7;
    if (VAR5)
    {
        const int VAR8 = FUN2(VAR5);
        const int VAR9 = FUN3(VAR8);
        FUN4(VAR2, VAR4 + 0, 0);
        if (VAR9 <= 9)
        {
            for (VAR7 = 0; VAR7 < VAR9; VAR7++)
            {
                FUN4(VAR2, VAR4 + 1 + VAR7, 1);
            }
            FUN4(VAR2, VAR4 + 1 + VAR7, 0);
            for (VAR7 = VAR9 - 1; VAR7 >= 0; VAR7--)
            {
                FUN4(VAR2, VAR4 + 22 + VAR7, (VAR8 >> VAR7) & 1);
            }
            if (VAR6)
                FUN4(VAR2, VAR4 + 11 + VAR9, VAR5 < 0);
        }
        else
        {
            for (VAR7 = 0; VAR7 < VAR9; VAR7++)
            {
                FUN4(VAR2, VAR4 + 1 + FUN5(VAR7, 9), 1);
            }
            FUN4(VAR2, VAR4 + 1 + 9, 0);
            for (VAR7 = VAR9 - 1; VAR7 >= 0; VAR7--)
            {
                FUN4(VAR2, VAR4 + 22 + FUN5(VAR7, 9), (VAR8 >> VAR7) & 1);
            }
            if (VAR6)
                FUN4(VAR2, VAR4 + 11 + 10, VAR5 < 0);
        }
    }
    else
    {
        FUN4(VAR2, VAR4 + 0, 1);
    }
}