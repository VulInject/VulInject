FUN1(VAR1 *VAR2, const struct VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = FUN3(VAR7);
    struct e1000_rx_desc VAR10;
    dma_addr_t VAR11;
    unsigned int VAR12, VAR13;
    uint32_t VAR14;
    uint16_t VAR15 = 0;
    uint8_t VAR16 = 0;
    uint8_t VAR17[VAR18];
    struct iovec VAR19;
    VAR20 *VAR21 = VAR4->VAR22;
    size_t VAR23 = FUN4(VAR4, VAR5);
    size_t VAR24 = 0;
    size_t VAR25;
    size_t VAR26;
    size_t VAR27;
    static const int VAR28[6] = {VAR29, VAR30, VAR31, VAR32, VAR33, VAR34};
    if (!(VAR7->VAR35[VAR36] & VAR37))
    {
        return -1;
    }
    if (!(VAR7->VAR35[VAR38] & VAR39))
    {
        return -1;
    }
    if (VAR23 < sizeof(VAR17))
    {
        FUN5(VAR4, VAR5, 0, VAR17, VAR23);
        memset(&VAR17[VAR23], 0, sizeof(VAR17) - VAR23);
        FUN6(VAR7, VAR40);
        VAR19.VAR22 = VAR21 = VAR17;
        VAR19.VAR41 = VAR23 = sizeof(VAR17);
        VAR5 = 1;
        VAR4 = &VAR19;
    }
    else if (VAR4->VAR41 < VAR42)
    {
        FUN5(VAR4, VAR5, 0, VAR17, VAR42);
        VAR21 = VAR17;
    }
    if ((VAR23 > VAR43 || (VAR23 > VAR44 && !(VAR7->VAR35[VAR38] & VAR45))) && !(VAR7->VAR35[VAR38] & VAR46))
    {
        FUN6(VAR7, VAR47);
        return VAR23;
    }
    if (!FUN7(VAR7, VAR21, VAR23))
    {
        return VAR23;
    }
    if (FUN8(VAR7) && FUN9(VAR7, VAR21))
    {
        VAR15 = FUN10(FUN11((VAR48 *)(VAR21 + 14)));
        VAR24 = 4;
        if (VAR21 == VAR4->VAR22)
        {
            memmove(VAR21 + 4, VAR21, 12);
        }
        else
        {
            FUN12(VAR4, VAR5, 4, VAR21, 12);
            while (VAR4->VAR41 <= VAR24)
            {
                VAR24 -= VAR4->VAR41;
                VAR4++;
            }
        }
        VAR16 = VAR49;
        VAR23 -= 4;
    }
    VAR14 = VAR7->VAR35[VAR50];
    VAR25 = 0;
    VAR27 = VAR23 + FUN13(VAR7);
    if (!FUN14(VAR7, VAR27))
    {
        FUN15(VAR7, 0, VAR51);
        return -1;
    }
    do
    {
        VAR26 = VAR27 - VAR25;
        if (VAR26 > VAR7->VAR52)
        {
            VAR26 = VAR7->VAR52;
        }
        VAR11 = FUN16(VAR7) + sizeof(VAR10) * VAR7->VAR35[VAR50];
        FUN17(VAR9, VAR11, &VAR10, sizeof(VAR10));
        VAR10.VAR53 = VAR15;
        VAR10.VAR54 |= (VAR16 | VAR55);
        if (VAR10.VAR56)
        {
            if (VAR25 < VAR23)
            {
                size_t VAR57;
                hwaddr VAR58 = FUN18(VAR10.VAR56);
                size_t VAR59 = VAR23 - VAR25;
                if (VAR59 > VAR7->VAR52)
                {
                    VAR59 = VAR7->VAR52;
                }
                do
                {
                    VAR57 = FUN19(VAR59, VAR4->VAR41 - VAR24);
                    FUN20(VAR9, VAR58, VAR4->VAR22 + VAR24, VAR57);
                    VAR59 -= VAR57;
                    VAR58 += VAR57;
                    VAR24 += VAR57;
                    if (VAR24 == VAR4->VAR41)
                    {
                        VAR4++;
                        VAR24 = 0;
                    }
                } while (VAR59);
            }
            VAR25 += VAR26;
            VAR10.VAR60 = FUN10(VAR26);
            if (VAR25 >= VAR27)
            {
                VAR10.VAR54 |= VAR61 | VAR62;
            }
            else
            {
                VAR10.VAR54 &= ~VAR61;
            }
        }
        else
        {
            FUN21(VAR63, "");
        }
        FUN20(VAR9, VAR11, &VAR10, sizeof(VAR10));
        if (++VAR7->VAR35[VAR50] * sizeof(VAR10) >= VAR7->VAR35[VAR64])
            VAR7->VAR35[VAR50] = 0;
        if (VAR7->VAR35[VAR50] == VAR14)
        {
            FUN21(VAR65, "", VAR14, VAR7->VAR35[VAR66], VAR7->VAR35[VAR64]);
            FUN15(VAR7, 0, VAR51);
            return -1;
        }
    } while (VAR25 < VAR27);
    FUN22(VAR7, VAR28, VAR27);
    FUN6(VAR7, VAR67);
    VAR7->VAR35[VAR68] = VAR7->VAR35[VAR67];
    FUN23(VAR7, VAR69, VAR23 + 4);
    VAR7->VAR35[VAR70] = VAR7->VAR35[VAR69];
    VAR7->VAR35[VAR71] = VAR7->VAR35[VAR72];
    VAR12 = VAR73;
    if ((VAR13 = VAR7->VAR35[VAR66]) < VAR7->VAR35[VAR50])
        VAR13 += VAR7->VAR35[VAR64] / sizeof(VAR10);
    if (((VAR13 - VAR7->VAR35[VAR50]) * sizeof(VAR10)) <= VAR7->VAR35[VAR64] >> VAR7->VAR74)
        VAR12 |= VAR75;
    FUN15(VAR7, 0, VAR12);
    return VAR23;
}