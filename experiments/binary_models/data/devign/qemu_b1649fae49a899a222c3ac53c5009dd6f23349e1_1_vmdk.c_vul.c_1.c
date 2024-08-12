static int FUN1(VAR1 *VAR2, int64_t VAR3, const VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = NULL;
    int VAR12, VAR13;
    int64_t VAR14;
    uint64_t VAR15;
    VmdkMetaData VAR16;
    if (VAR3 > VAR2->VAR17)
    {
        fprintf(VAR18, "" VAR19 "" VAR19 "", VAR3, VAR2->VAR17);
        return -VAR20;
    }
    while (VAR6 > 0)
    {
        VAR11 = FUN2(VAR8, VAR3, VAR11);
        if (!VAR11)
        {
            return -VAR20;
        }
        VAR13 = FUN3(VAR2, VAR11, &VAR16, VAR3 << 9, !VAR11->VAR21, &VAR15);
        if (VAR11->VAR21)
        {
            if (VAR13 == 0)
            {
                fprintf(VAR18, ""
                                "");
                return -VAR20;
            }
            else
            {
                VAR13 = FUN3(VAR2, VAR11, &VAR16, VAR3 << 9, 1, &VAR15);
            }
        }
        if (VAR13)
        {
            return -VAR22;
        }
        VAR14 = VAR3 % VAR11->VAR23;
        VAR12 = VAR11->VAR23 - VAR14;
        if (VAR12 > VAR6)
        {
            VAR12 = VAR6;
        }
        VAR13 = FUN4(VAR11, VAR15, VAR14 * 512, VAR5, VAR12, VAR3);
        if (VAR13)
        {
            return VAR13;
        }
        if (VAR16.VAR24)
        {
            if (FUN5(VAR11, &VAR16) == -1)
            {
                return -VAR20;
            }
        }
        VAR6 -= VAR12;
        VAR3 += VAR12;
        VAR5 += VAR12 * 512;
        if (!VAR8->VAR25)
        {
            VAR13 = FUN6(VAR2, FUN7(NULL));
            if (VAR13 < 0)
            {
                return VAR13;
            }
            VAR8->VAR25 = true;
        }
    }
    return 0;
}