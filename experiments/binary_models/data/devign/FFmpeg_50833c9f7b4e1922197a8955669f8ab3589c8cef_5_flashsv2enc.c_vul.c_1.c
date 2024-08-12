static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    PutBitContext VAR6;
    int VAR7, VAR8;
    if (VAR5 < 5)
        return -1;
    FUN2(&VAR6, VAR4, VAR5 * 8);
    FUN3(&VAR6, 4, (VAR2->VAR9 >> 4) - 1);
    FUN3(&VAR6, 12, VAR2->VAR10);
    FUN3(&VAR6, 4, (VAR2->VAR11 >> 4) - 1);
    FUN3(&VAR6, 12, VAR2->VAR12);
    FUN4(&VAR6);
    VAR7 = 4;
    VAR4[VAR7++] = VAR2->VAR13;
    if (VAR2->VAR13 & VAR14)
    {
        VAR8 = FUN5(VAR2, VAR4 + VAR7, VAR5 - VAR7);
        if (VAR8 < 0)
            return -1;
        VAR7 += VAR8;
    }
    return VAR7;
}