static int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11, VAR12;
    uint64_t VAR13;
    while (VAR6 > 0)
    {
        VAR13 = FUN2(VAR2, VAR3 << 9, 0);
        VAR10 = VAR3 % VAR8->VAR14;
        VAR11 = VAR8->VAR14 - VAR10;
        if (VAR11 > VAR6)
            VAR11 = VAR6;
        if (!VAR13)
        {
            if (VAR8->VAR15->VAR16)
            {
                if (!FUN3(VAR2))
                    return -1;
                VAR12 = FUN4(VAR8->VAR15->VAR16, VAR3, VAR5, VAR11);
                if (VAR12 < 0)
                    return -1;
            }
            else
            {
                memset(VAR5, 0, 512 * VAR11);
            }
        }
        else
        {
            if (FUN5(VAR8->VAR15, VAR13 + VAR10 * 512, VAR5, VAR11 * 512) != VAR11 * 512)
                return -1;
        }
        VAR6 -= VAR11;
        VAR3 += VAR11;
        VAR5 += VAR11 * 512;
    }
    return 0;
}