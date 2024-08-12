static bool FUN1(VAR1 *VAR2, target_ulong VAR3, int VAR4, ARMMMUIdx VAR5, VAR6 *VAR7, VAR8 *VAR9, int *VAR10, VAR11 *VAR12, VAR13 *VAR14)
{
    VAR15 *VAR16 = FUN2(VAR2);
    VAR17 *VAR18 = FUN3(VAR16);
    MMUFaultType VAR19 = VAR20;
    uint32_t VAR21 = 1;
    uint32_t VAR22 = 0;
    int32_t VAR23, VAR24;
    uint32_t VAR25;
    uint64_t VAR26;
    int VAR27;
    hwaddr VAR28, VAR29;
    uint32_t VAR30;
    target_ulong VAR31;
    uint32_t VAR32;
    int32_t VAR33 = 9;
    int32_t VAR34 = 32;
    int VAR35;
    int32_t VAR36 = 0;
    VAR37 *VAR38 = FUN4(VAR2, VAR5);
    int VAR39, VAR40, VAR41, VAR42;
    uint32_t VAR43 = FUN5(VAR2, VAR5);
    bool VAR44 = true;
    if (FUN6(VAR2, VAR43))
    {
        VAR34 = 64;
        if (VAR43 > 1)
        {
            if (VAR5 != VAR45)
            {
                VAR36 = FUN7(VAR38->VAR46, 20, 1);
            }
        }
        else
        {
            if (FUN7(VAR3, 55, 1))
            {
                VAR36 = FUN7(VAR38->VAR46, 38, 1);
            }
            else
            {
                VAR36 = FUN7(VAR38->VAR46, 37, 1);
            }
        }
        VAR36 *= 8;
        if (VAR43 > 1)
        {
            VAR44 = false;
        }
    }
    else
    {
        if (VAR43 == 2)
        {
            VAR44 = false;
        }
    }
    if (VAR34 == 64)
    {
        VAR23 = FUN8(VAR38->VAR46, 0, 6);
        VAR23 = FUN9(VAR23, 39);
        VAR23 = FUN10(VAR23, 16);
    }
    else if (VAR5 != VAR45)
    {
        VAR23 = FUN8(VAR38->VAR46, 0, 3);
    }
    else
    {
        bool VAR47 = FUN8(VAR38->VAR46, 4, 1);
        bool VAR48 = FUN8(VAR38->VAR46, 3, 1);
        VAR23 = FUN11(VAR38->VAR46, 0, 4);
        if (VAR48 != VAR47)
        {
            FUN12(VAR49, "");
        }
    }
    VAR24 = FUN8(VAR38->VAR46, 16, 6);
    if (VAR34 == 64)
    {
        VAR24 = FUN9(VAR24, 39);
        VAR24 = FUN10(VAR24, 16);
    }
    if (VAR23 && !FUN7(VAR3, VAR34 - VAR23, VAR23 - VAR36))
    {
        VAR27 = 0;
    }
    else if (VAR44 && VAR24 && !FUN7(~VAR3, VAR34 - VAR24, VAR24 - VAR36))
    {
        VAR27 = 1;
    }
    else if (!VAR23)
    {
        VAR27 = 0;
    }
    else if (!VAR24 && VAR44)
    {
        VAR27 = 1;
    }
    else
    {
        VAR19 = VAR20;
        goto VAR50;
    }
    if (VAR27 == 0)
    {
        VAR26 = FUN13(VAR2, VAR5, 0);
        if (VAR43 < 2)
        {
            VAR22 = FUN8(VAR38->VAR46, 7, 1);
        }
        VAR35 = VAR34 - VAR23;
        VAR25 = FUN8(VAR38->VAR46, 14, 2);
        if (VAR25 == 1)
        {
            VAR33 = 13;
        }
        if (VAR25 == 2)
        {
            VAR33 = 11;
        }
    }
    else
    {
        assert(VAR44);
        VAR26 = FUN13(VAR2, VAR5, 1);
        VAR22 = FUN8(VAR38->VAR46, 23, 1);
        VAR35 = VAR34 - VAR24;
        VAR25 = FUN8(VAR38->VAR46, 30, 2);
        if (VAR25 == 3)
        {
            VAR33 = 13;
        }
        if (VAR25 == 1)
        {
            VAR33 = 11;
        }
    }
    if (VAR22)
    {
        goto VAR50;
    }
    if (VAR5 != VAR45)
    {
        VAR21 = 4 - (VAR35 - 4) / VAR33;
    }
    else
    {
        int VAR51 = FUN8(VAR38->VAR46, 6, 2);
        bool VAR52;
        if (VAR34 == 32 || VAR33 == 9)
        {
            VAR21 = 2 - VAR51;
        }
        else
        {
            VAR21 = 3 - VAR51;
        }
        VAR52 = FUN14(VAR16, VAR34 == 64, VAR21, VAR35, VAR33);
        if (!VAR52)
        {
            VAR21 = VAR34 == 64 ? 0 : 1;
            VAR19 = VAR20;
            goto VAR50;
        }
    }
    if (VAR34 != VAR35)
    {
        VAR3 &= (1ULL << VAR35) - 1;
    }
    VAR29 = (1ULL << (VAR33 + 3)) - 1;
    VAR28 = FUN7(VAR26, 0, 48);
    VAR28 &= ~((1ULL << (VAR35 - (VAR33 * (4 - VAR21)))) - 1);
    VAR30 = FUN15(VAR2, VAR5) ? 0 : (1 << 4);
    for (;;)
    {
        uint64_t VAR53;
        bool VAR54;
        VAR28 |= (VAR3 >> (VAR33 * (4 - VAR21))) & VAR29;
        VAR28 &= ~7ULL;
        VAR54 = FUN8(VAR30, 4, 1);
        VAR53 = FUN16(VAR18, VAR28, !VAR54);
        if (!(VAR53 & 1) || (!(VAR53 & 2) && (VAR21 == 3)))
        {
            goto VAR50;
        }
        VAR28 = VAR53 & 0xfffffff000ULL;
        if ((VAR53 & 2) && (VAR21 < 3))
        {
            VAR30 |= FUN7(VAR53, 59, 5);
            VAR21++;
            continue;
        }
        VAR31 = (1ULL << ((VAR33 * (4 - VAR21)) + 3));
        VAR28 |= (VAR3 & (VAR31 - 1));
        VAR32 = FUN7(VAR53, 2, 10) | (FUN7(VAR53, 52, 12) << 10);
        if (VAR5 == VAR45)
        {
            break;
        }
        VAR32 |= FUN8(VAR30, 0, 2) << 11;
        VAR32 |= FUN8(VAR30, 3, 1) << 5;
        if (FUN8(VAR30, 2, 1))
        {
            VAR32 &= ~(1 << 4);
        }
        VAR32 |= VAR54 << 3;
        break;
    }
    VAR19 = VAR55;
    if ((VAR32 & (1 << 8)) == 0)
    {
        goto VAR50;
    }
    VAR39 = FUN8(VAR32, 4, 2);
    VAR41 = FUN8(VAR32, 12, 1);
    if (VAR5 == VAR45)
    {
        VAR40 = true;
        *VAR10 = FUN17(VAR2, VAR39, VAR41);
    }
    else
    {
        VAR40 = FUN8(VAR32, 3, 1);
        VAR42 = FUN8(VAR32, 11, 1);
        *VAR10 = FUN18(VAR2, VAR5, VAR34 == 64, VAR39, VAR40, VAR41, VAR42);
    }
    VAR19 = VAR56;
    if (!(*VAR10 & (1 << VAR4)))
    {
        goto VAR50;
    }
    if (VAR40)
    {
        VAR9->VAR57 = false;
    }
    *VAR7 = VAR28;
    *VAR12 = VAR31;
    return false;
VAR50:
    *VAR14 = (1 << 9) | (VAR19 << 2) | VAR21;
    return true;
}