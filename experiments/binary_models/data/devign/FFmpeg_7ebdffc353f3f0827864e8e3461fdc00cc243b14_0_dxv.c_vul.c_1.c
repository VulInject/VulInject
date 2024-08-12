static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR4->VAR7;
    uint32_t VAR8, VAR9, VAR10;
    int VAR11 = 0, VAR12 = 0;
    int VAR13 = 2;
    FUN2(VAR4->VAR14, FUN3(VAR7));
    FUN2(VAR4->VAR14 + 4, FUN3(VAR7));
    while (VAR13 < VAR4->VAR15 / 4)
    {
        FUN4(2);
        if (VAR10)
        {
            VAR9 = FUN5(VAR4->VAR14 + 4 * (VAR13 - VAR11));
            FUN2(VAR4->VAR14 + 4 * VAR13, VAR9);
            VAR13++;
            VAR9 = FUN5(VAR4->VAR14 + 4 * (VAR13 - VAR11));
            FUN2(VAR4->VAR14 + 4 * VAR13, VAR9);
            VAR13++;
        }
        else
        {
            FUN4(2);
            if (VAR10)
                VAR9 = FUN5(VAR4->VAR14 + 4 * (VAR13 - VAR11));
            else
                VAR9 = FUN3(VAR7);
            FUN2(VAR4->VAR14 + 4 * VAR13, VAR9);
            VAR13++;
            FUN4(2);
            if (VAR10)
                VAR9 = FUN5(VAR4->VAR14 + 4 * (VAR13 - VAR11));
            else
                VAR9 = FUN3(VAR7);
            FUN2(VAR4->VAR14 + 4 * VAR13, VAR9);
            VAR13++;
        }
    }
    return 0;
}