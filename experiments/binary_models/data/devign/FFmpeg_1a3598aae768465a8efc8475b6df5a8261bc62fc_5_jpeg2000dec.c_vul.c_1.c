static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7;
    if (VAR2->VAR8 - VAR2->VAR9 < 2)
        return VAR10;
    VAR7 = FUN2(&VAR2->VAR9);
    VAR4 += VAR7;
    VAR4->VAR11 = FUN2(&VAR2->VAR9);
    FUN3(VAR2, VAR4);
    VAR6[VAR7] |= VAR12;
    return 0;
}