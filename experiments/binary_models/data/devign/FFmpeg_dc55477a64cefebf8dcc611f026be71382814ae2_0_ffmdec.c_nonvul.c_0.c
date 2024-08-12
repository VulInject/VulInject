static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR2->VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16;
    int64_t VAR17 = -1;
    VAR14 = VAR5;
    while (VAR5 > 0)
    {
    VAR18:
        VAR12 = VAR8->VAR19 - VAR8->VAR20;
        if (VAR12 < 0)
            return -1;
        if (VAR12 > VAR5)
            VAR12 = VAR5;
        if (VAR12 == 0)
        {
            if (FUN2(VAR11) == VAR8->VAR21)
                FUN3(VAR11, VAR8->VAR22, VAR23);
        VAR24:
            if (VAR11->VAR25 != VAR8->VAR22)
            {
                int64_t VAR26 = FUN2(VAR11);
                int VAR27 = FUN4(VAR11, VAR8->VAR22);
                if (VAR27 < 0)
                    return VAR27;
                FUN3(VAR11, VAR26, VAR23);
            }
            VAR16 = FUN5(VAR11);
            if (VAR16 != VAR28)
            {
                if (FUN6(VAR2, VAR16) < 0)
                    return -1;
                VAR17 = FUN2(VAR11);
            }
            VAR13 = FUN5(VAR11);
            VAR8->VAR29 = FUN7(VAR11);
            VAR15 = FUN5(VAR11);
            FUN8(VAR11, VAR8->VAR30, VAR8->VAR22 - VAR31);
            VAR8->VAR19 = VAR8->VAR30 + (VAR8->VAR22 - VAR31 - VAR13);
            if (VAR8->VAR19 < VAR8->VAR30 || VAR15 < 0)
                return -1;
            if (VAR8->VAR32 || (VAR15 & 0x8000))
            {
                if (!VAR15)
                {
                    if (FUN2(VAR11) >= VAR8->VAR22 * 3LL)
                    {
                        int64_t VAR33 = FUN9(VAR8->VAR22 * 2LL, FUN2(VAR11) - VAR17);
                        VAR33 = FUN10(VAR33, 0);
                        FUN3(VAR11, -VAR33, VAR34);
                        goto VAR24;
                    }
                    return 0;
                }
                VAR8->VAR32 = 0;
                if ((VAR15 & 0x7fff) < VAR31)
                    return -1;
                VAR8->VAR20 = VAR8->VAR30 + (VAR15 & 0x7fff) - VAR31;
                if (!VAR6)
                    break;
            }
            else
            {
                VAR8->VAR20 = VAR8->VAR30;
            }
            goto VAR18;
        }
        memcpy(VAR4, VAR8->VAR20, VAR12);
        VAR4 += VAR12;
        VAR8->VAR20 += VAR12;
        VAR5 -= VAR12;
        VAR6 = 0;
    }
    return VAR14 - VAR5;
}