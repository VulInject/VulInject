static int FUN1(VAR1 *VAR2, target_ulong VAR3, int VAR4, ARMMMUIdx VAR5, VAR6 *VAR7, VAR8 *VAR9, int *VAR10, VAR11 *VAR12)
{
    VAR13 *VAR14 = FUN2(FUN3(VAR2));
    MMUFaultType VAR15 = VAR16;
    uint32_t VAR17 = 1;
    uint32_t VAR18;
    int32_t VAR19;
    uint32_t VAR20;
    uint64_t VAR21;
    int VAR22;
    hwaddr VAR23, VAR24;
    uint32_t VAR25;
    target_ulong VAR26;
    uint32_t VAR27;
    int32_t VAR28 = 9;
    int32_t VAR29 = 32;
    int32_t VAR30 = 0;
    VAR31 *VAR32 = FUN4(VAR2, VAR5);
    int VAR33, VAR34, VAR35, VAR36;
    uint32_t VAR37 = FUN5(VAR2, VAR5);
    bool VAR38 = true;
    if (FUN6(VAR2, VAR37))
    {
        VAR29 = 64;
        if (VAR37 > 1)
        {
            VAR30 = FUN7(VAR32->VAR39, 20, 1);
        }
        else
        {
            if (FUN7(VAR3, 55, 1))
            {
                VAR30 = FUN7(VAR32->VAR39, 38, 1);
            }
            else
            {
                VAR30 = FUN7(VAR32->VAR39, 37, 1);
            }
        }
        VAR30 *= 8;
        if (VAR37 > 1)
        {
            VAR38 = false;
        }
    }
    uint32_t VAR40 = FUN8(VAR32->VAR39, 0, 6);
    if (VAR29 == 64)
    {
        VAR40 = FUN9(VAR40, 39);
        VAR40 = FUN10(VAR40, 16);
    }
    uint32_t VAR41 = FUN8(VAR32->VAR39, 16, 6);
    if (VAR29 == 64)
    {
        VAR41 = FUN9(VAR41, 39);
        VAR41 = FUN10(VAR41, 16);
    }
    if (VAR40 && !FUN7(VAR3, VAR29 - VAR40, VAR40 - VAR30))
    {
        VAR22 = 0;
    }
    else if (VAR38 && VAR41 && !FUN7(~VAR3, VAR29 - VAR41, VAR41 - VAR30))
    {
        VAR22 = 1;
    }
    else if (!VAR40)
    {
        VAR22 = 0;
    }
    else if (!VAR41 && VAR38)
    {
        VAR22 = 1;
    }
    else
    {
        VAR15 = VAR16;
        goto VAR42;
    }
    if (VAR22 == 0)
    {
        VAR21 = FUN11(VAR2, VAR5, 0);
        VAR18 = FUN8(VAR32->VAR39, 7, 1);
        VAR19 = VAR40;
        VAR20 = FUN8(VAR32->VAR39, 14, 2);
        if (VAR20 == 1)
        {
            VAR28 = 13;
        }
        if (VAR20 == 2)
        {
            VAR28 = 11;
        }
    }
    else
    {
        assert(VAR38);
        VAR21 = FUN11(VAR2, VAR5, 1);
        VAR18 = FUN8(VAR32->VAR39, 23, 1);
        VAR19 = VAR41;
        VAR20 = FUN8(VAR32->VAR39, 30, 2);
        if (VAR20 == 3)
        {
            VAR28 = 13;
        }
        if (VAR20 == 1)
        {
            VAR28 = 11;
        }
    }
    if (VAR18)
    {
        goto VAR42;
    }
    VAR17 = 4 - (VAR29 - VAR19 - 4) / VAR28;
    if (VAR19)
    {
        VAR3 &= (1ULL << (VAR29 - VAR19)) - 1;
    }
    VAR24 = (1ULL << (VAR28 + 3)) - 1;
    VAR23 = FUN7(VAR21, 0, 48);
    VAR23 &= ~((1ULL << (VAR29 - VAR19 - (VAR28 * (4 - VAR17)))) - 1);
    VAR25 = FUN12(VAR2, VAR5) ? 0 : (1 << 4);
    for (;;)
    {
        uint64_t VAR43;
        bool VAR44;
        VAR23 |= (VAR3 >> (VAR28 * (4 - VAR17))) & VAR24;
        VAR23 &= ~7ULL;
        VAR44 = FUN8(VAR25, 4, 1);
        VAR43 = FUN13(VAR14, VAR23, !VAR44);
        if (!(VAR43 & 1) || (!(VAR43 & 2) && (VAR17 == 3)))
        {
            goto VAR42;
        }
        VAR23 = VAR43 & 0xfffffff000ULL;
        if ((VAR43 & 2) && (VAR17 < 3))
        {
            VAR25 |= FUN7(VAR43, 59, 5);
            VAR17++;
            continue;
        }
        VAR26 = (1ULL << ((VAR28 * (4 - VAR17)) + 3));
        VAR23 |= (VAR3 & (VAR26 - 1));
        VAR27 = FUN7(VAR43, 2, 10) | (FUN7(VAR43, 52, 12) << 10);
        VAR27 |= FUN8(VAR25, 0, 2) << 11;
        VAR27 |= FUN8(VAR25, 3, 1) << 5;
        if (FUN8(VAR25, 2, 1))
        {
            VAR27 &= ~(1 << 4);
        }
        VAR27 |= VAR44 << 3;
        break;
    }
    VAR15 = VAR45;
    if ((VAR27 & (1 << 8)) == 0)
    {
        goto VAR42;
    }
    VAR33 = FUN8(VAR27, 4, 2);
    VAR34 = FUN8(VAR27, 3, 1);
    VAR35 = FUN8(VAR27, 12, 1);
    VAR36 = FUN8(VAR27, 11, 1);
    *VAR10 = FUN14(VAR2, VAR5, VAR29 == 64, VAR33, VAR34, VAR35, VAR36);
    VAR15 = VAR46;
    if (!(*VAR10 & (1 << VAR4)))
    {
        goto VAR42;
    }
    if (VAR34)
    {
        VAR9->VAR47 = false;
    }
    *VAR7 = VAR23;
    *VAR12 = VAR26;
    return 0;
VAR42:
    return (1 << 9) | (VAR15 << 2) | VAR17;
}