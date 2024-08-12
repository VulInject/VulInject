static int FUN1(VAR1 *VAR2, int64_t VAR3, const VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11, VAR12;
    uint64_t VAR13;
    int VAR14;
    while (VAR6 > 0)
    {
        VAR11 = VAR3 & (VAR8->VAR15 - 1);
        VAR14 = VAR11 + VAR6;
        if (VAR8->VAR16 && VAR14 > VAR17 * VAR8->VAR15)
            VAR14 = VAR17 * VAR8->VAR15;
        VAR13 = FUN2(VAR2, VAR3 << 9, VAR11, VAR14, &VAR12);
        if (!VAR13)
            return -1;
        if (VAR8->VAR16)
        {
            FUN3(VAR8, VAR3, VAR8->VAR18, VAR5, VAR12, 1, &VAR8->VAR19);
            VAR10 = FUN4(VAR8->VAR20, VAR13 + VAR11 * 512, VAR8->VAR18, VAR12 * 512);
        }
        else
        {
            VAR10 = FUN4(VAR8->VAR20, VAR13 + VAR11 * 512, VAR5, VAR12 * 512);
        }
        if (VAR10 != VAR12 * 512)
            return -1;
        VAR6 -= VAR12;
        VAR3 += VAR12;
        VAR5 += VAR12 * 512;
    }
    VAR8->VAR21 = -1;
    return 0;
}