FUN1(VAR1 *VAR2, const VAR3 *VAR4, size_t VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    struct e1000_rx_desc VAR8;
    dma_addr_t VAR9;
    unsigned int VAR10, VAR11;
    uint32_t VAR12;
    uint16_t VAR13 = 0;
    uint8_t VAR14 = 0, VAR15 = 0;
    uint8_t VAR16[VAR17];
    size_t VAR18;
    size_t VAR19;
    size_t VAR20;
    if (!(VAR7->VAR21[VAR22] & VAR23))
        return -1;
    if (VAR5 < sizeof(VAR16))
    {
        memcpy(VAR16, VAR4, VAR5);
        memset(&VAR16[VAR5], 0, sizeof(VAR16) - VAR5);
        VAR4 = VAR16;
        VAR5 = sizeof(VAR16);
    }
    if ((VAR5 > VAR24 || (VAR5 > VAR25 && !(VAR7->VAR21[VAR22] & VAR26))) && !(VAR7->VAR21[VAR22] & VAR27))
    {
        return VAR5;
    }
    if (!FUN3(VAR7, VAR4, VAR5))
        return VAR5;
    if (FUN4(VAR7) && FUN5(VAR7, VAR4))
    {
        VAR13 = FUN6(FUN7((VAR28 *)(VAR4 + 14)));
        memmove((VAR3 *)VAR4 + 4, VAR4, 12);
        VAR14 = VAR29;
        VAR15 = 4;
        VAR5 -= 4;
    }
    VAR12 = VAR7->VAR21[VAR30];
    VAR18 = 0;
    VAR20 = VAR5 + FUN8(VAR7);
    if (!FUN9(VAR7, VAR20))
    {
        FUN10(VAR7, 0, VAR31);
        return -1;
    }
    do
    {
        VAR19 = VAR20 - VAR18;
        if (VAR19 > VAR7->VAR32)
        {
            VAR19 = VAR7->VAR32;
        }
        VAR9 = FUN11(VAR7) + sizeof(VAR8) * VAR7->VAR21[VAR30];
        FUN12(&VAR7->VAR33, VAR9, &VAR8, sizeof(VAR8));
        VAR8.VAR34 = VAR13;
        VAR8.VAR35 |= (VAR14 | VAR36);
        if (VAR8.VAR37)
        {
            if (VAR18 < VAR5)
            {
                size_t VAR38 = VAR5 - VAR18;
                if (VAR38 > VAR7->VAR32)
                {
                    VAR38 = VAR7->VAR32;
                }
                FUN13(&VAR7->VAR33, FUN14(VAR8.VAR37), VAR4 + VAR18 + VAR15, VAR38);
            }
            VAR18 += VAR19;
            VAR8.VAR39 = FUN6(VAR19);
            if (VAR18 >= VAR20)
            {
                VAR8.VAR35 |= VAR40 | VAR41;
            }
            else
            {
                VAR8.VAR35 &= ~VAR40;
            }
        }
        else
        {
            FUN15(VAR42, "");
        }
        FUN13(&VAR7->VAR33, VAR9, &VAR8, sizeof(VAR8));
        if (++VAR7->VAR21[VAR30] * sizeof(VAR8) >= VAR7->VAR21[VAR43])
            VAR7->VAR21[VAR30] = 0;
        if (VAR7->VAR21[VAR30] == VAR12)
        {
            FUN15(VAR44, "", VAR12, VAR7->VAR21[VAR45], VAR7->VAR21[VAR43]);
            FUN10(VAR7, 0, VAR31);
            return -1;
        }
    } while (VAR18 < VAR20);
    VAR7->VAR21[VAR46]++;
    VAR7->VAR21[VAR47]++;
    VAR10 = VAR7->VAR21[VAR48] + VAR5 + 4;
    if (VAR10 < VAR7->VAR21[VAR48])
        VAR7->VAR21[VAR49]++;
    VAR7->VAR21[VAR48] = VAR10;
    VAR10 = VAR50;
    if ((VAR11 = VAR7->VAR21[VAR45]) < VAR7->VAR21[VAR30])
        VAR11 += VAR7->VAR21[VAR43] / sizeof(VAR8);
    if (((VAR11 - VAR7->VAR21[VAR30]) * sizeof(VAR8)) <= VAR7->VAR21[VAR43] >> VAR7->VAR51)
        VAR10 |= VAR52;
    FUN10(VAR7, 0, VAR10);
    return VAR5;
}