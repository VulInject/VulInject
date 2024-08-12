static int FUN1(VAR1 *VAR2, int64_t VAR3, const VAR4 *VAR5, int VAR6, bool VAR7, bool VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13 = NULL;
    int VAR14, VAR15;
    int64_t VAR16;
    uint64_t VAR17, VAR18;
    uint64_t VAR19;
    VmdkMetaData VAR20;
    if (VAR3 > VAR2->VAR21)
    {
        FUN2("" VAR22 "" VAR22 "", VAR3, VAR2->VAR21);
        return -VAR23;
    }
    while (VAR6 > 0)
    {
        VAR13 = FUN3(VAR10, VAR3, VAR13);
        if (!VAR13)
        {
            return -VAR23;
        }
        VAR15 = FUN4(VAR2, VAR13, &VAR20, VAR3 << 9, !VAR13->VAR24, &VAR19);
        if (VAR13->VAR24)
        {
            if (VAR15 == VAR25)
            {
                FUN2(""
                             "");
                return -VAR23;
            }
            else
            {
                VAR15 = FUN4(VAR2, VAR13, &VAR20, VAR3 << 9, 1, &VAR19);
            }
        }
        if (VAR15 == VAR26)
        {
            return -VAR27;
        }
        VAR17 = VAR13->VAR28 - VAR13->VAR29;
        VAR18 = VAR3 - VAR17;
        VAR16 = VAR18 % VAR13->VAR30;
        VAR14 = VAR13->VAR30 - VAR16;
        if (VAR14 > VAR6)
        {
            VAR14 = VAR6;
        }
        if (VAR7)
        {
            if (VAR13->VAR31 && VAR16 == 0 && VAR14 >= VAR13->VAR30)
            {
                VAR14 = VAR13->VAR30;
                if (!VAR8)
                {
                    VAR20.VAR32 = VAR33;
                    if (FUN5(VAR13, &VAR20) != VAR25)
                    {
                        return -VAR23;
                    }
                }
            }
            else
            {
                return -VAR34;
            }
        }
        else
        {
            VAR15 = FUN6(VAR13, VAR19, VAR16 * 512, VAR5, VAR14, VAR3);
            if (VAR15)
            {
                return VAR15;
            }
            if (VAR20.VAR35)
            {
                if (FUN5(VAR13, &VAR20) != VAR25)
                {
                    return -VAR23;
                }
            }
        }
        VAR6 -= VAR14;
        VAR3 += VAR14;
        VAR5 += VAR14 * 512;
        if (!VAR10->VAR36)
        {
            VAR15 = FUN7(VAR2, FUN8(NULL));
            if (VAR15 < 0)
            {
                return VAR15;
            }
            VAR10->VAR36 = true;
        }
    }
    return 0;
}