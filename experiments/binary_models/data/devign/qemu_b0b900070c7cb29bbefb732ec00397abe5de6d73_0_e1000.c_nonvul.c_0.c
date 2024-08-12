FUN1(VAR1 *VAR2, const VAR3 *VAR4, size_t VAR5)
{
    VAR6 *VAR7 = FUN2(VAR8, VAR2, VAR2)->VAR9;
    struct e1000_rx_desc VAR10;
    target_phys_addr_t VAR11;
    unsigned int VAR12, VAR13;
    uint32_t VAR14;
    uint16_t VAR15 = 0;
    uint8_t VAR16 = 0, VAR17 = 0;
    if (!(VAR7->VAR18[VAR19] & VAR20))
        return -1;
    if (VAR5 > VAR7->VAR21)
    {
        FUN3(VAR22, "", (unsigned long)VAR5, VAR7->VAR21);
        return -1;
    }
    if (!FUN4(VAR7, VAR4, VAR5))
        return VAR5;
    if (FUN5(VAR7) && FUN6(VAR7, VAR4))
    {
        VAR15 = FUN7(FUN8((VAR23 *)(VAR4 + 14)));
        memmove((VAR3 *)VAR4 + 4, VAR4, 12);
        VAR16 = VAR24;
        VAR17 = 4;
        VAR5 -= 4;
    }
    VAR14 = VAR7->VAR18[VAR25];
    do
    {
        if (VAR7->VAR18[VAR25] == VAR7->VAR18[VAR26] && VAR7->VAR27)
        {
            FUN9(VAR7, 0, VAR28);
            return -1;
        }
        VAR11 = ((VAR29)VAR7->VAR18[VAR30] << 32) + VAR7->VAR18[VAR31] + sizeof(VAR10) * VAR7->VAR18[VAR25];
        FUN10(VAR11, (void *)&VAR10, sizeof(VAR10));
        VAR10.VAR32 = VAR15;
        VAR10.VAR33 |= (VAR16 | VAR34);
        if (VAR10.VAR35)
        {
            FUN11(FUN12(VAR10.VAR35), (void *)(VAR4 + VAR17), VAR5);
            VAR10.VAR36 = FUN7(VAR5 + 4);
            VAR10.VAR33 |= VAR37 | VAR38;
        }
        else
            FUN3(VAR22, "");
        FUN11(VAR11, (void *)&VAR10, sizeof(VAR10));
        if (++VAR7->VAR18[VAR25] * sizeof(VAR10) >= VAR7->VAR18[VAR39])
            VAR7->VAR18[VAR25] = 0;
        VAR7->VAR27 = 1;
        if (VAR7->VAR18[VAR25] == VAR14)
        {
            FUN3(VAR40, "", VAR14, VAR7->VAR18[VAR26], VAR7->VAR18[VAR39]);
            FUN9(VAR7, 0, VAR28);
            return -1;
        }
    } while (VAR10.VAR35 == 0);
    VAR7->VAR18[VAR41]++;
    VAR7->VAR18[VAR42]++;
    VAR12 = VAR7->VAR18[VAR43];
    if ((VAR7->VAR18[VAR43] += VAR5) < VAR12)
        VAR7->VAR18[VAR44]++;
    VAR12 = VAR45;
    if ((VAR13 = VAR7->VAR18[VAR26]) < VAR7->VAR18[VAR25])
        VAR13 += VAR7->VAR18[VAR39] / sizeof(VAR10);
    if (((VAR13 - VAR7->VAR18[VAR25]) * sizeof(VAR10)) <= VAR7->VAR18[VAR39] >> VAR7->VAR46)
        VAR12 |= VAR47;
    FUN9(VAR7, 0, VAR12);
    return VAR5;
}