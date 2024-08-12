FUN1(VAR1 *VAR2, const VAR3 *VAR4, size_t VAR5)
{
    VAR6 *VAR7 = FUN2(VAR8, VAR2, VAR2)->VAR9;
    struct e1000_rx_desc VAR10;
    dma_addr_t VAR11;
    unsigned int VAR12, VAR13;
    uint32_t VAR14;
    uint16_t VAR15 = 0;
    uint8_t VAR16 = 0, VAR17 = 0;
    uint8_t VAR18[VAR19];
    size_t VAR20;
    size_t VAR21;
    size_t VAR22;
    if (!(VAR7->VAR23[VAR24] & VAR25))
        return -1;
    if (VAR5 < sizeof(VAR18))
    {
        memcpy(VAR18, VAR4, VAR5);
        memset(&VAR18[VAR5], 0, sizeof(VAR18) - VAR5);
        VAR4 = VAR18;
        VAR5 = sizeof(VAR18);
    }
    if (!FUN3(VAR7, VAR4, VAR5))
        return VAR5;
    if (FUN4(VAR7) && FUN5(VAR7, VAR4))
    {
        VAR15 = FUN6(FUN7((VAR26 *)(VAR4 + 14)));
        memmove((VAR3 *)VAR4 + 4, VAR4, 12);
        VAR16 = VAR27;
        VAR17 = 4;
        VAR5 -= 4;
    }
    VAR14 = VAR7->VAR23[VAR28];
    VAR20 = 0;
    VAR22 = VAR5 + FUN8(VAR7);
    if (!FUN9(VAR7, VAR22))
    {
        FUN10(VAR7, 0, VAR29);
        return -1;
    }
    do
    {
        VAR21 = VAR22 - VAR20;
        if (VAR21 > VAR7->VAR30)
        {
            VAR21 = VAR7->VAR30;
        }
        VAR11 = FUN11(VAR7) + sizeof(VAR10) * VAR7->VAR23[VAR28];
        FUN12(&VAR7->VAR31, VAR11, &VAR10, sizeof(VAR10));
        VAR10.VAR32 = VAR15;
        VAR10.VAR33 |= (VAR16 | VAR34);
        if (VAR10.VAR35)
        {
            if (VAR20 < VAR5)
            {
                size_t VAR36 = VAR5 - VAR20;
                if (VAR36 > VAR7->VAR30)
                {
                    VAR36 = VAR7->VAR30;
                }
                FUN13(&VAR7->VAR31, FUN14(VAR10.VAR35), VAR4 + VAR20 + VAR17, VAR36);
            }
            VAR20 += VAR21;
            VAR10.VAR37 = FUN6(VAR21);
            if (VAR20 >= VAR22)
            {
                VAR10.VAR33 |= VAR38 | VAR39;
            }
            else
            {
                VAR10.VAR33 &= ~VAR38;
            }
        }
        else
        {
            FUN15(VAR40, "");
        }
        FUN13(&VAR7->VAR31, VAR11, &VAR10, sizeof(VAR10));
        if (++VAR7->VAR23[VAR28] * sizeof(VAR10) >= VAR7->VAR23[VAR41])
            VAR7->VAR23[VAR28] = 0;
        if (VAR7->VAR23[VAR28] == VAR14)
        {
            FUN15(VAR42, "", VAR14, VAR7->VAR23[VAR43], VAR7->VAR23[VAR41]);
            FUN10(VAR7, 0, VAR29);
            return -1;
        }
    } while (VAR20 < VAR22);
    VAR7->VAR23[VAR44]++;
    VAR7->VAR23[VAR45]++;
    VAR12 = VAR7->VAR23[VAR46] + VAR5 + 4;
    if (VAR12 < VAR7->VAR23[VAR46])
        VAR7->VAR23[VAR47]++;
    VAR7->VAR23[VAR46] = VAR12;
    VAR12 = VAR48;
    if ((VAR13 = VAR7->VAR23[VAR43]) < VAR7->VAR23[VAR28])
        VAR13 += VAR7->VAR23[VAR41] / sizeof(VAR10);
    if (((VAR13 - VAR7->VAR23[VAR28]) * sizeof(VAR10)) <= VAR7->VAR23[VAR41] >> VAR7->VAR49)
        VAR12 |= VAR50;
    FUN10(VAR7, 0, VAR12);
    return VAR5;
}