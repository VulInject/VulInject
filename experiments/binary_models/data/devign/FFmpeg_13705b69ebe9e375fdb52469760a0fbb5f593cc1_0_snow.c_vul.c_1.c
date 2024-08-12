static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7)
{
    int VAR8 = VAR2->VAR8;
    VAR3 *VAR9 = VAR2->VAR9;
    VAR3 *VAR10 = VAR2->VAR10;
    VAR3 *VAR11 = VAR2->VAR11;
    VAR3 *VAR12 = VAR2->VAR12;
    VAR3 *VAR13 = VAR4 + FUN2(VAR8 + 3, VAR6 - 1) * VAR7;
    VAR3 *VAR14 = VAR4 + FUN2(VAR8 + 4, VAR6 - 1) * VAR7;
    if (VAR7 == VAR5 && VAR8 + 4 < VAR6 && 0)
    {
        int VAR15;
        for (VAR15 = 0; VAR15 < VAR5 / 2; VAR15++)
            VAR14[VAR15] += 64 * 2;
        for (; VAR15 < VAR5; VAR15++)
            VAR14[VAR15] += 169 * 2;
    }
    {
        START_TIMER if (VAR12 <= VAR14) FUN3(VAR12, VAR13, VAR14, VAR5);
        if (VAR11 <= VAR13)
            FUN4(VAR11, VAR12, VAR13, VAR5);
        if (VAR10 <= VAR12)
            FUN5(VAR10, VAR11, VAR12, VAR5);
        if (VAR9 <= VAR11)
            FUN6(VAR9, VAR10, VAR11, VAR5);
        if (VAR5 > 400)
        {
            FUN7("")
        }
    }
    {
        START_TIMER if (VAR8 - 1 >= 0) FUN8(VAR9, VAR5);
        if (VAR9 <= VAR11)
            FUN8(VAR10, VAR5);
        if (VAR5 > 400 && VAR9 <= VAR11)
        {
            FUN7("")
        }
    }
    VAR2->VAR9 = VAR11;
    VAR2->VAR10 = VAR12;
    VAR2->VAR11 = VAR13;
    VAR2->VAR12 = VAR14;
    VAR2->VAR8 += 2;
}