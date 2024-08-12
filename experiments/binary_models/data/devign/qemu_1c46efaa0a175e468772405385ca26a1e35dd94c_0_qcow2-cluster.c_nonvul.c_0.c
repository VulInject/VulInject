static int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11, VAR12, VAR13;
    uint64_t VAR14;
    while (VAR6 > 0)
    {
        VAR12 = VAR6;
        VAR10 = FUN2(VAR2, VAR3 << 9, &VAR12, &VAR14);
        if (VAR10 < 0)
        {
            return VAR10;
        }
        VAR11 = VAR3 & (VAR8->VAR15 - 1);
        if (!VAR14)
        {
            if (VAR2->VAR16)
            {
                VAR13 = FUN3(VAR2->VAR16, VAR3, VAR5, VAR12);
                if (VAR13 > 0)
                {
                    FUN4(VAR2->VAR17, VAR18);
                    VAR10 = FUN5(VAR2->VAR16, VAR3, VAR5, VAR13);
                    if (VAR10 < 0)
                        return -1;
                }
            }
            else
            {
                memset(VAR5, 0, 512 * VAR12);
            }
        }
        else if (VAR14 & VAR19)
        {
            if (FUN6(VAR2, VAR14) < 0)
                return -1;
            memcpy(VAR5, VAR8->VAR20 + VAR11 * 512, 512 * VAR12);
        }
        else
        {
            FUN4(VAR2->VAR17, VAR21);
            VAR10 = FUN7(VAR2->VAR17, VAR14 + VAR11 * 512, VAR5, VAR12 * 512);
            if (VAR10 != VAR12 * 512)
                return -1;
            if (VAR8->VAR22)
            {
                FUN8(VAR8, VAR3, VAR5, VAR5, VAR12, 0, &VAR8->VAR23);
            }
        }
        VAR6 -= VAR12;
        VAR3 += VAR12;
        VAR5 += VAR12 * 512;
    }
    return 0;
}