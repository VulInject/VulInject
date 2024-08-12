static int FUN1(VAR1 *VAR2, int64_t VAR3, const VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11;
    uint64_t VAR12;
    static int VAR13 = 0;
    while (VAR6 > 0)
    {
        VAR10 = VAR3 & (VAR8->VAR14 - 1);
        VAR11 = VAR8->VAR14 - VAR10;
        if (VAR11 > VAR6)
            VAR11 = VAR6;
        VAR12 = FUN2(VAR2, VAR3 << 9, 1);
        if (!VAR12)
            return -1;
        if (FUN3(VAR8->VAR15, VAR12 + VAR10 * 512, VAR5, VAR11 * 512) != VAR11 * 512)
            return -1;
        VAR6 -= VAR11;
        VAR3 += VAR11;
        VAR5 += VAR11 * 512;
        if (!VAR13)
        {
            FUN4(VAR2, FUN5(NULL));
            VAR13++;
        }
    }
    return 0;
}