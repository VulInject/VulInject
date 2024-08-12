static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR2->VAR11;
    int VAR12, VAR13, VAR14, VAR15;
    VAR14 = VAR5;
    while (VAR5 > 0)
    {
    VAR16:
        VAR12 = VAR8->VAR17 - VAR8->VAR18;
        if (VAR12 < 0)
            return -1;
        if (VAR12 > VAR5)
            VAR12 = VAR5;
        if (VAR12 == 0)
        {
            if (FUN2(VAR11) == VAR8->VAR19)
                FUN3(VAR11, VAR8->VAR20, VAR21);
        VAR22:
            FUN4(VAR11);
            VAR13 = FUN4(VAR11);
            VAR8->VAR23 = FUN5(VAR11);
            VAR8->VAR24 = 1;
            VAR15 = FUN4(VAR11);
            FUN6(VAR11, VAR8->VAR25, VAR8->VAR20 - VAR26);
            VAR8->VAR17 = VAR8->VAR25 + (VAR8->VAR20 - VAR26 - VAR13);
            if (VAR8->VAR17 < VAR8->VAR25 || VAR15 < 0)
                return -1;
            if (VAR8->VAR27 || (VAR15 & 0x8000))
            {
                if (!VAR15)
                {
                    if (FUN2(VAR11) >= VAR8->VAR20 * 3)
                    {
                        FUN3(VAR11, -VAR8->VAR20 * 2, VAR28);
                        goto VAR22;
                    }
                    return 0;
                }
                VAR8->VAR27 = 0;
                if ((VAR15 & 0x7ffff) < VAR26)
                    return -1;
                VAR8->VAR18 = VAR8->VAR25 + (VAR15 & 0x7fff) - VAR26;
                if (!VAR6)
                    break;
            }
            else
            {
                VAR8->VAR18 = VAR8->VAR25;
            }
            goto VAR16;
        }
        memcpy(VAR4, VAR8->VAR18, VAR12);
        VAR4 += VAR12;
        VAR8->VAR18 += VAR12;
        VAR5 -= VAR12;
        VAR6 = 0;
    }
    return VAR14 - VAR5;
}