static int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10;
    uint64_t VAR11, VAR12;
    VAR13 *VAR14 = NULL;
    uint64_t VAR15;
    while (VAR6 > 0)
    {
        VAR14 = FUN2(VAR8, VAR3, VAR14);
        if (!VAR14)
        {
            return -VAR16;
        }
        VAR10 = FUN3(VAR2, VAR14, NULL, VAR3 << 9, 0, &VAR15);
        VAR12 = VAR3 % VAR14->VAR17;
        VAR11 = VAR14->VAR17 - VAR12;
        if (VAR11 > VAR6)
        {
            VAR11 = VAR6;
        }
        if (VAR10)
        {
            if (VAR2->VAR18)
            {
                if (!FUN4(VAR2))
                {
                    return -VAR19;
                }
                VAR10 = FUN5(VAR2->VAR18, VAR3, VAR5, VAR11);
                if (VAR10 < 0)
                {
                    return VAR10;
                }
            }
            else
            {
                memset(VAR5, 0, 512 * VAR11);
            }
        }
        else
        {
            VAR10 = FUN6(VAR14, VAR15, VAR12 * 512, VAR5, VAR11);
            if (VAR10)
            {
                return VAR10;
            }
        }
        VAR6 -= VAR11;
        VAR3 += VAR11;
        VAR5 += VAR11 * 512;
    }
    return 0;
}