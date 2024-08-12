static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 **VAR6, int *VAR7, const VAR5 *VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    int VAR13;
    uint8_t VAR14;
    int VAR15;
    int VAR16;
    int VAR17, VAR18 = 0;
    *VAR7 = 0;
    if (VAR9 == 0)
        return 0;
    if (!VAR11->VAR19)
    {
        for (VAR17 = 0; VAR17 < VAR9; VAR17++)
        {
            VAR11->VAR20.VAR21 = (VAR11->VAR20.VAR21 << 8) | VAR8[VAR17];
            if ((VAR11->VAR20.VAR21 & 0xfffffffe) == 0xf8726fba && VAR11->VAR20.VAR22 + VAR17 >= 7)
            {
                VAR11->VAR19 = 1;
                VAR11->VAR23 = 0;
                break;
            }
        }
        if (!VAR11->VAR19)
        {
            if (FUN2(&VAR11->VAR20, VAR24, &VAR8, &VAR9) != -1)
                FUN3(VAR4, VAR25, "");
            return VAR9;
        }
        if ((VAR16 = FUN2(&VAR11->VAR20, VAR17 - 7, &VAR8, &VAR9)) < 0)
        {
            FUN3(VAR4, VAR25, "");
            return VAR16;
        }
        return VAR17 - 7;
    }
    if (VAR11->VAR23 == 0)
    {
        for (; VAR11->VAR20.VAR26 > 0; VAR11->VAR20.VAR26--)
        {
            VAR11->VAR20.VAR27[VAR11->VAR20.VAR22++] = VAR11->VAR20.VAR27[VAR11->VAR20.VAR28++];
        }
        if (VAR11->VAR20.VAR22 + VAR9 < 2)
        {
            if (FUN2(&VAR11->VAR20, VAR24, &VAR8, &VAR9) != -1)
                FUN3(VAR4, VAR25, "");
            return VAR9;
        }
        VAR11->VAR23 = ((VAR11->VAR20.VAR22 > 0 ? VAR11->VAR20.VAR27[0] : VAR8[0]) << 8) | (VAR11->VAR20.VAR22 > 1 ? VAR11->VAR20.VAR27[1] : VAR8[1 - VAR11->VAR20.VAR22]);
        VAR11->VAR23 = (VAR11->VAR23 & 0xfff) * 2;
        if (VAR11->VAR23 <= 0)
        {
            goto VAR29;
        }
        VAR11->VAR23 -= VAR11->VAR20.VAR22;
    }
    VAR15 = (VAR11->VAR23 > VAR9) ? VAR24 : VAR11->VAR23;
    if (FUN2(&VAR11->VAR20, VAR15, &VAR8, &VAR9) < 0)
    {
        VAR11->VAR23 -= VAR9;
        return VAR9;
    }
    VAR11->VAR23 = 0;
    VAR13 = (FUN4(VAR8 + 4) & 0xfffffffe) == 0xf8726fba;
    if (!VAR13)
    {
        VAR14 = 0;
        for (VAR17 = -1; VAR17 < VAR11->VAR30; VAR17++)
        {
            VAR14 ^= VAR8[VAR18++];
            VAR14 ^= VAR8[VAR18++];
            if (VAR17 < 0 || VAR8[VAR18 - 2] & 0x80)
            {
                VAR14 ^= VAR8[VAR18++];
                VAR14 ^= VAR8[VAR18++];
            }
        }
        if ((((VAR14 >> 4) ^ VAR14) & 0xF) != 0xF)
        {
            FUN3(VAR4, VAR31, "");
            goto VAR29;
        }
    }
    else
    {
        GetBitContext VAR32;
        MLPHeaderInfo VAR33;
        FUN5(&VAR32, VAR8 + 4, (VAR9 - 4) << 3);
        if (FUN6(VAR4, &VAR33, &VAR32) < 0)
            goto VAR29;
        VAR4->VAR34 = VAR33.VAR35;
        if (VAR4->VAR34 > 16)
            VAR4->VAR36 = VAR37;
        else
            VAR4->VAR36 = VAR38;
        VAR4->VAR39 = VAR33.VAR40;
        VAR2->VAR41 = VAR33.VAR42;
        if (!VAR4->VAR43 || !VAR4->VAR44)
        {
            if (VAR33.VAR45 == 0xbb)
            {
                FF_DISABLE_DEPRECATION_WARNINGS if (VAR4->VAR46 > 0 && VAR4->VAR46 <= 2 && VAR33.VAR30 > 1)
                {
                    VAR4->VAR43 = 2;
                    VAR4->VAR44 = VAR47;
                    VAR48
                }
                else if (VAR4->VAR49 && (VAR4->VAR49 & VAR47) == VAR4->VAR49 && VAR33.VAR30 > 1)
                {
                    VAR4->VAR43 = 2;
                    VAR4->VAR44 = VAR47;
                }
                else
                {
                    VAR4->VAR43 = VAR33.VAR50;
                    VAR4->VAR44 = VAR33.VAR51;
                }
            }
            else
            {
                FF_DISABLE_DEPRECATION_WARNINGS if (VAR4->VAR46 > 0 && VAR4->VAR46 <= 2 && VAR33.VAR30 > 1)
                {
                    VAR4->VAR43 = 2;
                    VAR4->VAR44 = VAR47;
                }
                else if (VAR4->VAR46 > 0 && VAR4->VAR46 <= VAR33.VAR52)
                {
                    VAR4->VAR43 = VAR33.VAR52;
                    VAR4->VAR44 = VAR33.VAR53;
                    VAR48
                }
                else if (VAR4->VAR49 && (VAR4->VAR49 & VAR47) == VAR4->VAR49 && VAR33.VAR30 > 1)
                {
                    VAR4->VAR43 = 2;
                    VAR4->VAR44 = VAR47;
                }
                else if (!VAR33.VAR54 || (VAR4->VAR49 && (VAR4->VAR49 & VAR33.VAR53) == VAR4->VAR49))
                {
                    VAR4->VAR43 = VAR33.VAR52;
                    VAR4->VAR44 = VAR33.VAR53;
                }
                else
                {
                    VAR4->VAR43 = VAR33.VAR54;
                    VAR4->VAR44 = VAR33.VAR55;
                }
            }
        }
        if (!VAR33.VAR56)
            VAR4->VAR57 = VAR33.VAR58;
        VAR11->VAR30 = VAR33.VAR30;
    }
    *VAR6 = VAR8;
    *VAR7 = VAR9;
    return VAR15;
VAR29:
    VAR11->VAR19 = 0;
    return 1;
}