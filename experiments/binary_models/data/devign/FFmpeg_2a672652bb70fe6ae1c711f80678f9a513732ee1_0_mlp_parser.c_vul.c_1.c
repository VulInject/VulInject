static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 **VAR6, int *VAR7, const VAR5 *VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    int VAR13;
    uint8_t VAR14;
    int VAR15;
    int VAR16, VAR17 = 0;
    *VAR7 = 0;
    if (VAR9 == 0)
        return 0;
    if (!VAR11->VAR18)
    {
        for (VAR16 = 0; VAR16 < VAR9; VAR16++)
        {
            VAR11->VAR19.VAR20 = (VAR11->VAR19.VAR20 << 8) | VAR8[VAR16];
            if ((VAR11->VAR19.VAR20 & 0xfffffffe) == 0xf8726fba && VAR11->VAR19.VAR21 + VAR16 >= 7)
            {
                VAR11->VAR18 = 1;
                VAR11->VAR22 = 0;
                break;
            }
        }
        if (!VAR11->VAR18)
        {
            FUN2(&VAR11->VAR19, VAR23, &VAR8, &VAR9);
            return VAR9;
        }
        FUN2(&VAR11->VAR19, VAR16 - 7, &VAR8, &VAR9);
        return VAR16 - 7;
    }
    if (VAR11->VAR22 == 0)
    {
        for (; VAR11->VAR19.VAR24 > 0; VAR11->VAR19.VAR24--)
        {
            VAR11->VAR19.VAR25[VAR11->VAR19.VAR21++] = VAR11->VAR19.VAR25[VAR11->VAR19.VAR26++];
        }
        if (VAR11->VAR19.VAR21 + VAR9 < 2)
        {
            FUN2(&VAR11->VAR19, VAR23, &VAR8, &VAR9);
            return VAR9;
        }
        VAR11->VAR22 = ((VAR11->VAR19.VAR21 > 0 ? VAR11->VAR19.VAR25[0] : VAR8[0]) << 8) | (VAR11->VAR19.VAR21 > 1 ? VAR11->VAR19.VAR25[1] : VAR8[1 - VAR11->VAR19.VAR21]);
        VAR11->VAR22 = (VAR11->VAR22 & 0xfff) * 2;
        if (VAR11->VAR22 <= 0)
        {
            goto VAR27;
        }
        VAR11->VAR22 -= VAR11->VAR19.VAR21;
    }
    VAR15 = (VAR11->VAR22 > VAR9) ? VAR23 : VAR11->VAR22;
    if (FUN2(&VAR11->VAR19, VAR15, &VAR8, &VAR9) < 0)
    {
        VAR11->VAR22 -= VAR9;
        return VAR9;
    }
    VAR11->VAR22 = 0;
    VAR13 = (FUN3(VAR8 + 4) & 0xfffffffe) == 0xf8726fba;
    if (!VAR13)
    {
        VAR14 = 0;
        for (VAR16 = -1; VAR16 < VAR11->VAR28; VAR16++)
        {
            VAR14 ^= VAR8[VAR17++];
            VAR14 ^= VAR8[VAR17++];
            if (VAR16 < 0 || VAR8[VAR17 - 2] & 0x80)
            {
                VAR14 ^= VAR8[VAR17++];
                VAR14 ^= VAR8[VAR17++];
            }
        }
        if ((((VAR14 >> 4) ^ VAR14) & 0xF) != 0xF)
        {
            FUN4(VAR4, VAR29, "");
            goto VAR27;
        }
    }
    else
    {
        GetBitContext VAR30;
        MLPHeaderInfo VAR31;
        FUN5(&VAR30, VAR8 + 4, (VAR9 - 4) << 3);
        if (FUN6(VAR4, &VAR31, &VAR30) < 0)
            goto VAR27;
        VAR4->VAR32 = VAR31.VAR33;
        if (VAR4->VAR32 > 16)
            VAR4->VAR34 = VAR35;
        else
            VAR4->VAR34 = VAR36;
        VAR4->VAR37 = VAR31.VAR38;
        VAR2->VAR39 = VAR31.VAR40;
        if (VAR31.VAR41 == 0xbb)
        {
            VAR4->VAR42 = VAR43[VAR31.VAR44];
            VAR4->VAR45 = VAR46[VAR31.VAR44];
        }
        else
        {
            if (VAR31.VAR47)
            {
                VAR4->VAR42 = FUN7(VAR31.VAR47);
                VAR4->VAR45 = FUN8(VAR31.VAR47);
            }
            else
            {
                VAR4->VAR42 = FUN7(VAR31.VAR48);
                VAR4->VAR45 = FUN8(VAR31.VAR48);
            }
        }
    }
    if (!VAR31.VAR49)
        VAR4->VAR50 = VAR31.VAR51;
    VAR11->VAR28 = VAR31.VAR28;
}
*VAR6 = VAR8;
*VAR7 = VAR9;
return VAR15;
VAR27 : VAR11->VAR18 = 0;
return 1;