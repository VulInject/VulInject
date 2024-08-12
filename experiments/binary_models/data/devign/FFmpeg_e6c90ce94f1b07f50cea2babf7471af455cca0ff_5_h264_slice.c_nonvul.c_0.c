static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = 16 * (VAR2->VAR6 >> FUN2(VAR2));
    int VAR7 = 16 * VAR2->VAR8 >> FUN2(VAR2);
    int VAR9 = 16 << FUN3(VAR2);
    int VAR10 = (16 + 4) << FUN3(VAR2);
    if (VAR4->VAR11)
    {
        if ((VAR5 + VAR9) >= VAR7)
            VAR9 += VAR10;
        VAR5 -= VAR10;
    }
    if (VAR5 >= VAR7 || (VAR5 + VAR9) < 0)
        return;
    VAR9 = FUN4(VAR9, VAR7 - VAR5);
    if (VAR5 < 0)
    {
        VAR9 = VAR5 + VAR9;
        VAR5 = 0;
    }
    FUN5(VAR2, VAR4, VAR5, VAR9);
    if (VAR2->VAR12)
        return;
    FUN6(&VAR2->VAR13->VAR14, VAR5 + VAR9 - 1, VAR2->VAR15 == VAR16);
}